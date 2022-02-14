
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_1,
         enum pipe VAR_2)
{
 return FUNC_1(VAR_1) || FUNC_0(VAR_1) ||
  (FUNC_2(VAR_1) && VAR_2 == VAR_0);
}
