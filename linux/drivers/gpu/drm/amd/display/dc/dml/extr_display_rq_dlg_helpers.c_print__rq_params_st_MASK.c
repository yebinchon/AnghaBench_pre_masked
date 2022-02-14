
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_6__ {int rq_c; int rq_l; } ;
struct TYPE_8__ {int rq_c; int rq_l; } ;
struct TYPE_7__ {int rq_c; int rq_l; } ;
struct TYPE_9__ {TYPE_1__ misc; TYPE_3__ dlg; TYPE_2__ sizing; } ;
typedef TYPE_4__ display_rq_params_st ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct display_mode_lib*,int ) ;
 int FUNC_2 (struct display_mode_lib*,int ) ;
 int FUNC_3 (struct display_mode_lib*,int ) ;

void FUNC_4(struct display_mode_lib *VAR_0, display_rq_params_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: ***************************\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_RQ_PARAM_ST\n");
 FUNC_0("DML_RQ_DLG_CALC:  <LUMA>\n");
 FUNC_3(VAR_0, VAR_1.sizing.rq_l);
 FUNC_0("DML_RQ_DLG_CALC:  <CHROMA> ===\n");
 FUNC_3(VAR_0, VAR_1.sizing.rq_c);

 FUNC_0("DML_RQ_DLG_CALC: <LUMA>\n");
 FUNC_1(VAR_0, VAR_1.dlg.rq_l);
 FUNC_0("DML_RQ_DLG_CALC: <CHROMA>\n");
 FUNC_1(VAR_0, VAR_1.dlg.rq_c);

 FUNC_0("DML_RQ_DLG_CALC: <LUMA>\n");
 FUNC_2(VAR_0, VAR_1.misc.rq_l);
 FUNC_0("DML_RQ_DLG_CALC: <CHROMA>\n");
 FUNC_2(VAR_0, VAR_1.misc.rq_c);
 FUNC_0("DML_RQ_DLG_CALC: ***************************\n");
}
