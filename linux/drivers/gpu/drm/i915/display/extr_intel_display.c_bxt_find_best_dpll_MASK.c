
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_limit {int dummy; } ;
struct intel_crtc_state {int port_clock; } ;
struct dpll {int dummy; } ;


 int FUNC_0 (struct intel_limit const*,struct intel_crtc_state*,int ,int,int *,struct dpll*) ;
 struct intel_limit VAR_0 ;

bool FUNC_1(struct intel_crtc_state *VAR_1,
   struct dpll *VAR_2)
{
 int VAR_3 = 100000;
 const struct intel_limit *VAR_4 = &VAR_0;

 return FUNC_0(VAR_4, VAR_1,
      VAR_1->port_clock, VAR_3,
      ((void*)0), VAR_2);
}
