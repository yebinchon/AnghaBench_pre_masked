
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int flags; int move_lock; void* move; } ;
struct ttm_mem_reg {size_t mem_type; int * mm_node; } ;
struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {int * ttm; void* moving; TYPE_1__ base; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*,void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,struct dma_fence*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ttm_buffer_object*) ;
 int FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object*) ;
 int FUNC_9 (struct ttm_buffer_object*,int,int) ;
 int FUNC_10 (struct ttm_buffer_object*,struct ttm_buffer_object**) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct ttm_buffer_object *VAR_1,
    struct dma_fence *VAR_2, bool VAR_3,
    struct ttm_mem_reg *VAR_4)
{
 struct ttm_bo_device *VAR_5 = VAR_1->bdev;
 struct ttm_mem_reg *VAR_6 = &VAR_1->mem;

 struct ttm_mem_type_manager *VAR_7 = &VAR_5->man[VAR_6->mem_type];
 struct ttm_mem_type_manager *VAR_8 = &VAR_5->man[VAR_4->mem_type];

 int VAR_9;

 FUNC_3(VAR_1->base.resv, VAR_2);

 if (!VAR_3) {
  struct ttm_buffer_object *VAR_10;
  FUNC_2(VAR_1->moving);
  VAR_1->moving = FUNC_0(VAR_2);

  VAR_9 = FUNC_10(VAR_1, &VAR_10);
  if (VAR_9)
   return VAR_9;

  FUNC_3(VAR_10->base.resv, VAR_2);







  if (!(VAR_8->flags & VAR_0))
   VAR_10->ttm = ((void*)0);
  else
   VAR_1->ttm = ((void*)0);

  FUNC_8(VAR_10);
  FUNC_7(VAR_10);

 } else if (VAR_7->flags & VAR_0) {






  FUNC_4(&VAR_7->move_lock);
  if (!VAR_7->move || FUNC_1(VAR_2, VAR_7->move)) {
   FUNC_2(VAR_7->move);
   VAR_7->move = FUNC_0(VAR_2);
  }
  FUNC_5(&VAR_7->move_lock);

  FUNC_6(VAR_1);

  FUNC_2(VAR_1->moving);
  VAR_1->moving = FUNC_0(VAR_2);

 } else {






  VAR_9 = FUNC_9(VAR_1, 0, 0);
  if (VAR_9)
   return VAR_9;

  if (VAR_8->flags & VAR_0) {
   FUNC_11(VAR_1->ttm);
   VAR_1->ttm = ((void*)0);
  }
  FUNC_6(VAR_1);
 }

 *VAR_6 = *VAR_4;
 VAR_4->mm_node = ((void*)0);

 return 0;
}
