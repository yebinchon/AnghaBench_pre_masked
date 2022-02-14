
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int total_flip_bytes; int total_flip_bw; int deepsleep_dcfclk_mhz; int t_srx_delay_us; int t_extra_us; int t_sr_wm_us; int t_urg_wm_us; int t_mclk_wm_us; } ;
typedef TYPE_1__ display_dlg_sys_params_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_dlg_sys_params_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_RQ_DLG_PARAM_ST\n");
 FUNC_0("DML_RQ_DLG_CALC:    t_mclk_wm_us         = %3.2f\n", VAR_1.t_mclk_wm_us);
 FUNC_0("DML_RQ_DLG_CALC:    t_urg_wm_us          = %3.2f\n", VAR_1.t_urg_wm_us);
 FUNC_0("DML_RQ_DLG_CALC:    t_sr_wm_us           = %3.2f\n", VAR_1.t_sr_wm_us);
 FUNC_0("DML_RQ_DLG_CALC:    t_extra_us           = %3.2f\n", VAR_1.t_extra_us);
 FUNC_0(
   "DML_RQ_DLG_CALC:    t_srx_delay_us       = %3.2f\n",
   VAR_1.t_srx_delay_us);
 FUNC_0(
   "DML_RQ_DLG_CALC:    deepsleep_dcfclk_mhz = %3.2f\n",
   VAR_1.deepsleep_dcfclk_mhz);
 FUNC_0(
   "DML_RQ_DLG_CALC:    total_flip_bw        = %3.2f\n",
   VAR_1.total_flip_bw);
 FUNC_0(
   "DML_RQ_DLG_CALC:    total_flip_bytes     = %i\n",
   VAR_1.total_flip_bytes);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
