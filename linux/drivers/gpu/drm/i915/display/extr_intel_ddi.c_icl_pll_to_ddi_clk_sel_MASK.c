
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int port_clock; struct intel_shared_dpll* shared_dpll; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (int const) ;

__attribute__((used)) static u32 FUNC_1(struct intel_encoder *VAR_6,
      const struct intel_crtc_state *VAR_7)
{
 const struct intel_shared_dpll *VAR_8 = VAR_7->shared_dpll;
 int VAR_9 = VAR_7->port_clock;
 const enum intel_dpll_id VAR_10 = VAR_8->info->id;

 switch (VAR_10) {
 default:




  FUNC_0(VAR_10);
  return VAR_1;
 case 128:
  switch (VAR_9) {
  case 162000:
   return VAR_2;
  case 270000:
   return VAR_3;
  case 540000:
   return VAR_4;
  case 810000:
   return VAR_5;
  default:
   FUNC_0(VAR_9);
   return VAR_1;
  }
 case 132:
 case 131:
 case 130:
 case 129:
  return VAR_0;
 }
}
