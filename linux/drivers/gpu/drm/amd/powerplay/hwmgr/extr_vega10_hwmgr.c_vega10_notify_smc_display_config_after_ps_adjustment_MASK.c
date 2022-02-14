
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_2__* dpm_levels; } ;
struct TYPE_8__ {size_t soft_min_level; } ;
struct TYPE_9__ {TYPE_3__ dpm_state; } ;
struct TYPE_10__ {TYPE_4__ mem_table; struct vega10_single_dpm_table dcef_table; } ;
struct vega10_hwmgr {TYPE_5__ dpm_table; } ;
struct pp_hwmgr {TYPE_1__* display_config; scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct pp_display_clock_request {int clock_freq_in_khz; int clock_type; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int dummy; } ;
struct PP_Clocks {int dcefClock; int dcefClockInSR; scalar_t__ memoryClock; int member_0; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int num_display; int min_dcef_set_clk; int min_dcef_deep_sleep_set_clk; scalar_t__ min_mem_set_clock; int nb_pstate_switch_disable; int multi_monitor_in_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*,int ,size_t) ;
 int FUNC_3 (struct pp_hwmgr*,struct pp_display_clock_request*) ;
 size_t FUNC_4 (struct pp_hwmgr*,struct phm_ppt_v1_clock_voltage_dependency_table*,scalar_t__) ;
 int FUNC_5 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_6(
  struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;
 struct vega10_single_dpm_table *VAR_5 =
   &VAR_4->dpm_table.dcef_table;
 struct phm_ppt_v2_information *VAR_6 =
   (struct phm_ppt_v2_information *)VAR_3->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7 = VAR_6->vdd_dep_on_mclk;
 uint32_t VAR_8;
 struct PP_Clocks VAR_9 = {0};
 uint32_t VAR_10;
 struct pp_display_clock_request VAR_11;

 if ((VAR_3->display_config->num_display > 1) &&
      !VAR_3->display_config->multi_monitor_in_sync &&
      !VAR_3->display_config->nb_pstate_switch_disable)
  FUNC_5(VAR_3, 0);
 else
  FUNC_5(VAR_3, 1);

 VAR_9.dcefClock = VAR_3->display_config->min_dcef_set_clk;
 VAR_9.dcefClockInSR = VAR_3->display_config->min_dcef_deep_sleep_set_clk;
 VAR_9.memoryClock = VAR_3->display_config->min_mem_set_clock;

 for (VAR_10 = 0; VAR_10 < VAR_5->count; VAR_10++) {
  if (VAR_5->dpm_levels[VAR_10].value == VAR_9.dcefClock)
   break;
 }

 if (VAR_10 < VAR_5->count) {
  VAR_11.clock_type = VAR_2;
  VAR_11.clock_freq_in_khz = VAR_5->dpm_levels[VAR_10].value * 10;
  if (!FUNC_3(VAR_3, &VAR_11)) {
   FUNC_2(
     VAR_3, VAR_0,
     VAR_9.dcefClockInSR / 100);
  } else {
   FUNC_1("Attempt to set Hard Min for DCEFCLK Failed!");
  }
 } else {
  FUNC_0("Cannot find requested DCEFCLK!");
 }

 if (VAR_9.memoryClock != 0) {
  VAR_8 = FUNC_4(VAR_3, VAR_7, VAR_9.memoryClock);
  FUNC_2(VAR_3, VAR_1, VAR_8);
  VAR_4->dpm_table.mem_table.dpm_state.soft_min_level= VAR_8;
 }

 return 0;
}
