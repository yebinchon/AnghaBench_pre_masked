
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_ioctx {int buf; int dma; } ;
struct srpt_device {int device; } ;
struct kmem_cache {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct srpt_ioctx*) ;
 int FUNC_3 (struct kmem_cache*,int ) ;
 int FUNC_4 (struct kmem_cache*,int ) ;
 int FUNC_5 (struct kmem_cache*) ;
 struct srpt_ioctx* FUNC_6 (int,int ) ;

__attribute__((used)) static struct srpt_ioctx *FUNC_7(struct srpt_device *VAR_1,
        int VAR_2,
        struct kmem_cache *VAR_3,
        enum dma_data_direction VAR_4)
{
 struct srpt_ioctx *VAR_5;

 VAR_5 = FUNC_6(VAR_2, VAR_0);
 if (!VAR_5)
  goto err;

 VAR_5->buf = FUNC_3(VAR_3, VAR_0);
 if (!VAR_5->buf)
  goto err_free_ioctx;

 VAR_5->dma = FUNC_0(VAR_1->device, VAR_5->buf,
           FUNC_5(VAR_3), VAR_4);
 if (FUNC_1(VAR_1->device, VAR_5->dma))
  goto err_free_buf;

 return VAR_5;

err_free_buf:
 FUNC_4(VAR_3, VAR_5->buf);
err_free_ioctx:
 FUNC_2(VAR_5);
err:
 return ((void*)0);
}
