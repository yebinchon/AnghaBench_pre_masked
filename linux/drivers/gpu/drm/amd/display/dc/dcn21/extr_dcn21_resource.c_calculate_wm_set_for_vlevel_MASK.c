
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct wm_range_table_entry {double pstate_latency_us; } ;
struct TYPE_17__ {double dram_clock_change_latency_us; int num_states; TYPE_2__* clock_limits; } ;
struct display_mode_lib {TYPE_4__ soc; } ;
struct TYPE_16__ {int cstate_enter_plus_exit_ns; int cstate_exit_ns; int pstate_change_ns; } ;
struct dcn_watermarks {int urgent_ns; int pte_meta_urgent_ns; int frac_urg_bw_nom; int frac_urg_bw_flip; TYPE_3__ cstate_pstate; } ;
struct TYPE_14__ {int voltage; int socclk_mhz; int dcfclk_mhz; } ;
struct TYPE_18__ {TYPE_1__ clks_cfg; } ;
typedef TYPE_5__ display_e2e_pipe_params_st ;
struct TYPE_15__ {int socclk_mhz; int dcfclk_mhz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_2 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_3 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_4 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_5 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_6 (struct display_mode_lib*,TYPE_5__*,int) ;
 int FUNC_7 (struct display_mode_lib*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_8(
  int VAR_0,
  struct wm_range_table_entry *VAR_1,
  struct dcn_watermarks *VAR_2,
  struct display_mode_lib *VAR_3,
  display_e2e_pipe_params_st *VAR_4,
  int VAR_5)
{
 double VAR_6 = VAR_3->soc.dram_clock_change_latency_us;

 FUNC_0(VAR_0 < VAR_3->soc.num_states);

 VAR_4[0].clks_cfg.voltage = VAR_0;
 VAR_4[0].clks_cfg.dcfclk_mhz = VAR_3->soc.clock_limits[VAR_0].dcfclk_mhz;
 VAR_4[0].clks_cfg.socclk_mhz = VAR_3->soc.clock_limits[VAR_0].socclk_mhz;

 VAR_3->soc.dram_clock_change_latency_us = VAR_1->pstate_latency_us;

 VAR_2->urgent_ns = FUNC_7(VAR_3, VAR_4, VAR_5) * 1000;
 VAR_2->cstate_pstate.cstate_enter_plus_exit_ns = FUNC_5(VAR_3, VAR_4, VAR_5) * 1000;
 VAR_2->cstate_pstate.cstate_exit_ns = FUNC_6(VAR_3, VAR_4, VAR_5) * 1000;
 VAR_2->cstate_pstate.pstate_change_ns = FUNC_3(VAR_3, VAR_4, VAR_5) * 1000;
 VAR_2->pte_meta_urgent_ns = FUNC_4(VAR_3, VAR_4, VAR_5) * 1000;




 VAR_3->soc.dram_clock_change_latency_us = VAR_6;

}
