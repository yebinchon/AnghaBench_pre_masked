
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0) >= 10 || FUNC_1(VAR_0))
  return 1;


 return VAR_1 > 0;
}
