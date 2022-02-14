
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {int port_clock; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct dpll {int m1; int m2; int vco; int n; int p2; int p1; } ;
struct bxt_clk_div {int m2_int; int m2_frac; int m2_frac_en; int vco; int n; int p2; int p1; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_crtc_state*,struct dpll*) ;
 int FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct intel_crtc_state *VAR_0,
     struct bxt_clk_div *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_4(VAR_0->base.crtc);
 struct dpll VAR_3;






 if (!FUNC_2(VAR_0, &VAR_3)) {
  FUNC_0("no PLL dividers found for clock %d pipe %c\n",
     VAR_0->port_clock,
     FUNC_3(VAR_2->pipe));
  return 0;
 }

 VAR_1->p1 = VAR_3.p1;
 VAR_1->p2 = VAR_3.p2;
 FUNC_1(VAR_3.m1 != 2);
 VAR_1->n = VAR_3.n;
 VAR_1->m2_int = VAR_3.m2 >> 22;
 VAR_1->m2_frac = VAR_3.m2 & ((1 << 22) - 1);
 VAR_1->m2_frac_en = VAR_1->m2_frac != 0;

 VAR_1->vco = VAR_3.vco;

 return 1;
}
