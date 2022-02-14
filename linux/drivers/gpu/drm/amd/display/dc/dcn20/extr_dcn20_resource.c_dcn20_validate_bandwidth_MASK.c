
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


struct display_mode_lib {int dummy; } ;
struct TYPE_10__ {double dram_clock_change_latency_us; double dummy_pstate_latency_us; } ;
struct TYPE_12__ {TYPE_4__ soc; } ;
struct TYPE_7__ {int p_state_change_support; } ;
struct TYPE_8__ {TYPE_1__ clk; } ;
struct TYPE_9__ {TYPE_2__ dcn; } ;
struct TYPE_11__ {TYPE_6__ dml; TYPE_3__ bw; } ;
struct dc_state {TYPE_5__ bw_ctx; } ;
struct dc {int dml; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dc*,struct dc_state*,int) ;
 int FUNC_2 (TYPE_6__*,int *,int) ;

bool FUNC_3(struct dc *VAR_0, struct dc_state *VAR_1,
  bool VAR_2)
{
 bool VAR_3 = 0;
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 double VAR_6 = VAR_1->bw_ctx.dml.soc.dram_clock_change_latency_us;

 if (VAR_2)
  return FUNC_1(VAR_0, VAR_1, 1);



 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 VAR_4 = VAR_1->bw_ctx.bw.dcn.clk.p_state_change_support;

 if (VAR_1->bw_ctx.dml.soc.dummy_pstate_latency_us == 0 ||
  (VAR_3 && VAR_4)) {
  VAR_1->bw_ctx.bw.dcn.clk.p_state_change_support = 1;
  goto restore_dml_state;
 }


 VAR_1->bw_ctx.dml.soc.dram_clock_change_latency_us = VAR_1->bw_ctx.dml.soc.dummy_pstate_latency_us;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 VAR_5 = VAR_1->bw_ctx.bw.dcn.clk.p_state_change_support;

 if (VAR_3 && VAR_5) {
  VAR_1->bw_ctx.bw.dcn.clk.p_state_change_support = 0;
  goto restore_dml_state;
 }


 FUNC_0(0);

restore_dml_state:
 FUNC_2(&VAR_1->bw_ctx.dml, &VAR_0->dml, sizeof(struct display_mode_lib));
 VAR_1->bw_ctx.dml.soc.dram_clock_change_latency_us = VAR_6;

 return VAR_3;
}
