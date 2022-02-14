
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum i915_drm_suspend_mode { ____Placeholder_i915_drm_suspend_mode } i915_drm_suspend_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static enum i915_drm_suspend_mode
FUNC_1(struct drm_i915_private *VAR_3, bool VAR_4)
{
 if (VAR_4)
  return VAR_0;

 if (FUNC_0(VAR_3))
  return VAR_1;

 return VAR_2;
}
