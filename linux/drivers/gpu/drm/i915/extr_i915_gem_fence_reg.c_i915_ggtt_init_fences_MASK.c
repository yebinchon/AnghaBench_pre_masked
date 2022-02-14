
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_i915_private* i915; } ;
struct i915_ggtt {int num_fences; int fence_list; struct i915_fence_reg* fence_regs; int userfault_wakeref; int userfault_list; TYPE_1__ vm; } ;
struct i915_fence_reg {int id; int link; struct drm_i915_private* i915; } ;
struct drm_i915_private {int uncore; int runtime_pm; } ;
struct TYPE_4__ {int fence_num; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ) ;

void FUNC_15(struct i915_ggtt *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->vm.i915;
 int VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1->fence_list);
 FUNC_0(&VAR_1->userfault_list);
 FUNC_12(&VAR_1->userfault_wakeref, &VAR_2->runtime_pm);

 FUNC_8(VAR_2);

 if (FUNC_1(VAR_2) >= 7 &&
     !(FUNC_7(VAR_2) || FUNC_2(VAR_2)))
  VAR_3 = 32;
 else if (FUNC_1(VAR_2) >= 4 ||
   FUNC_4(VAR_2) || FUNC_5(VAR_2) ||
   FUNC_3(VAR_2) || FUNC_6(VAR_2))
  VAR_3 = 16;
 else
  VAR_3 = 8;

 if (FUNC_11(VAR_2))
  VAR_3 = FUNC_10(&VAR_2->uncore,
            FUNC_14(VAR_0.fence_num));


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct i915_fence_reg *VAR_5 = &VAR_1->fence_regs[VAR_4];

  VAR_5->i915 = VAR_2;
  VAR_5->id = VAR_4;
  FUNC_13(&VAR_5->link, &VAR_1->fence_list);
 }
 VAR_1->num_fences = VAR_3;

 FUNC_9(VAR_2);
}
