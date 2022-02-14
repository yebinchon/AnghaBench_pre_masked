
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {TYPE_1__* vm; struct i915_fence_reg* fence; } ;
struct i915_fence_reg {int pin_count; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct i915_fence_reg*,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct i915_vma *VAR_1)
{
 struct i915_fence_reg *VAR_2 = VAR_1->fence;

 FUNC_2(&VAR_1->vm->mutex);
 if (!VAR_2)
  return 0;

 if (FUNC_0(&VAR_2->pin_count))
  return -VAR_0;

 return FUNC_1(VAR_2, ((void*)0));
}
