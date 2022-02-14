
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct drm_i915_private *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0) >= 7)
  return VAR_1 == 0 ? 63 : 255;
 else
  return VAR_1 == 0 ? 31 : 63;
}
