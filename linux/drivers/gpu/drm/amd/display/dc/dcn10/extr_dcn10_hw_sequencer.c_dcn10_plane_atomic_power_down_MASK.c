
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hubp {int inst; } ;
struct dpp {TYPE_2__* funcs; int inst; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_4__ {int (* hubp_pg_control ) (struct dce_hwseq*,int ,int) ;int (* dpp_pg_control ) (struct dce_hwseq*,int ,int) ;} ;
struct dc {TYPE_1__ hwss; TYPE_3__* ctx; struct dce_hwseq* hwseq; } ;
struct TYPE_6__ {int logger; } ;
struct TYPE_5__ {int (* dpp_reset ) (struct dpp*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct dce_hwseq*,int ,int) ;
 int FUNC_5 (struct dce_hwseq*,int ,int) ;
 int FUNC_6 (struct dpp*) ;

__attribute__((used)) static void FUNC_7(struct dc *VAR_2,
  struct dpp *VAR_3,
  struct hubp *VAR_4)
{
 struct dce_hwseq *VAR_5 = VAR_2->hwseq;
 FUNC_0(VAR_2->ctx->logger);

 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, 0,
    VAR_1, 1);
  VAR_2->hwss.dpp_pg_control(VAR_5, VAR_3->inst, 0);
  VAR_2->hwss.hubp_pg_control(VAR_5, VAR_4->inst, 0);
  VAR_3->funcs->dpp_reset(VAR_3);
  FUNC_3(VAR_0, 0,
    VAR_1, 0);
  FUNC_1(
    "Power gated front end %d\n", VAR_4->inst);
 }
}
