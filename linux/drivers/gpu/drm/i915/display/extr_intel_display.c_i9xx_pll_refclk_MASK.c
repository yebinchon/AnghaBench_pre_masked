
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dpll; } ;
struct intel_crtc_state {TYPE_1__ dpll_hw_state; } ;
struct TYPE_4__ {int lvds_ssc_freq; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2,
      const struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5 = VAR_3->dpll_hw_state.dpll;

 if ((VAR_5 & VAR_1) == VAR_0)
  return VAR_4->vbt.lvds_ssc_freq;
 else if (FUNC_0(VAR_4))
  return 120000;
 else if (!FUNC_1(VAR_4, 2))
  return 96000;
 else
  return 48000;
}
