
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; scalar_t__ top_pipe; } ;
struct TYPE_6__ {scalar_t__ sanity_checks; } ;
struct dc {TYPE_1__ debug; } ;
struct TYPE_9__ {TYPE_2__* funcs; } ;
struct TYPE_7__ {int (* unlock ) (TYPE_4__*) ;int (* lock ) (TYPE_4__*) ;} ;


 int FUNC_0 (struct dc*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(
 struct dc *VAR_0,
 struct pipe_ctx *VAR_1,
 bool VAR_2)
{



 if (VAR_1->top_pipe)
  return;

 if (VAR_0->debug.sanity_checks)
  FUNC_0(VAR_0);

 if (VAR_2)
  VAR_1->stream_res.tg->funcs->lock(VAR_1->stream_res.tg);
 else
  VAR_1->stream_res.tg->funcs->unlock(VAR_1->stream_res.tg);

 if (VAR_0->debug.sanity_checks)
  FUNC_0(VAR_0);
}
