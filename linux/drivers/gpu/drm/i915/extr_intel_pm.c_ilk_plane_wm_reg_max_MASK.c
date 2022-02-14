
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct drm_i915_private *VAR_0,
       int VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_0) >= 8)

  return VAR_1 == 0 ? 255 : 2047;
 else if (FUNC_0(VAR_0) >= 7)

  return VAR_1 == 0 ? 127 : 1023;
 else if (!VAR_2)

  return VAR_1 == 0 ? 127 : 511;
 else

  return VAR_1 == 0 ? 63 : 255;
}
