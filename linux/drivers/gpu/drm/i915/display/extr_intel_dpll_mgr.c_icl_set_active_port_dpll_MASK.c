
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int dpll_hw_state; int shared_dpll; struct icl_port_dpll* icl_port_dplls; } ;
struct icl_port_dpll {int hw_state; int pll; } ;
typedef enum icl_port_dpll_id { ____Placeholder_icl_port_dpll_id } icl_port_dpll_id ;



void FUNC_0(struct intel_crtc_state *VAR_0,
         enum icl_port_dpll_id VAR_1)
{
 struct icl_port_dpll *VAR_2 =
  &VAR_0->icl_port_dplls[VAR_1];

 VAR_0->shared_dpll = VAR_2->pll;
 VAR_0->dpll_hw_state = VAR_2->hw_state;
}
