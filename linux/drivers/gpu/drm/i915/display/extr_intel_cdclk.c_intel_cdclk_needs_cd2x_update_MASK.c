
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_cdclk_state {scalar_t__ cdclk; scalar_t__ vco; scalar_t__ ref; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;

bool FUNC_2(struct drm_i915_private *VAR_0,
       const struct intel_cdclk_state *VAR_1,
       const struct intel_cdclk_state *VAR_2)
{

 if (FUNC_0(VAR_0) < 10 && !FUNC_1(VAR_0))
  return 0;

 return VAR_1->cdclk != VAR_2->cdclk &&
  VAR_1->vco == VAR_2->vco &&
  VAR_1->ref == VAR_2->ref;
}
