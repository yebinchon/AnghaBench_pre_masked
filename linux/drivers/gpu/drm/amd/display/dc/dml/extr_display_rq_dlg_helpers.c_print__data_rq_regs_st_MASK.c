
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int pte_row_height_linear; int swath_height; int mpte_group_size; int dpte_group_size; int min_meta_chunk_size; int meta_chunk_size; int min_chunk_size; int chunk_size; } ;
typedef TYPE_1__ display_data_rq_regs_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_data_rq_regs_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_DATA_RQ_REGS_ST\n");
 FUNC_0("DML_RQ_DLG_CALC:    chunk_size              = 0x%0x\n", VAR_1.chunk_size);
 FUNC_0("DML_RQ_DLG_CALC:    min_chunk_size          = 0x%0x\n", VAR_1.min_chunk_size);
 FUNC_0("DML_RQ_DLG_CALC:    meta_chunk_size         = 0x%0x\n", VAR_1.meta_chunk_size);
 FUNC_0(
   "DML_RQ_DLG_CALC:    min_meta_chunk_size     = 0x%0x\n",
   VAR_1.min_meta_chunk_size);
 FUNC_0("DML_RQ_DLG_CALC:    dpte_group_size         = 0x%0x\n", VAR_1.dpte_group_size);
 FUNC_0("DML_RQ_DLG_CALC:    mpte_group_size         = 0x%0x\n", VAR_1.mpte_group_size);
 FUNC_0("DML_RQ_DLG_CALC:    swath_height            = 0x%0x\n", VAR_1.swath_height);
 FUNC_0(
   "DML_RQ_DLG_CALC:    pte_row_height_linear   = 0x%0x\n",
   VAR_1.pte_row_height_linear);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
