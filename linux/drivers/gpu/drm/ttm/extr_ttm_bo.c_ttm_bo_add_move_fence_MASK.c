
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int move_lock; int move; } ;
struct ttm_mem_reg {int dummy; } ;
struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {struct dma_fence* moving; TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ttm_buffer_object *VAR_0,
     struct ttm_mem_type_manager *VAR_1,
     struct ttm_mem_reg *VAR_2)
{
 struct dma_fence *VAR_3;
 int VAR_4;

 FUNC_4(&VAR_1->move_lock);
 VAR_3 = FUNC_0(VAR_1->move);
 FUNC_5(&VAR_1->move_lock);

 if (VAR_3) {
  FUNC_2(VAR_0->base.resv, VAR_3);

  VAR_4 = FUNC_3(VAR_0->base.resv, 1);
  if (FUNC_6(VAR_4)) {
   FUNC_1(VAR_3);
   return VAR_4;
  }

  FUNC_1(VAR_0->moving);
  VAR_0->moving = VAR_3;
 }

 return 0;
}
