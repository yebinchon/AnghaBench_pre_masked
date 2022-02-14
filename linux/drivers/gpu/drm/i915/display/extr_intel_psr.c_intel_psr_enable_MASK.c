
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct intel_crtc_state {int has_psr; } ;
struct TYPE_4__ {int lock; int debug; } ;
struct TYPE_3__ {int dp; } ;
struct drm_i915_private {TYPE_2__ psr; TYPE_1__ drrs; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_crtc_state const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct intel_dp *VAR_0,
        const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_1->has_psr)
  return;

 if (FUNC_2(!FUNC_0(VAR_2)))
  return;

 FUNC_2(VAR_2->drrs.dp);

 FUNC_5(&VAR_2->psr.lock);

 if (!FUNC_7(VAR_2->psr.debug)) {
  FUNC_1("PSR disabled by flag\n");
  goto unlock;
 }

 FUNC_4(VAR_2, VAR_1);

unlock:
 FUNC_6(&VAR_2->psr.lock);
}
