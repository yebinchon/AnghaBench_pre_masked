
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; int * mm_node; } ;
struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {int * ttm; TYPE_1__ base; int moving; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*) ;
 int FUNC_5 (struct ttm_buffer_object*) ;
 int FUNC_6 (struct ttm_buffer_object*,int,int) ;
 int FUNC_7 (struct ttm_buffer_object*,struct ttm_buffer_object**) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ttm_buffer_object *VAR_1,
         struct dma_fence *VAR_2,
         bool VAR_3,
         struct ttm_mem_reg *VAR_4)
{
 struct ttm_bo_device *VAR_5 = VAR_1->bdev;
 struct ttm_mem_type_manager *VAR_6 = &VAR_5->man[VAR_4->mem_type];
 struct ttm_mem_reg *VAR_7 = &VAR_1->mem;
 int VAR_8;
 struct ttm_buffer_object *VAR_9;

 FUNC_2(VAR_1->base.resv, VAR_2);
 if (VAR_3) {
  VAR_8 = FUNC_6(VAR_1, 0, 0);
  if (VAR_8)
   return VAR_8;

  if (VAR_6->flags & VAR_0) {
   FUNC_8(VAR_1->ttm);
   VAR_1->ttm = ((void*)0);
  }
  FUNC_3(VAR_1);
 } else {
  FUNC_1(VAR_1->moving);
  VAR_1->moving = FUNC_0(VAR_2);

  VAR_8 = FUNC_7(VAR_1, &VAR_9);
  if (VAR_8)
   return VAR_8;

  FUNC_2(VAR_9->base.resv, VAR_2);







  if (!(VAR_6->flags & VAR_0))
   VAR_9->ttm = ((void*)0);
  else
   VAR_1->ttm = ((void*)0);

  FUNC_5(VAR_9);
  FUNC_4(VAR_9);
 }

 *VAR_7 = *VAR_4;
 VAR_4->mm_node = ((void*)0);

 return 0;
}
