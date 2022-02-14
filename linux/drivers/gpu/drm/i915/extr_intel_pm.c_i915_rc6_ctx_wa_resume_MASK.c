
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx_corrupted; int ctx_corrupted_wakeref; } ;
struct TYPE_4__ {TYPE_1__ rc6; } ;
struct drm_i915_private {TYPE_2__ gt_pm; int runtime_pm; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 if (!VAR_0->gt_pm.rc6.ctx_corrupted)
  return;

 if (FUNC_1(VAR_0)) {
  VAR_0->gt_pm.rc6.ctx_corrupted_wakeref =
   FUNC_2(&VAR_0->runtime_pm);
  return;
 }

 FUNC_0("RC6 context restored, re-enabling runtime power management\n");
 VAR_0->gt_pm.rc6.ctx_corrupted = 0;
}
