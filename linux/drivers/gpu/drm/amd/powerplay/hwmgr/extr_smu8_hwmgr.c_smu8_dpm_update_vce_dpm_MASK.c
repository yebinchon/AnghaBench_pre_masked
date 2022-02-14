
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hard_min_clk; } ;
struct smu8_hwmgr {TYPE_2__ vce_dpm; } ;
struct TYPE_4__ {struct phm_vce_clock_voltage_dependency_table* vce_clock_voltage_dependency_table; } ;
struct pp_hwmgr {scalar_t__ en_umd_pstate; TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_vce_clock_voltage_dependency_table {int count; TYPE_3__* entries; } ;
struct TYPE_6__ {int ecclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_3->backend;
 struct phm_vce_clock_voltage_dependency_table *VAR_5 =
  VAR_3->dyn_state.vce_clock_voltage_dependency_table;


 if (FUNC_0(VAR_0) ||
     VAR_3->en_umd_pstate) {
  VAR_4->vce_dpm.hard_min_clk =
      VAR_5->entries[VAR_5->count - 1].ecclk;

  FUNC_2(VAR_3,
   VAR_1,
   FUNC_1(VAR_3,
    VAR_4->vce_dpm.hard_min_clk,
    VAR_1));
 } else {

  FUNC_2(VAR_3,
     VAR_1, 0);


  FUNC_2(VAR_3,
     VAR_2, 1);
 }
 return 0;
}
