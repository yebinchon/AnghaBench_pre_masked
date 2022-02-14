
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;
struct i915_fence_reg {int dirty; int i915; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct i915_fence_reg*,struct i915_vma*) ;
 int FUNC_2 (struct i915_fence_reg*,struct i915_vma*) ;
 int FUNC_3 (struct i915_fence_reg*,struct i915_vma*) ;

__attribute__((used)) static void FUNC_4(struct i915_fence_reg *VAR_0,
   struct i915_vma *VAR_1)
{






 if (FUNC_0(VAR_0->i915, 2))
  FUNC_1(VAR_0, VAR_1);
 else if (FUNC_0(VAR_0->i915, 3))
  FUNC_2(VAR_0, VAR_1);
 else
  FUNC_3(VAR_0, VAR_1);






 VAR_0->dirty = 0;
}
