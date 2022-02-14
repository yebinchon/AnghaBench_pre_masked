
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hubp {TYPE_5__* funcs; int power_gated; } ;
struct TYPE_12__ {int DEGVIDCN10_253_applied; } ;
struct TYPE_8__ {int DEGVIDCN10_253; } ;
struct dce_hwseq {TYPE_6__ wa_state; TYPE_2__ wa; } ;
struct TYPE_10__ {int (* hubp_pg_control ) (struct dce_hwseq*,int ,int) ;} ;
struct TYPE_7__ {scalar_t__ disable_stutter; } ;
struct dc {TYPE_4__ hwss; TYPE_3__* res_pool; TYPE_1__ debug; struct dce_hwseq* hwseq; } ;
struct TYPE_11__ {int (* set_hubp_blank_en ) (struct hubp*,int) ;} ;
struct TYPE_9__ {int pipe_count; struct hubp** hubps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct dce_hwseq*,int ,int) ;
 int FUNC_2 (struct hubp*,int) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_2)
{
 struct dce_hwseq *VAR_3 = VAR_2->hwseq;
 struct hubp *VAR_4 = VAR_2->res_pool->hubps[0];
 int VAR_5;

 if (VAR_2->debug.disable_stutter)
  return;

 if (!VAR_3->wa.DEGVIDCN10_253)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->res_pool->pipe_count; VAR_5++) {
  if (!VAR_2->res_pool->hubps[VAR_5]->power_gated)
   return;
 }



 FUNC_0(VAR_0, 0,
   VAR_1, 1);

 VAR_2->hwss.hubp_pg_control(VAR_3, 0, 1);
 FUNC_0(VAR_0, 0,
   VAR_1, 0);

 VAR_4->funcs->set_hubp_blank_en(VAR_4, 0);
 VAR_3->wa_state.DEGVIDCN10_253_applied = 1;
}
