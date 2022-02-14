
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_crtc_state {scalar_t__ crc_enabled; scalar_t__ has_psr; } ;
struct i915_psr {int enabled; int psr2_enabled; int lock; int work; int busy_frontbuffer_bits; int active; int debug; int dp; } ;
struct drm_i915_private {struct i915_psr psr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct intel_dp* FUNC_2 (int ) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct drm_i915_private*,struct intel_crtc_state const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct intel_dp *VAR_0,
        const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0);
 struct i915_psr *VAR_3 = &VAR_2->psr;
 bool VAR_4, VAR_5;

 if (!FUNC_0(VAR_2) || FUNC_2(VAR_3->dp) != VAR_0)
  return;

 FUNC_7(&VAR_2->psr.lock);

 VAR_4 = VAR_1->has_psr && FUNC_10(VAR_3->debug);
 VAR_5 = FUNC_4(VAR_2, VAR_1);

 if (VAR_4 == VAR_3->enabled && VAR_5 == VAR_3->psr2_enabled) {

  if (VAR_1->crc_enabled && VAR_3->enabled)
   FUNC_9(VAR_2);
  else if (FUNC_1(VAR_2) < 9 && VAR_3->enabled) {




   if (!VAR_2->psr.active &&
       !VAR_2->psr.busy_frontbuffer_bits)
    FUNC_11(&VAR_2->psr.work);
  }

  goto unlock;
 }

 if (VAR_3->enabled)
  FUNC_5(VAR_0);

 if (VAR_4)
  FUNC_6(VAR_2, VAR_1);

unlock:
 FUNC_8(&VAR_2->psr.lock);
}
