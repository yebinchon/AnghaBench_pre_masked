
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int qos_ramp_disable_cur1; int qos_level_fixed_cur1; int qos_ramp_disable_cur0; int qos_level_fixed_cur0; int qos_ramp_disable_c; int qos_level_fixed_c; int qos_ramp_disable_l; int qos_level_fixed_l; int refcyc_per_req_delivery_pre_cur1; int refcyc_per_req_delivery_cur1; int refcyc_per_req_delivery_pre_cur0; int refcyc_per_req_delivery_cur0; int refcyc_per_req_delivery_c; int refcyc_per_req_delivery_pre_c; int refcyc_per_req_delivery_l; int refcyc_per_req_delivery_pre_l; int qos_level_flip; int min_ttu_vblank; int qos_level_high_wm; int qos_level_low_wm; } ;
typedef TYPE_1__ display_ttu_regs_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_ttu_regs_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_TTU_REGS_ST\n");
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_low_wm                  = 0x%0x\n",
   VAR_1.qos_level_low_wm);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_high_wm                 = 0x%0x\n",
   VAR_1.qos_level_high_wm);
 FUNC_0(
   "DML_RQ_DLG_CALC:    min_ttu_vblank                    = 0x%0x\n",
   VAR_1.min_ttu_vblank);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_flip                    = 0x%0x\n",
   VAR_1.qos_level_flip);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_pre_l     = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_pre_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_l         = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_pre_c     = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_pre_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_c         = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_cur0      = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_cur0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_pre_cur0  = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_pre_cur0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_cur1      = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_cur1);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_req_delivery_pre_cur1  = 0x%0x\n",
   VAR_1.refcyc_per_req_delivery_pre_cur1);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_fixed_l                 = 0x%0x\n",
   VAR_1.qos_level_fixed_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_ramp_disable_l                = 0x%0x\n",
   VAR_1.qos_ramp_disable_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_fixed_c                 = 0x%0x\n",
   VAR_1.qos_level_fixed_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_ramp_disable_c                = 0x%0x\n",
   VAR_1.qos_ramp_disable_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_fixed_cur0              = 0x%0x\n",
   VAR_1.qos_level_fixed_cur0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_ramp_disable_cur0             = 0x%0x\n",
   VAR_1.qos_ramp_disable_cur0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_level_fixed_cur1              = 0x%0x\n",
   VAR_1.qos_level_fixed_cur1);
 FUNC_0(
   "DML_RQ_DLG_CALC:    qos_ramp_disable_cur1             = 0x%0x\n",
   VAR_1.qos_ramp_disable_cur1);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
