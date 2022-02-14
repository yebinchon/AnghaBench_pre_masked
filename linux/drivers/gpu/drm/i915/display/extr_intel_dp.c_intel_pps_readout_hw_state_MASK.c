
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pps_registers {int pp_div; int pp_off; int pp_on; int pp_ctrl; } ;
struct intel_dp {int dummy; } ;
struct edp_power_seq {int t1_t3; int t8; int t9; int t10; int t11_t12; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct intel_dp*,struct pps_registers*) ;
 int FUNC_7 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_8(struct intel_dp *VAR_6, struct edp_power_seq *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_4(VAR_6);
 u32 VAR_9, VAR_10, VAR_11;
 struct pps_registers VAR_12;

 FUNC_6(VAR_6, &VAR_12);

 VAR_11 = FUNC_7(VAR_6);


 if (!FUNC_0(VAR_8))
  FUNC_2(VAR_12.pp_ctrl, VAR_11);

 VAR_9 = FUNC_1(VAR_12.pp_on);
 VAR_10 = FUNC_1(VAR_12.pp_off);


 VAR_7->t1_t3 = FUNC_3(VAR_5, VAR_9);
 VAR_7->t8 = FUNC_3(VAR_2, VAR_9);
 VAR_7->t9 = FUNC_3(VAR_1, VAR_10);
 VAR_7->t10 = FUNC_3(VAR_4, VAR_10);

 if (FUNC_5(VAR_12.pp_div)) {
  u32 VAR_13;

  VAR_13 = FUNC_1(VAR_12.pp_div);

  VAR_7->t11_t12 = FUNC_3(VAR_3, VAR_13) * 1000;
 } else {
  VAR_7->t11_t12 = FUNC_3(VAR_0, VAR_11) * 1000;
 }
}
