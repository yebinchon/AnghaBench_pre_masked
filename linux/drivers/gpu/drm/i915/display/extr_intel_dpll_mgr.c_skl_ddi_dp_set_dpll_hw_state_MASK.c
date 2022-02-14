
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl1; } ;
struct intel_crtc_state {int port_clock; TYPE_1__ dpll_hw_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(struct intel_crtc_state *VAR_6)
{
 u32 VAR_7;





 VAR_7 = FUNC_1(0);
 switch (VAR_6->port_clock / 2) {
 case 81000:
  VAR_7 |= FUNC_0(VAR_5, 0);
  break;
 case 135000:
  VAR_7 |= FUNC_0(VAR_1, 0);
  break;
 case 270000:
  VAR_7 |= FUNC_0(VAR_4, 0);
  break;

 case 162000:
  VAR_7 |= FUNC_0(VAR_2, 0);
  break;
 case 108000:
  VAR_7 |= FUNC_0(VAR_0, 0);
  break;
 case 216000:
  VAR_7 |= FUNC_0(VAR_3, 0);
  break;
 }

 FUNC_2(&VAR_6->dpll_hw_state, 0,
        sizeof(VAR_6->dpll_hw_state));

 VAR_6->dpll_hw_state.ctrl1 = VAR_7;

 return 1;
}
