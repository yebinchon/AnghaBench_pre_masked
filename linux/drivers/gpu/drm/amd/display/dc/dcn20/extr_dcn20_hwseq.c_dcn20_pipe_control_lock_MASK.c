
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ gsl_group; TYPE_4__* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; TYPE_1__* plane_state; int * bottom_pipe; scalar_t__ top_pipe; } ;
struct dc {int dummy; } ;
struct TYPE_11__ {TYPE_2__* funcs; } ;
struct TYPE_9__ {int (* unlock ) (TYPE_4__*) ;int (* lock ) (TYPE_4__*) ;int (* triplebuffer_unlock ) (TYPE_4__*) ;int (* triplebuffer_lock ) (TYPE_4__*) ;} ;
struct TYPE_8__ {int flip_immediate; scalar_t__ triplebuffer_flips; } ;


 int FUNC_0 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(
 struct dc *VAR_0,
 struct pipe_ctx *VAR_1,
 bool VAR_2)
{
 bool VAR_3 = 0;




 if (VAR_1->top_pipe)
  return;

 if (VAR_1->plane_state != ((void*)0))
  VAR_3 = VAR_1->plane_state->flip_immediate;




 if (VAR_2 && VAR_1->bottom_pipe != ((void*)0))
  if ((VAR_3 && VAR_1->stream_res.gsl_group == 0) ||
      (!VAR_3 && VAR_1->stream_res.gsl_group > 0))
   FUNC_0(VAR_0, VAR_1, VAR_3);

 if (VAR_1->plane_state != ((void*)0) && VAR_1->plane_state->triplebuffer_flips) {
  if (VAR_2)
   VAR_1->stream_res.tg->funcs->triplebuffer_lock(VAR_1->stream_res.tg);
  else
   VAR_1->stream_res.tg->funcs->triplebuffer_unlock(VAR_1->stream_res.tg);
 } else {
  if (VAR_2)
   VAR_1->stream_res.tg->funcs->lock(VAR_1->stream_res.tg);
  else
   VAR_1->stream_res.tg->funcs->unlock(VAR_1->stream_res.tg);
 }
}
