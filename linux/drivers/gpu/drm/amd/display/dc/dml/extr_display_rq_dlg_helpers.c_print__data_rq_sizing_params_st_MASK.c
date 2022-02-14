
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int dpte_group_bytes; int mpte_group_bytes; int min_meta_chunk_bytes; int meta_chunk_bytes; int min_chunk_bytes; int chunk_bytes; } ;
typedef TYPE_1__ display_data_rq_sizing_params_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_data_rq_sizing_params_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_DATA_RQ_SIZING_PARAM_ST\n");
 FUNC_0("DML_RQ_DLG_CALC:    chunk_bytes           = %0d\n", VAR_1.chunk_bytes);
 FUNC_0("DML_RQ_DLG_CALC:    min_chunk_bytes       = %0d\n", VAR_1.min_chunk_bytes);
 FUNC_0("DML_RQ_DLG_CALC:    meta_chunk_bytes      = %0d\n", VAR_1.meta_chunk_bytes);
 FUNC_0(
   "DML_RQ_DLG_CALC:    min_meta_chunk_bytes  = %0d\n",
   VAR_1.min_meta_chunk_bytes);
 FUNC_0("DML_RQ_DLG_CALC:    mpte_group_bytes      = %0d\n", VAR_1.mpte_group_bytes);
 FUNC_0("DML_RQ_DLG_CALC:    dpte_group_bytes      = %0d\n", VAR_1.dpte_group_bytes);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
