
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct intel_crtc_state {int has_drrs; } ;
struct TYPE_4__ {int mutex; struct intel_dp* dp; scalar_t__ busy_frontbuffer_bits; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct drm_i915_private {TYPE_2__ drrs; TYPE_1__ psr; } ;


 int FUNC_0 (char*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intel_dp *VAR_0,
      const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_1->has_drrs) {
  FUNC_0("Panel doesn't support DRRS\n");
  return;
 }

 if (VAR_2->psr.enabled) {
  FUNC_0("PSR enabled. Not enabling DRRS.\n");
  return;
 }

 FUNC_2(&VAR_2->drrs.mutex);
 if (VAR_2->drrs.dp) {
  FUNC_0("DRRS already enabled\n");
  goto unlock;
 }

 VAR_2->drrs.busy_frontbuffer_bits = 0;

 VAR_2->drrs.dp = VAR_0;

unlock:
 FUNC_3(&VAR_2->drrs.mutex);
}
