
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int req_height; int req_width; int blk256_height; int blk256_width; int stored_swath_bytes; int full_swath_bytes; } ;
typedef TYPE_1__ display_data_rq_misc_params_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_data_rq_misc_params_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_DATA_RQ_MISC_PARAM_ST\n");
 FUNC_0(
   "DML_RQ_DLG_CALC:     full_swath_bytes   = %0d\n",
   VAR_1.full_swath_bytes);
 FUNC_0(
   "DML_RQ_DLG_CALC:     stored_swath_bytes = %0d\n",
   VAR_1.stored_swath_bytes);
 FUNC_0("DML_RQ_DLG_CALC:     blk256_width       = %0d\n", VAR_1.blk256_width);
 FUNC_0("DML_RQ_DLG_CALC:     blk256_height      = %0d\n", VAR_1.blk256_height);
 FUNC_0("DML_RQ_DLG_CALC:     req_width          = %0d\n", VAR_1.req_width);
 FUNC_0("DML_RQ_DLG_CALC:     req_height         = %0d\n", VAR_1.req_height);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
