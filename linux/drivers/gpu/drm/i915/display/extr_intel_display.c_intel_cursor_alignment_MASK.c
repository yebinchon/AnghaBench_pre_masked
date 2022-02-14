
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private const*) ;

__attribute__((used)) static unsigned int FUNC_4(const struct drm_i915_private *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 16 * 1024;
 else if (FUNC_2(VAR_0))
  return 256;
 else if (FUNC_1(VAR_0) || FUNC_3(VAR_0))
  return 32;
 else
  return 4 * 1024;
}
