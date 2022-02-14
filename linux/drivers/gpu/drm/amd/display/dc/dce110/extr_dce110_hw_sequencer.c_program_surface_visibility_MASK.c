
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


struct TYPE_11__ {TYPE_6__* tg; } ;
struct pipe_ctx {TYPE_5__ stream_res; TYPE_3__* plane_state; TYPE_2__* bottom_pipe; } ;
struct dc {int hwseq; } ;
typedef enum blnd_mode { ____Placeholder_blnd_mode } blnd_mode ;
struct TYPE_12__ {TYPE_4__* funcs; int inst; } ;
struct TYPE_10__ {int (* set_blank ) (TYPE_6__*,int) ;} ;
struct TYPE_9__ {scalar_t__ visible; } ;
struct TYPE_8__ {TYPE_1__* plane_state; int * bottom_pipe; } ;
struct TYPE_7__ {scalar_t__ visible; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_6__*,int) ;

__attribute__((used)) static void FUNC_3(const struct dc *VAR_3,
  struct pipe_ctx *VAR_4)
{
 enum blnd_mode VAR_5 = VAR_1;
 bool VAR_6 = 0;

 if (VAR_4->bottom_pipe) {


  FUNC_0(VAR_4->bottom_pipe->bottom_pipe == ((void*)0));

  if (VAR_4->bottom_pipe->plane_state->visible) {
   if (VAR_4->plane_state->visible)
    VAR_5 = VAR_0;
   else
    VAR_5 = VAR_2;

  } else if (!VAR_4->plane_state->visible)
   VAR_6 = 1;

 } else if (!VAR_4->plane_state->visible)
  VAR_6 = 1;

 FUNC_1(VAR_3->hwseq, VAR_4->stream_res.tg->inst, VAR_5);
 VAR_4->stream_res.tg->funcs->set_blank(VAR_4->stream_res.tg, VAR_6);

}
