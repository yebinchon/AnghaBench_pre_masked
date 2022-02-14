
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long soft_max_clk; unsigned long hard_max_clk; scalar_t__ hard_min_clk; scalar_t__ soft_min_clk; } ;
struct smu8_hwmgr {TYPE_3__ acp_dpm; } ;
struct TYPE_4__ {struct phm_acp_clock_voltage_dependency_table* acp_clock_voltage_dependency_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_acp_clock_voltage_dependency_table {unsigned long count; TYPE_2__* entries; } ;
struct TYPE_5__ {unsigned long acpclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct smu8_hwmgr *VAR_3 = VAR_2->backend;
 struct phm_acp_clock_voltage_dependency_table *VAR_4 =
    VAR_2->dyn_state.acp_clock_voltage_dependency_table;
 unsigned long VAR_5 = 0, VAR_6;

 if (((void*)0) == VAR_4 || VAR_4->count <= 0)
  return -VAR_0;

 VAR_3->acp_dpm.soft_min_clk = 0;
 VAR_3->acp_dpm.hard_min_clk = 0;

 FUNC_1(VAR_2, VAR_1);
 VAR_6 = FUNC_0(VAR_2);

 if (VAR_6 < VAR_4->count)
  VAR_5 = VAR_4->entries[VAR_6].acpclk;
 else
  VAR_5 = VAR_4->entries[VAR_4->count - 1].acpclk;

 VAR_3->acp_dpm.soft_max_clk = VAR_5;
 VAR_3->acp_dpm.hard_max_clk = VAR_5;
 return 0;
}
