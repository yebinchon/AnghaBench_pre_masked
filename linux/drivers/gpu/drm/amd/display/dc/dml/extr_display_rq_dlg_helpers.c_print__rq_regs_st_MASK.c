
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int plane1_base_address; int crq_expansion_mode; int mrq_expansion_mode; int prq_expansion_mode; int drq_expansion_mode; int rq_regs_c; int rq_regs_l; } ;
typedef TYPE_1__ display_rq_regs_st ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct display_mode_lib*,int ) ;

void FUNC_2(struct display_mode_lib *VAR_0, display_rq_regs_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_RQ_REGS_ST\n");
 FUNC_0("DML_RQ_DLG_CALC:  <LUMA>\n");
 FUNC_1(VAR_0, VAR_1.rq_regs_l);
 FUNC_0("DML_RQ_DLG_CALC:  <CHROMA>\n");
 FUNC_1(VAR_0, VAR_1.rq_regs_c);
 FUNC_0("DML_RQ_DLG_CALC:    drq_expansion_mode  = 0x%0x\n", VAR_1.drq_expansion_mode);
 FUNC_0("DML_RQ_DLG_CALC:    prq_expansion_mode  = 0x%0x\n", VAR_1.prq_expansion_mode);
 FUNC_0("DML_RQ_DLG_CALC:    mrq_expansion_mode  = 0x%0x\n", VAR_1.mrq_expansion_mode);
 FUNC_0("DML_RQ_DLG_CALC:    crq_expansion_mode  = 0x%0x\n", VAR_1.crq_expansion_mode);
 FUNC_0("DML_RQ_DLG_CALC:    plane1_base_address = 0x%0x\n", VAR_1.plane1_base_address);
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
