
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cfgcr0; } ;
struct intel_crtc_state {int port_clock; TYPE_1__ dpll_hw_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct intel_crtc_state *VAR_9)
{
 u32 VAR_10;

 VAR_10 = VAR_8;

 switch (VAR_9->port_clock / 2) {
 case 81000:
  VAR_10 |= VAR_7;
  break;
 case 135000:
  VAR_10 |= VAR_1;
  break;
 case 270000:
  VAR_10 |= VAR_4;
  break;

 case 162000:
  VAR_10 |= VAR_2;
  break;
 case 108000:
  VAR_10 |= VAR_0;
  break;
 case 216000:
  VAR_10 |= VAR_3;
  break;
 case 324000:

  VAR_10 |= VAR_5;
  break;
 case 405000:

  VAR_10 |= VAR_6;
  break;
 }

 FUNC_0(&VAR_9->dpll_hw_state, 0,
        sizeof(VAR_9->dpll_hw_state));

 VAR_9->dpll_hw_state.cfgcr0 = VAR_10;

 return 1;
}
