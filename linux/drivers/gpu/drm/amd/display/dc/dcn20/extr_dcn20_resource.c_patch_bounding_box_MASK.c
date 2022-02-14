
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sr_exit_time_ns; int sr_enter_plus_exit_time_ns; int urgent_latency_ns; int dram_clock_change_latency_ns; } ;
struct dc {TYPE_1__ bb_overrides; } ;
struct _vcs_dpi_soc_bounding_box_st {int sr_exit_time_us; int sr_enter_plus_exit_time_us; int urgent_latency_us; int dram_clock_change_latency_us; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct dc *VAR_0, struct _vcs_dpi_soc_bounding_box_st *VAR_1)
{
 FUNC_0();
 if ((int)(VAR_1->sr_exit_time_us * 1000) != VAR_0->bb_overrides.sr_exit_time_ns
   && VAR_0->bb_overrides.sr_exit_time_ns) {
  VAR_1->sr_exit_time_us = VAR_0->bb_overrides.sr_exit_time_ns / 1000.0;
 }

 if ((int)(VAR_1->sr_enter_plus_exit_time_us * 1000)
    != VAR_0->bb_overrides.sr_enter_plus_exit_time_ns
   && VAR_0->bb_overrides.sr_enter_plus_exit_time_ns) {
  VAR_1->sr_enter_plus_exit_time_us =
    VAR_0->bb_overrides.sr_enter_plus_exit_time_ns / 1000.0;
 }

 if ((int)(VAR_1->urgent_latency_us * 1000) != VAR_0->bb_overrides.urgent_latency_ns
   && VAR_0->bb_overrides.urgent_latency_ns) {
  VAR_1->urgent_latency_us = VAR_0->bb_overrides.urgent_latency_ns / 1000.0;
 }

 if ((int)(VAR_1->dram_clock_change_latency_us * 1000)
    != VAR_0->bb_overrides.dram_clock_change_latency_ns
   && VAR_0->bb_overrides.dram_clock_change_latency_ns) {
  VAR_1->dram_clock_change_latency_us =
    VAR_0->bb_overrides.dram_clock_change_latency_ns / 1000.0;
 }
 FUNC_1();
}
