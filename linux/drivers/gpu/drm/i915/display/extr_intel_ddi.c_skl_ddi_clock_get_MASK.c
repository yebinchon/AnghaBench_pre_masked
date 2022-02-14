
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_dpll_hw_state {int ctrl1; } ;
struct intel_crtc_state {int port_clock; struct intel_dpll_hw_state dpll_hw_state; } ;


 int FUNC_0 (int ) ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct intel_crtc_state*) ;
 int FUNC_5 (struct intel_dpll_hw_state*) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_0,
         struct intel_crtc_state *VAR_1)
{
 struct intel_dpll_hw_state *VAR_2 = &VAR_1->dpll_hw_state;
 int VAR_3;





 if (VAR_2->ctrl1 & FUNC_0(0)) {
  VAR_3 = FUNC_5(VAR_2);
 } else {
  VAR_3 = VAR_2->ctrl1 & FUNC_1(0);
  VAR_3 >>= FUNC_2(0);

  switch (VAR_3) {
  case 128:
   VAR_3 = 81000;
   break;
  case 133:
   VAR_3 = 108000;
   break;
  case 132:
   VAR_3 = 135000;
   break;
  case 131:
   VAR_3 = 162000;
   break;
  case 130:
   VAR_3 = 216000;
   break;
  case 129:
   VAR_3 = 270000;
   break;
  default:
   FUNC_3(1, "Unsupported link rate\n");
   break;
  }
  VAR_3 *= 2;
 }

 VAR_1->port_clock = VAR_3;

 FUNC_4(VAR_1);
}
