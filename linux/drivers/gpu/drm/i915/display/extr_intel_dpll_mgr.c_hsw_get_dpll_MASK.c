
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct intel_shared_dpll {int dummy; } ;
struct intel_encoder {int dummy; } ;
struct TYPE_4__ {int spll; } ;
struct intel_crtc_state {int port_clock; struct intel_shared_dpll* shared_dpll; TYPE_1__ dpll_hw_state; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 struct intel_shared_dpll* FUNC_1 (struct intel_crtc_state*) ;
 struct intel_shared_dpll* FUNC_2 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_5 (struct intel_crtc_state*,int ) ;
 struct intel_shared_dpll* FUNC_6 (struct intel_atomic_state*,struct intel_crtc*,TYPE_1__*,int ,int ) ;
 int FUNC_7 (struct intel_atomic_state*,struct intel_crtc*,struct intel_shared_dpll*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool FUNC_9(struct intel_atomic_state *VAR_6,
    struct intel_crtc *VAR_7,
    struct intel_encoder *VAR_8)
{
 struct intel_crtc_state *VAR_9 =
  FUNC_3(VAR_6, VAR_7);
 struct intel_shared_dpll *VAR_10;

 FUNC_8(&VAR_9->dpll_hw_state, 0,
        sizeof(VAR_9->dpll_hw_state));

 if (FUNC_5(VAR_9, VAR_2)) {
  VAR_10 = FUNC_2(VAR_6, VAR_7);
 } else if (FUNC_4(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
 } else if (FUNC_5(VAR_9, VAR_1)) {
  if (FUNC_0(VAR_9->port_clock / 2 != 135000))
   return 0;

  VAR_9->dpll_hw_state.spll =
   VAR_4 | VAR_3 | VAR_5;

  VAR_10 = FUNC_6(VAR_6, VAR_7,
          &VAR_9->dpll_hw_state,
          VAR_0, VAR_0);
 } else {
  return 0;
 }

 if (!VAR_10)
  return 0;

 FUNC_7(VAR_6, VAR_7,
        VAR_10, &VAR_9->dpll_hw_state);

 VAR_9->shared_dpll = VAR_10;

 return 1;
}
