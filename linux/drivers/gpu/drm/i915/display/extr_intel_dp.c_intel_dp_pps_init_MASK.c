
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*,int) ;
 int FUNC_5 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_6(struct intel_dp *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_1) || FUNC_0(VAR_1)) {
  FUNC_5(VAR_0);
 } else {
  FUNC_3(VAR_0);
  FUNC_4(VAR_0, 0);
 }
}
