
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_operation_ctx {int interruptible; int no_wait_gpu; int flags; } ;
struct ttm_mem_type_manager {int move_lock; int move; int * lru; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_device {struct ttm_bo_global* glob; struct ttm_mem_type_manager* man; } ;
struct dma_fence {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct dma_fence* FUNC_0 (int ) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ttm_bo_device*,unsigned int,int *,struct ttm_operation_ctx*,int *) ;

__attribute__((used)) static int FUNC_7(struct ttm_bo_device *VAR_2,
       unsigned VAR_3)
{
 struct ttm_operation_ctx VAR_4 = {
  .interruptible = 0,
  .no_wait_gpu = 0,
  .flags = VAR_1
 };
 struct ttm_mem_type_manager *VAR_5 = &VAR_2->man[VAR_3];
 struct ttm_bo_global *VAR_6 = VAR_2->glob;
 struct dma_fence *VAR_7;
 int VAR_8;
 unsigned VAR_9;





 FUNC_4(&VAR_6->lru_lock);
 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
  while (!FUNC_3(&VAR_5->lru[VAR_9])) {
   FUNC_5(&VAR_6->lru_lock);
   VAR_8 = FUNC_6(VAR_2, VAR_3, ((void*)0), &VAR_4,
        ((void*)0));
   if (VAR_8)
    return VAR_8;
   FUNC_4(&VAR_6->lru_lock);
  }
 }
 FUNC_5(&VAR_6->lru_lock);

 FUNC_4(&VAR_5->move_lock);
 VAR_7 = FUNC_0(VAR_5->move);
 FUNC_5(&VAR_5->move_lock);

 if (VAR_7) {
  VAR_8 = FUNC_2(VAR_7, 0);
  FUNC_1(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
