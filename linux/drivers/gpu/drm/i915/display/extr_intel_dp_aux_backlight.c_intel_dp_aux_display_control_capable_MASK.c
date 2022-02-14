
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int* edp_dpcd; } ;
struct intel_connector {TYPE_1__* encoder; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct intel_dp* FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct intel_connector *VAR_3)
{
 struct intel_dp *VAR_4 = FUNC_1(&VAR_3->encoder->base);




 if (VAR_4->edp_dpcd[1] & VAR_2 &&
     (VAR_4->edp_dpcd[2] & VAR_0) &&
     !(VAR_4->edp_dpcd[2] & VAR_1)) {
  FUNC_0("AUX Backlight Control Supported!\n");
  return 1;
 }
 return 0;
}
