
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct dc {int dummy; } ;
struct TYPE_12__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* lock_doublebuffer_disable ) (TYPE_3__*) ;int (* wait_for_state ) (TYPE_3__*,int ) ;int (* unlock ) (TYPE_3__*) ;int (* lock ) (TYPE_3__*) ;int (* lock_doublebuffer_enable ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(
  struct dc *VAR_2,
  struct pipe_ctx *VAR_3,
  bool VAR_4)
{
 if (VAR_4) {
  VAR_3->stream_res.tg->funcs->lock_doublebuffer_enable(
    VAR_3->stream_res.tg);
  VAR_3->stream_res.tg->funcs->lock(VAR_3->stream_res.tg);
 } else {
  VAR_3->stream_res.tg->funcs->unlock(VAR_3->stream_res.tg);
  VAR_3->stream_res.tg->funcs->wait_for_state(VAR_3->stream_res.tg,
    VAR_0);
  VAR_3->stream_res.tg->funcs->wait_for_state(VAR_3->stream_res.tg,
    VAR_1);
  VAR_3->stream_res.tg->funcs->wait_for_state(VAR_3->stream_res.tg,
    VAR_0);
  VAR_3->stream_res.tg->funcs->lock_doublebuffer_disable(
    VAR_3->stream_res.tg);
 }
}
