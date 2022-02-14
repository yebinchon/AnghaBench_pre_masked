
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int pm_ier; struct intel_uncore* uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_gt *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->i915;
 struct intel_uncore *VAR_4 = VAR_2->uncore;
 u32 VAR_5 = VAR_2->pm_ier;
 i915_reg_t VAR_6;

 if (FUNC_1(VAR_3) >= 11) {
  VAR_6 = VAR_0;
  VAR_5 <<= 16;
 } else if (FUNC_1(VAR_3) >= 8) {
  VAR_6 = FUNC_0(2);
 } else {
  VAR_6 = VAR_1;
 }

 FUNC_2(VAR_4, VAR_6, VAR_5);
}
