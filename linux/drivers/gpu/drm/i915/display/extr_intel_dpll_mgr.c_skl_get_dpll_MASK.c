
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_dpll {int dummy; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; int dpll_hw_state; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct intel_crtc_state* FUNC_1 (struct intel_atomic_state*,struct intel_crtc*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*,int ) ;
 struct intel_shared_dpll* FUNC_4 (struct intel_atomic_state*,struct intel_crtc*,int *,int ,int ) ;
 int FUNC_5 (struct intel_atomic_state*,struct intel_crtc*,struct intel_shared_dpll*,int *) ;
 int FUNC_6 (struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_crtc_state*) ;

__attribute__((used)) static bool FUNC_8(struct intel_atomic_state *VAR_5,
    struct intel_crtc *VAR_6,
    struct intel_encoder *VAR_7)
{
 struct intel_crtc_state *VAR_8 =
  FUNC_1(VAR_5, VAR_6);
 struct intel_shared_dpll *VAR_9;
 bool VAR_10;

 if (FUNC_3(VAR_8, VAR_4)) {
  VAR_10 = FUNC_7(VAR_8);
  if (!VAR_10) {
   FUNC_0("Could not get HDMI pll dividers.\n");
   return 0;
  }
 } else if (FUNC_2(VAR_8)) {
  VAR_10 = FUNC_6(VAR_8);
  if (!VAR_10) {
   FUNC_0("Could not set DP dpll HW state.\n");
   return 0;
  }
 } else {
  return 0;
 }

 if (FUNC_3(VAR_8, VAR_3))
  VAR_9 = FUNC_4(VAR_5, VAR_6,
          &VAR_8->dpll_hw_state,
          VAR_0,
          VAR_0);
 else
  VAR_9 = FUNC_4(VAR_5, VAR_6,
          &VAR_8->dpll_hw_state,
          VAR_1,
          VAR_2);
 if (!VAR_9)
  return 0;

 FUNC_5(VAR_5, VAR_6,
        VAR_9, &VAR_8->dpll_hw_state);

 VAR_8->shared_dpll = VAR_9;

 return 1;
}
