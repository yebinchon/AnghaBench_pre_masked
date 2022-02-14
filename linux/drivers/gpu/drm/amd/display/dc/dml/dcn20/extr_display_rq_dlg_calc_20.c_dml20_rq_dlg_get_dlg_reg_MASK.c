
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int dcfclk_cstate_latency; } ;
struct display_mode_lib {TYPE_1__ ip; } ;
typedef int display_ttu_regs_st ;
struct TYPE_21__ {int dlg; int member_0; } ;
typedef TYPE_3__ display_rq_params_st ;
struct TYPE_20__ {int src; } ;
struct TYPE_22__ {TYPE_2__ pipe; } ;
typedef TYPE_4__ display_e2e_pipe_params_st ;
struct TYPE_23__ {int deepsleep_dcfclk_mhz; int t_srx_delay_us; int total_flip_bytes; int total_flip_bw; int t_sr_wm_us; int t_mclk_wm_us; int mem_trip_us; int t_extra_us; int t_urg_wm_us; int member_0; } ;
typedef TYPE_5__ display_dlg_sys_params_st ;
typedef int display_dlg_regs_st ;


 int FUNC_0 (struct display_mode_lib*,TYPE_4__*,unsigned int const,unsigned int const,int *,int *,int ,TYPE_5__,int const,int const) ;
 int FUNC_1 (struct display_mode_lib*,TYPE_3__*,int ) ;
 int FUNC_2 (char*,unsigned int const) ;
 int FUNC_3 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_4 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_5 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_6 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_7 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_8 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_9 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_10 (struct display_mode_lib*,TYPE_4__*,unsigned int const) ;
 int FUNC_11 (struct display_mode_lib*,TYPE_5__) ;

void FUNC_12(struct display_mode_lib *VAR_0,
  display_dlg_regs_st *VAR_1,
  display_ttu_regs_st *VAR_2,
  display_e2e_pipe_params_st *VAR_3,
  const unsigned int VAR_4,
  const unsigned int VAR_5,
  const bool VAR_6,
  const bool VAR_7,
  const bool VAR_8,
  const bool VAR_9,
  const bool VAR_10)
{
 display_rq_params_st VAR_11 = {0};
 display_dlg_sys_params_st VAR_12 = {0};


 VAR_12.t_urg_wm_us = FUNC_10(VAR_0, VAR_3, VAR_4);
 VAR_12.deepsleep_dcfclk_mhz = FUNC_3(VAR_0,
   VAR_3,
   VAR_4);
 VAR_12.t_extra_us = FUNC_6(VAR_0, VAR_3, VAR_4);
 VAR_12.mem_trip_us = FUNC_8(VAR_0, VAR_3, VAR_4);
 VAR_12.t_mclk_wm_us = FUNC_7(VAR_0, VAR_3, VAR_4);
 VAR_12.t_sr_wm_us = FUNC_9(VAR_0, VAR_3, VAR_4);
 VAR_12.total_flip_bw = FUNC_4(VAR_0,
   VAR_3,
   VAR_4);
 VAR_12.total_flip_bytes = FUNC_5(VAR_0,
   VAR_3,
   VAR_4);
 VAR_12.t_srx_delay_us = VAR_0->ip.dcfclk_cstate_latency
   / VAR_12.deepsleep_dcfclk_mhz;

 FUNC_11(VAR_0, VAR_12);



 FUNC_2("DML_DLG: Calculation for pipe[%d] start\n\n", VAR_5);
 FUNC_1(VAR_0, &VAR_11, VAR_3[VAR_5].pipe.src);
 FUNC_0(VAR_0,
   VAR_3,
   VAR_4,
   VAR_5,
   VAR_1,
   VAR_2,
   VAR_11.dlg,
   VAR_12,
   VAR_6,
   VAR_7);
 FUNC_2("DML_DLG: Calculation for pipe[%d] end\n", VAR_5);
}
