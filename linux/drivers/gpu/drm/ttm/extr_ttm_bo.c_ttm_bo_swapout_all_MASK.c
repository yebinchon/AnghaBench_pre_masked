
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_bo_device {int glob; } ;


 scalar_t__ FUNC_0 (int ,struct ttm_operation_ctx*) ;

void FUNC_1(struct ttm_bo_device *VAR_0)
{
 struct ttm_operation_ctx VAR_1 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };

 while (FUNC_0(VAR_0->glob, &VAR_1) == 0)
  ;
}
