
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_registers {int pp_div; int pp_off; int pp_on; int pp_stat; int pp_ctrl; } ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct pps_registers*,int ,int) ;
 int FUNC_12 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_13(struct intel_dp *VAR_2,
        struct pps_registers *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_10(VAR_2);
 int VAR_5 = 0;

 FUNC_11(VAR_3, 0, sizeof(*VAR_3));

 if (FUNC_2(VAR_4))
  VAR_5 = FUNC_9(VAR_2);
 else if (FUNC_3(VAR_4) || FUNC_1(VAR_4))
  VAR_5 = FUNC_12(VAR_2);

 VAR_3->pp_ctrl = FUNC_4(VAR_5);
 VAR_3->pp_stat = FUNC_8(VAR_5);
 VAR_3->pp_on = FUNC_7(VAR_5);
 VAR_3->pp_off = FUNC_6(VAR_5);


 if (FUNC_2(VAR_4) || FUNC_0(VAR_4) >= VAR_1)
  VAR_3->pp_div = VAR_0;
 else
  VAR_3->pp_div = FUNC_5(VAR_5);
}
