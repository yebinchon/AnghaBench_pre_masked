
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static i915_reg_t FUNC_3(struct drm_i915_private *VAR_3)
{
 if (FUNC_2(VAR_3) || FUNC_1(VAR_3))
  return VAR_2;
 else if (FUNC_0(VAR_3) >= 5)
  return VAR_0;
 else
  return VAR_1;
}
