
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private const*) ;

__attribute__((used)) static unsigned int FUNC_5(const struct drm_i915_private *VAR_0)
{
 if (FUNC_0(VAR_0) >= 9)
  return 256 * 1024;
 else if (FUNC_2(VAR_0) || FUNC_3(VAR_0) ||
   FUNC_4(VAR_0) || FUNC_1(VAR_0))
  return 128 * 1024;
 else if (FUNC_0(VAR_0) >= 4)
  return 4 * 1024;
 else
  return 0;
}
