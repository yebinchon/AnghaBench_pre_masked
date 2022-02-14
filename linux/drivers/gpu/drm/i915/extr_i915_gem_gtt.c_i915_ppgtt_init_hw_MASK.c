
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct intel_gt*) ;
 int FUNC_2 (struct intel_gt*) ;
 int FUNC_3 (struct intel_gt*) ;

int FUNC_4(struct intel_gt *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;

 FUNC_3(VAR_0);

 if (FUNC_0(VAR_1, 6))
  FUNC_1(VAR_0);
 else if (FUNC_0(VAR_1, 7))
  FUNC_2(VAR_0);

 return 0;
}
