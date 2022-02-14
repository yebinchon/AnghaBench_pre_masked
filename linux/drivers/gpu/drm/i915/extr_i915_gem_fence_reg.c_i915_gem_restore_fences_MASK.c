
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {int obj; struct i915_fence_reg* fence; } ;
struct i915_fence_reg {int vma; } ;
struct TYPE_2__ {int num_fences; struct i915_fence_reg* fence_regs; } ;
struct drm_i915_private {TYPE_1__ ggtt; } ;


 int FUNC_0 (int ) ;
 struct i915_vma* FUNC_1 (int ) ;
 int FUNC_2 (struct i915_fence_reg*,struct i915_vma*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 FUNC_4();
 for (VAR_1 = 0; VAR_1 < VAR_0->ggtt.num_fences; VAR_1++) {
  struct i915_fence_reg *VAR_2 = &VAR_0->ggtt.fence_regs[VAR_1];
  struct i915_vma *VAR_3 = FUNC_1(VAR_2->vma);

  FUNC_0(VAR_3 && VAR_3->fence != VAR_2);





  if (VAR_3 && !FUNC_3(VAR_3->obj))
   VAR_3 = ((void*)0);

  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_5();
}
