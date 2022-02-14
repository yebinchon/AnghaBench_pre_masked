
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct ttm_operation_ctx {int no_wait_gpu; int interruptible; } ;
struct ttm_mem_reg {scalar_t__ mem_type; int * mm_node; int placement; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; struct ttm_tt* ttm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (struct ttm_buffer_object*,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ttm_tt*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;
 int FUNC_5 (struct ttm_tt*,int ) ;
 int FUNC_6 (struct ttm_tt*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ttm_buffer_object *VAR_4,
     struct ttm_operation_ctx *VAR_5,
      struct ttm_mem_reg *VAR_6)
{
 struct ttm_tt *VAR_7 = VAR_4->ttm;
 struct ttm_mem_reg *VAR_8 = &VAR_4->mem;
 int VAR_9;

 if (VAR_8->mem_type != VAR_3) {
  VAR_9 = FUNC_2(VAR_4, VAR_5->interruptible, VAR_5->no_wait_gpu);

  if (FUNC_7(VAR_9 != 0)) {
   if (VAR_9 != -VAR_0)
    FUNC_0("Failed to expire sync object before unbinding TTM\n");
   return VAR_9;
  }

  FUNC_6(VAR_7);
  FUNC_1(VAR_4);
  FUNC_3(&VAR_8->placement, VAR_1,
    VAR_2);
  VAR_8->mem_type = VAR_3;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_6->placement);
 if (FUNC_7(VAR_9 != 0))
  return VAR_9;

 if (VAR_6->mem_type != VAR_3) {
  VAR_9 = FUNC_4(VAR_7, VAR_6, VAR_5);
  if (FUNC_7(VAR_9 != 0))
   return VAR_9;
 }

 *VAR_8 = *VAR_6;
 VAR_6->mm_node = ((void*)0);

 return 0;
}
