
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hubp {TYPE_1__* funcs; } ;
struct TYPE_8__ {int DEGVIDCN10_253_applied; } ;
struct dce_hwseq {TYPE_4__ wa_state; } ;
struct TYPE_6__ {int (* hubp_pg_control ) (struct dce_hwseq*,int ,int) ;} ;
struct dc {TYPE_2__ hwss; TYPE_3__* res_pool; struct dce_hwseq* hwseq; } ;
struct TYPE_7__ {struct hubp** hubps; } ;
struct TYPE_5__ {int (* set_blank ) (struct hubp*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct hubp*,int) ;
 int FUNC_2 (struct dce_hwseq*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_2)
{
 struct dce_hwseq *VAR_3 = VAR_2->hwseq;
 struct hubp *VAR_4 = VAR_2->res_pool->hubps[0];

 if (!VAR_3->wa_state.DEGVIDCN10_253_applied)
  return;

 VAR_4->funcs->set_blank(VAR_4, 1);

 FUNC_0(VAR_0, 0,
   VAR_1, 1);

 VAR_2->hwss.hubp_pg_control(VAR_3, 0, 0);
 FUNC_0(VAR_0, 0,
   VAR_1, 0);

 VAR_3->wa_state.DEGVIDCN10_253_applied = 0;
}
