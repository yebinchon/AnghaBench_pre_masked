
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_ioctx {int buf; int dma; } ;
struct srpt_device {int device; } ;
struct kmem_cache {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct srpt_ioctx*) ;
 int FUNC_2 (struct kmem_cache*,int ) ;
 int FUNC_3 (struct kmem_cache*) ;

__attribute__((used)) static void FUNC_4(struct srpt_device *VAR_0, struct srpt_ioctx *VAR_1,
       struct kmem_cache *VAR_2,
       enum dma_data_direction VAR_3)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0->device, VAR_1->dma,
       FUNC_3(VAR_2), VAR_3);
 FUNC_2(VAR_2, VAR_1->buf);
 FUNC_1(VAR_1);
}
