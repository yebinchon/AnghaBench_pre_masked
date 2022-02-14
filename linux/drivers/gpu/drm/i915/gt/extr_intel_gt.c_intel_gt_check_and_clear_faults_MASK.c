
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_gt*) ;
 int FUNC_2 (struct intel_gt*) ;
 int FUNC_3 (struct intel_gt*,int ) ;

void FUNC_4(struct intel_gt *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->i915;


 if (FUNC_0(VAR_2) >= 8)
  FUNC_2(VAR_1);
 else if (FUNC_0(VAR_2) >= 6)
  FUNC_1(VAR_1);
 else
  return;

 FUNC_3(VAR_1, VAR_0);
}
