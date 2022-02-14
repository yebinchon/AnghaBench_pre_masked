
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_limit {int dummy; } ;
struct intel_crtc_state {int dpll; int port_clock; int clock_set; int dpll_hw_state; } ;
struct intel_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct intel_limit VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_limit const*,struct intel_crtc_state*,int ,int,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct intel_crtc *VAR_2,
      struct intel_crtc_state *VAR_3)
{
 int VAR_4 = 100000;
 const struct intel_limit *VAR_5 = &VAR_1;

 FUNC_1(&VAR_3->dpll_hw_state, 0,
        sizeof(VAR_3->dpll_hw_state));

 if (!VAR_3->clock_set &&
     !FUNC_3(VAR_5, VAR_3, VAR_3->port_clock,
    VAR_4, ((void*)0), &VAR_3->dpll)) {
  FUNC_0("Couldn't find PLL settings for mode!\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_3);

 return 0;
}
