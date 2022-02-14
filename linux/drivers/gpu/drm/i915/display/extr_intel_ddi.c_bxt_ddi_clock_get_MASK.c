
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dpll_hw_state; int port_clock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_crtc_state*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_0,
         struct intel_crtc_state *VAR_1)
{
 VAR_1->port_clock =
  FUNC_0(&VAR_1->dpll_hw_state);

 FUNC_1(VAR_1);
}
