
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int max_cdclk_freq; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_6(struct drm_i915_private *VAR_0)
{
 int VAR_1 = VAR_0->max_cdclk_freq;

 if (FUNC_0(VAR_0) >= 10 || FUNC_3(VAR_0))
  return 2 * VAR_1;
 else if (FUNC_4(VAR_0, 9) ||
   FUNC_1(VAR_0) || FUNC_5(VAR_0))
  return VAR_1;
 else if (FUNC_2(VAR_0))
  return VAR_1*95/100;
 else if (FUNC_0(VAR_0) < 4)
  return 2*VAR_1*90/100;
 else
  return VAR_1*90/100;
}
