
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ sagv_status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_i915_private *VAR_1)
{
 return (FUNC_1(VAR_1) || FUNC_0(VAR_1) >= 10) &&
  VAR_1->sagv_status != VAR_0;
}
