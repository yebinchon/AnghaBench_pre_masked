
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long soft_min_clk; unsigned long hard_min_clk; unsigned long soft_max_clk; unsigned long hard_max_clk; } ;
struct smu8_hwmgr {TYPE_3__ sclk_dpm; } ;
struct TYPE_4__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {unsigned long pstate_sclk; scalar_t__ pstate_mclk; TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_clock_voltage_dependency_table {unsigned long count; TYPE_2__* entries; } ;
struct TYPE_5__ {unsigned long clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_3->backend;
 struct phm_clock_voltage_dependency_table *VAR_5 =
    VAR_3->dyn_state.vddc_dependency_on_sclk;
 unsigned long VAR_6 = 0, VAR_7;

 if (((void*)0) == VAR_5 || VAR_5->count <= 0)
  return -VAR_0;

 VAR_4->sclk_dpm.soft_min_clk = VAR_5->entries[0].clk;
 VAR_4->sclk_dpm.hard_min_clk = VAR_5->entries[0].clk;
 VAR_3->pstate_sclk = VAR_5->entries[0].clk;
 VAR_3->pstate_mclk = 0;

 VAR_7 = FUNC_0(VAR_3) - 1;

 if (VAR_7 < VAR_5->count)
  VAR_6 = VAR_5->entries[VAR_7].clk;
 else
  VAR_6 = VAR_5->entries[VAR_5->count - 1].clk;

 VAR_4->sclk_dpm.soft_max_clk = VAR_6;
 VAR_4->sclk_dpm.hard_max_clk = VAR_6;

 FUNC_2(VAR_3,
    VAR_2,
    FUNC_1(VAR_3,
    VAR_4->sclk_dpm.soft_min_clk,
    VAR_2));

 FUNC_2(VAR_3,
    VAR_1,
    FUNC_1(VAR_3,
    VAR_4->sclk_dpm.soft_max_clk,
    VAR_1));

 return 0;
}
