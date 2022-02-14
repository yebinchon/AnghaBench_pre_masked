
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int hpll_freq; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_0, int VAR_1)
{
 int VAR_2 = (VAR_0->hpll_freq << 1) % 320000 != 0 ?
  333333 : 320000;






 if (FUNC_0(VAR_0) && VAR_1 > VAR_2)
  return 400000;
 else if (VAR_1 > 266667)
  return VAR_2;
 else if (VAR_1 > 0)
  return 266667;
 else
  return 200000;
}
