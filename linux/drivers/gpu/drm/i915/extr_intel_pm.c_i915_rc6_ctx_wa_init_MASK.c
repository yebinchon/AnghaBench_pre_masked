
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx_corrupted; int ctx_corrupted_wakeref; } ;
struct TYPE_4__ {TYPE_1__ rc6; } ;
struct drm_i915_private {int runtime_pm; TYPE_2__ gt_pm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;

 if (FUNC_2(VAR_0)) {
  FUNC_0("RC6 context corrupted, disabling runtime power management\n");
  VAR_0->gt_pm.rc6.ctx_corrupted = 1;
  VAR_0->gt_pm.rc6.ctx_corrupted_wakeref =
   FUNC_3(&VAR_0->runtime_pm);
 }
}
