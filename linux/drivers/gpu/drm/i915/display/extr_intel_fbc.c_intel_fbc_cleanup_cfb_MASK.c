
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {int lock; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;

 if (!FUNC_1(VAR_0))
  return;

 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
}
