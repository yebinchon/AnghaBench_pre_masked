
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dce_hwseq {TYPE_3__* ctx; } ;
struct TYPE_6__ {TYPE_2__* dc; int logger; } ;
struct TYPE_4__ {int (* hubp_pg_control ) (struct dce_hwseq*,int,int) ;int (* dpp_pg_control ) (struct dce_hwseq*,int,int) ;} ;
struct TYPE_5__ {TYPE_1__ hwss; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct dce_hwseq*,int,int) ;
 int FUNC_5 (struct dce_hwseq*,int,int) ;

__attribute__((used)) static void FUNC_6(
 struct dce_hwseq *VAR_2,
 int VAR_3)
{
 FUNC_0(VAR_2->ctx->logger);
 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, 0,
    VAR_1, 1);
  VAR_2->ctx->dc->hwss.dpp_pg_control(VAR_2, VAR_3, 1);
  VAR_2->ctx->dc->hwss.hubp_pg_control(VAR_2, VAR_3, 1);
  FUNC_3(VAR_0, 0,
    VAR_1, 0);
  FUNC_1(
    "Un-gated front end for pipe %d\n", VAR_3);
 }
}
