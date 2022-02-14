
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {unsigned long soft_min_clk; unsigned long soft_max_clk; unsigned long hard_min_clk; } ;
struct smu8_hwmgr {TYPE_6__ sclk_dpm; } ;
struct TYPE_11__ {int platformCaps; } ;
struct TYPE_9__ {unsigned long mclk; } ;
struct TYPE_10__ {TYPE_3__ max_clock_voltage_on_ac; struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_5__ platform_descriptor; TYPE_4__ dyn_state; TYPE_2__* display_config; struct smu8_hwmgr* backend; } ;
struct phm_clock_voltage_dependency_table {unsigned long count; TYPE_1__* entries; } ;
struct TYPE_8__ {unsigned long min_core_set_clock; } ;
struct TYPE_7__ {unsigned long clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,unsigned long,int ) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_4)
{
 struct smu8_hwmgr *VAR_5 = VAR_4->backend;
 struct phm_clock_voltage_dependency_table *VAR_6 =
     VAR_4->dyn_state.vddc_dependency_on_sclk;

 unsigned long VAR_7 = 0;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_5->sclk_dpm.soft_min_clk = VAR_6->entries[0].clk;
 VAR_8 = FUNC_2(VAR_4) - 1;

 if (VAR_8 < VAR_6->count)
  VAR_5->sclk_dpm.soft_max_clk = VAR_6->entries[VAR_8].clk;
 else
  VAR_5->sclk_dpm.soft_max_clk = VAR_6->entries[VAR_6->count - 1].clk;

 VAR_7 = VAR_4->display_config->min_core_set_clock;
 if (VAR_7 == 0)
  FUNC_1("min_core_set_clock not set\n");

 if (VAR_5->sclk_dpm.hard_min_clk != VAR_7) {
  VAR_5->sclk_dpm.hard_min_clk = VAR_7;

  FUNC_4(VAR_4,
      VAR_1,
       FUNC_3(VAR_4,
     VAR_5->sclk_dpm.hard_min_clk,
          VAR_1));
 }

 VAR_7 = VAR_5->sclk_dpm.soft_min_clk;


 if (FUNC_0(VAR_4->platform_descriptor.platformCaps,
         VAR_0)) {
  VAR_10 = 75;

  VAR_9 = (VAR_4->dyn_state.max_clock_voltage_on_ac.mclk *
     VAR_10) / 100;

  if (VAR_7 < VAR_9)
   VAR_7 = VAR_9;
 }

 if (VAR_5->sclk_dpm.soft_min_clk != VAR_7) {
  VAR_5->sclk_dpm.soft_min_clk = VAR_7;
  FUNC_4(VAR_4,
      VAR_3,
      FUNC_3(VAR_4,
     VAR_5->sclk_dpm.soft_min_clk,
          VAR_3));
 }

 if (FUNC_0(VAR_4->platform_descriptor.platformCaps,
        VAR_0) &&
    VAR_5->sclk_dpm.soft_max_clk != VAR_7) {
  VAR_5->sclk_dpm.soft_max_clk = VAR_7;
  FUNC_4(VAR_4,
      VAR_2,
      FUNC_3(VAR_4,
     VAR_5->sclk_dpm.soft_max_clk,
     VAR_2));
 }

 return 0;
}
