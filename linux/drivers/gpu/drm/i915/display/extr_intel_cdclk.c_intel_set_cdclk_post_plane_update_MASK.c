
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_cdclk_state {scalar_t__ cdclk; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,struct intel_cdclk_state const*,int) ;

void
FUNC_1(struct drm_i915_private *VAR_1,
      const struct intel_cdclk_state *VAR_2,
      const struct intel_cdclk_state *VAR_3,
      enum pipe VAR_4)
{
 if (VAR_4 != VAR_0 && VAR_2->cdclk > VAR_3->cdclk)
  FUNC_0(VAR_1, VAR_3, VAR_4);
}
