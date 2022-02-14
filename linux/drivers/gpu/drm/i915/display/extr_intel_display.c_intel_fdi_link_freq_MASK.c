
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {int port_clock; } ;
struct drm_i915_private {int fdi_pll_freq; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static inline u32
FUNC_1(struct drm_i915_private *VAR_0,
      const struct intel_crtc_state *VAR_1)
{
 if (FUNC_0(VAR_0))
  return VAR_1->port_clock;
 else
  return VAR_0->fdi_pll_freq;
}
