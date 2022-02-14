
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


struct resource_pool {TYPE_6__* mpc; } ;
struct TYPE_9__ {TYPE_2__* opp; } ;
struct pipe_ctx {TYPE_3__ stream_res; } ;
struct hubp {TYPE_4__* funcs; } ;
struct TYPE_11__ {scalar_t__ sanity_checks; } ;
struct dc {TYPE_5__ debug; } ;
struct TYPE_12__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* set_blank ) (struct hubp*,int) ;} ;
struct TYPE_8__ {int* mpcc_disconnect_pending; } ;
struct TYPE_7__ {int (* wait_for_idle ) (TYPE_6__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dc*) ;
 struct hubp* FUNC_1 (struct resource_pool*,int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (struct hubp*,int) ;

__attribute__((used)) static void FUNC_4(
  struct dc *VAR_1,
  struct resource_pool *VAR_2,
  struct pipe_ctx *VAR_3)
{
 int VAR_4;

 if (VAR_1->debug.sanity_checks) {
  FUNC_0(VAR_1);
 }

 if (!VAR_3->stream_res.opp)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->stream_res.opp->mpcc_disconnect_pending[VAR_4]) {
   struct hubp *VAR_5 = FUNC_1(VAR_2, VAR_4);

   VAR_2->mpc->funcs->wait_for_idle(VAR_2->mpc, VAR_4);
   VAR_3->stream_res.opp->mpcc_disconnect_pending[VAR_4] = 0;
   VAR_5->funcs->set_blank(VAR_5, 1);
  }
 }

 if (VAR_1->debug.sanity_checks) {
  FUNC_0(VAR_1);
 }

}
