
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {int underrun_work; int underrun_detected; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;

 if (!FUNC_1(VAR_0))
  return;







 if (FUNC_0(VAR_1->underrun_detected))
  return;

 FUNC_2(&VAR_1->underrun_work);
}
