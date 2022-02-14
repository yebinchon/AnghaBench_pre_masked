
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {struct i915_fence_reg* fence; TYPE_1__* vm; int obj; } ;
struct i915_ggtt {int fence_list; } ;
struct i915_fence_reg {int pin_count; struct i915_vma* vma; int link; int dirty; } ;
struct TYPE_2__ {int i915; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_fence_reg*) ;
 int FUNC_2 (struct i915_fence_reg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i915_fence_reg* FUNC_6 (int ) ;
 int FUNC_7 (struct i915_fence_reg*,struct i915_vma*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct i915_ggtt* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i915_vma *VAR_0)
{
 struct i915_ggtt *VAR_1 = FUNC_9(VAR_0->vm);
 struct i915_fence_reg *VAR_2;
 struct i915_vma *VAR_3 = FUNC_8(VAR_0->obj) ? VAR_0 : ((void*)0);
 int VAR_4;


 if (VAR_0->fence) {
  VAR_2 = VAR_0->fence;
  FUNC_0(VAR_2->vma != VAR_0);
  FUNC_4(&VAR_2->pin_count);
  if (!VAR_2->dirty) {
   FUNC_10(&VAR_2->link, &VAR_1->fence_list);
   return 0;
  }
 } else if (VAR_3) {
  VAR_2 = FUNC_6(VAR_0->vm->i915);
  if (FUNC_1(VAR_2))
   return FUNC_2(VAR_2);

  FUNC_0(FUNC_5(&VAR_2->pin_count));
  FUNC_4(&VAR_2->pin_count);
 } else {
  return 0;
 }

 VAR_4 = FUNC_7(VAR_2, VAR_3);
 if (VAR_4)
  goto out_unpin;

 FUNC_0(VAR_2->vma != VAR_3);
 FUNC_0(VAR_0->fence != (VAR_3 ? VAR_2 : ((void*)0)));

 if (VAR_3)
  return 0;

out_unpin:
 FUNC_3(&VAR_2->pin_count);
 return VAR_4;
}
