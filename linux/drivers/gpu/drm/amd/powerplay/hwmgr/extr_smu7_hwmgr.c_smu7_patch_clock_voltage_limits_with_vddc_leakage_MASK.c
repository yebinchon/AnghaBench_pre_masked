
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct smu7_leakage_voltage {int dummy; } ;
struct TYPE_4__ {int vddc; } ;
struct TYPE_5__ {TYPE_1__ max_clock_voltage_on_dc; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct TYPE_6__ {int vddc; } ;
struct phm_ppt_v1_information {TYPE_3__ max_clock_voltage_on_dc; } ;


 int FUNC_0 (struct pp_hwmgr*,int *,struct smu7_leakage_voltage*) ;

__attribute__((used)) static int FUNC_1(
  struct pp_hwmgr *VAR_0, struct smu7_leakage_voltage *VAR_1,
  uint16_t *VAR_2)
{
 struct phm_ppt_v1_information *VAR_3 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 FUNC_0(VAR_0, (uint16_t *)VAR_2, VAR_1);
 VAR_0->dyn_state.max_clock_voltage_on_dc.vddc =
   VAR_3->max_clock_voltage_on_dc.vddc;
 return 0;
}
