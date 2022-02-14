
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int port_clock; int min_voltage_level; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

void FUNC_2(struct drm_i915_private *VAR_0,
      struct intel_crtc_state *VAR_1)
{
 if (FUNC_0(VAR_0) >= 11 && VAR_1->port_clock > 594000)
  VAR_1->min_voltage_level = 1;
 else if (FUNC_1(VAR_0) && VAR_1->port_clock > 594000)
  VAR_1->min_voltage_level = 2;
}
