
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sr_exit_time_ns; int sr_enter_plus_exit_time_ns; int urgent_latency_ns; int percent_of_ideal_drambw; int dram_clock_change_latency_ns; } ;
struct dc {TYPE_2__ debug; TYPE_1__* dcn_soc; } ;
struct TYPE_3__ {int sr_exit_time; int sr_enter_plus_exit_time; int urgent_latency; int percent_of_ideal_drambw_received_after_urg_latency; int dram_clock_change_latency; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct dc *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_0();
 if ((int)(VAR_0->dcn_soc->sr_exit_time * 1000) != VAR_0->debug.sr_exit_time_ns
   && VAR_0->debug.sr_exit_time_ns) {
  VAR_1 = 1;
  VAR_0->dcn_soc->sr_exit_time = VAR_0->debug.sr_exit_time_ns / 1000.0;
 }

 if ((int)(VAR_0->dcn_soc->sr_enter_plus_exit_time * 1000)
    != VAR_0->debug.sr_enter_plus_exit_time_ns
   && VAR_0->debug.sr_enter_plus_exit_time_ns) {
  VAR_1 = 1;
  VAR_0->dcn_soc->sr_enter_plus_exit_time =
    VAR_0->debug.sr_enter_plus_exit_time_ns / 1000.0;
 }

 if ((int)(VAR_0->dcn_soc->urgent_latency * 1000) != VAR_0->debug.urgent_latency_ns
   && VAR_0->debug.urgent_latency_ns) {
  VAR_1 = 1;
  VAR_0->dcn_soc->urgent_latency = VAR_0->debug.urgent_latency_ns / 1000.0;
 }

 if ((int)(VAR_0->dcn_soc->percent_of_ideal_drambw_received_after_urg_latency * 1000)
    != VAR_0->debug.percent_of_ideal_drambw
   && VAR_0->debug.percent_of_ideal_drambw) {
  VAR_1 = 1;
  VAR_0->dcn_soc->percent_of_ideal_drambw_received_after_urg_latency =
    VAR_0->debug.percent_of_ideal_drambw;
 }

 if ((int)(VAR_0->dcn_soc->dram_clock_change_latency * 1000)
    != VAR_0->debug.dram_clock_change_latency_ns
   && VAR_0->debug.dram_clock_change_latency_ns) {
  VAR_1 = 1;
  VAR_0->dcn_soc->dram_clock_change_latency =
    VAR_0->debug.dram_clock_change_latency_ns / 1000.0;
 }
 FUNC_1();

 return VAR_1;
}
