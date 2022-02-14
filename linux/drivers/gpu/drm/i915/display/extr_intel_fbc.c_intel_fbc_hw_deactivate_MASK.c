
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {int active; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;

 VAR_1->active = 0;

 if (FUNC_0(VAR_0) >= 5)
  FUNC_4(VAR_0);
 else if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);
 else
  FUNC_3(VAR_0);
}
