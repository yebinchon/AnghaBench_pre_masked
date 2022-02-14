
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_0,
         int VAR_1)
{
 if (FUNC_1(VAR_0) >= 10 || FUNC_4(VAR_0))
  return FUNC_0(VAR_1, 2);
 else if (FUNC_5(VAR_0, 9) ||
   FUNC_2(VAR_0) || FUNC_6(VAR_0))
  return VAR_1;
 else if (FUNC_3(VAR_0))
  return FUNC_0(VAR_1 * 100, 95);
 else
  return FUNC_0(VAR_1 * 100, 90);
}
