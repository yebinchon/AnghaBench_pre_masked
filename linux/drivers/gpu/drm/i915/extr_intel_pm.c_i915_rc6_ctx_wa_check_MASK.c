
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
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct drm_i915_private *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return 0;

 if (VAR_0->gt_pm.rc6.ctx_corrupted)
  return 0;

 if (!FUNC_2(VAR_0))
  return 0;

 FUNC_0("RC6 context corruption, disabling runtime power management\n");

 FUNC_3(VAR_0);
 VAR_0->gt_pm.rc6.ctx_corrupted = 1;
 VAR_0->gt_pm.rc6.ctx_corrupted_wakeref =
  FUNC_4(&VAR_0->runtime_pm);

 return 1;
}
