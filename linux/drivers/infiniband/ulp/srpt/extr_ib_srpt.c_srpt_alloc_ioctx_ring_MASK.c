
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_send_ioctx {int dummy; } ;
struct srpt_recv_ioctx {int dummy; } ;
struct srpt_ioctx {int index; int offset; } ;
struct srpt_device {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int ring ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct srpt_ioctx**) ;
 struct srpt_ioctx** FUNC_2 (int,int,int ) ;
 struct srpt_ioctx* FUNC_3 (struct srpt_device*,int,struct kmem_cache*,int) ;
 int FUNC_4 (struct srpt_device*,struct srpt_ioctx*,struct kmem_cache*,int) ;

__attribute__((used)) static struct srpt_ioctx **FUNC_5(struct srpt_device *VAR_1,
    int VAR_2, int VAR_3,
    struct kmem_cache *VAR_4,
    int VAR_5,
    enum dma_data_direction VAR_6)
{
 struct srpt_ioctx **VAR_7;
 int VAR_8;

 FUNC_0(VAR_3 != sizeof(struct srpt_recv_ioctx) &&
  VAR_3 != sizeof(struct srpt_send_ioctx));

 VAR_7 = FUNC_2(VAR_2, sizeof(VAR_7[0]), VAR_0);
 if (!VAR_7)
  goto out;
 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  VAR_7[VAR_8] = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_6);
  if (!VAR_7[VAR_8])
   goto err;
  VAR_7[VAR_8]->index = VAR_8;
  VAR_7[VAR_8]->offset = VAR_5;
 }
 goto out;

err:
 while (--VAR_8 >= 0)
  FUNC_4(VAR_1, VAR_7[VAR_8], VAR_4, VAR_6);
 FUNC_1(VAR_7);
 VAR_7 = ((void*)0);
out:
 return VAR_7;
}
