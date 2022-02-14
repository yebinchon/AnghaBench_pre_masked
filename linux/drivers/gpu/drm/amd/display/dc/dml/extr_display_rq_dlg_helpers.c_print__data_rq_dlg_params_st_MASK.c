
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int meta_bytes_per_row_ub; int meta_row_height; int meta_req_per_row_ub; int meta_chunks_per_row_ub; int dpte_bytes_per_row_ub; int dpte_row_height; int dpte_groups_per_row_ub; int dpte_req_per_row_ub; int meta_pte_bytes_per_frame_ub; int req_per_swath_ub; int swath_height; int swath_width_ub; } ;
typedef TYPE_1__ display_data_rq_dlg_params_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_data_rq_dlg_params_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_DATA_RQ_DLG_PARAM_ST\n");
 FUNC_0(
   "DML_RQ_DLG_CALC:    swath_width_ub              = %0d\n",
   VAR_1.swath_width_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    swath_height                = %0d\n",
   VAR_1.swath_height);
 FUNC_0(
   "DML_RQ_DLG_CALC:    req_per_swath_ub            = %0d\n",
   VAR_1.req_per_swath_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    meta_pte_bytes_per_frame_ub = %0d\n",
   VAR_1.meta_pte_bytes_per_frame_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dpte_req_per_row_ub         = %0d\n",
   VAR_1.dpte_req_per_row_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dpte_groups_per_row_ub      = %0d\n",
   VAR_1.dpte_groups_per_row_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dpte_row_height             = %0d\n",
   VAR_1.dpte_row_height);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dpte_bytes_per_row_ub       = %0d\n",
   VAR_1.dpte_bytes_per_row_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    meta_chunks_per_row_ub      = %0d\n",
   VAR_1.meta_chunks_per_row_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    meta_req_per_row_ub         = %0d\n",
   VAR_1.meta_req_per_row_ub);
 FUNC_0(
   "DML_RQ_DLG_CALC:    meta_row_height             = %0d\n",
   VAR_1.meta_row_height);
 FUNC_0(
   "DML_RQ_DLG_CALC:    meta_bytes_per_row_ub       = %0d\n",
   VAR_1.meta_bytes_per_row_ub);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
