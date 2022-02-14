
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hard_min_clk; } ;
struct smu8_hwmgr {TYPE_3__ uvd_dpm; } ;
struct TYPE_5__ {struct phm_uvd_clock_voltage_dependency_table* uvd_clock_voltage_dependency_table; } ;
struct pp_hwmgr {scalar_t__ en_umd_pstate; TYPE_2__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_uvd_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_4__ {int vclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int ,int ) ;

int FUNC_4(struct pp_hwmgr *VAR_2, bool VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_2->backend;
 struct phm_uvd_clock_voltage_dependency_table *VAR_5 =
  VAR_2->dyn_state.uvd_clock_voltage_dependency_table;

 if (!VAR_3) {

  if (FUNC_0(VAR_0) ||
      VAR_2->en_umd_pstate) {
   VAR_4->uvd_dpm.hard_min_clk =
       VAR_5->entries[VAR_5->count - 1].vclk;

   FUNC_3(VAR_2,
    VAR_1,
    FUNC_2(VAR_2,
     VAR_4->uvd_dpm.hard_min_clk,
     VAR_1));

   FUNC_1(VAR_2, 1);
  } else {
   FUNC_1(VAR_2, 1);
  }
 } else {
  FUNC_1(VAR_2, 0);
 }

 return 0;
}
