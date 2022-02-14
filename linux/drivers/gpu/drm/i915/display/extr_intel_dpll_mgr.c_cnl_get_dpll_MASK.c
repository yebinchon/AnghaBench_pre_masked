
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_dpll {int dummy; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; int dpll_hw_state; int output_types; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_5 (struct intel_crtc_state*,int ) ;
 struct intel_shared_dpll* FUNC_6 (struct intel_atomic_state*,struct intel_crtc*,int *,int ,int ) ;
 int FUNC_7 (struct intel_atomic_state*,struct intel_crtc*,struct intel_shared_dpll*,int *) ;

__attribute__((used)) static bool FUNC_8(struct intel_atomic_state *VAR_3,
    struct intel_crtc *VAR_4,
    struct intel_encoder *VAR_5)
{
 struct intel_crtc_state *VAR_6 =
  FUNC_3(VAR_3, VAR_4);
 struct intel_shared_dpll *VAR_7;
 bool VAR_8;

 if (FUNC_5(VAR_6, VAR_2)) {
  VAR_8 = FUNC_2(VAR_6);
  if (!VAR_8) {
   FUNC_0("Could not get HDMI pll dividers.\n");
   return 0;
  }
 } else if (FUNC_4(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  if (!VAR_8) {
   FUNC_0("Could not set DP dpll HW state.\n");
   return 0;
  }
 } else {
  FUNC_0("Skip DPLL setup for output_types 0x%x\n",
         VAR_6->output_types);
  return 0;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_4,
         &VAR_6->dpll_hw_state,
         VAR_0,
         VAR_1);
 if (!VAR_7) {
  FUNC_0("No PLL selected\n");
  return 0;
 }

 FUNC_7(VAR_3, VAR_4,
        VAR_7, &VAR_6->dpll_hw_state);

 VAR_6->shared_dpll = VAR_7;

 return 1;
}
