
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private const*) ;

int FUNC_3(const struct drm_i915_private *VAR_0)
{

 if (FUNC_0(VAR_0) >= 9)
  return 7;
 else if (FUNC_2(VAR_0) || FUNC_1(VAR_0))
  return 4;
 else if (FUNC_0(VAR_0) >= 6)
  return 3;
 else
  return 2;
}
