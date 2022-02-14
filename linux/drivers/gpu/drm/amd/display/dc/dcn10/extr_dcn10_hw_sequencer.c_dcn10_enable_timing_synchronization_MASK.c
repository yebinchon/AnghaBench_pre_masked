
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct dc_context {int dummy; } ;
struct dc {struct dc_context* ctx; } ;
struct TYPE_8__ {TYPE_1__* funcs; int inst; } ;
struct TYPE_6__ {int (* disable_reset_trigger ) (TYPE_3__*) ;int (* enable_reset_trigger ) (TYPE_3__*,int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct dc_context*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(
 struct dc *VAR_0,
 int VAR_1,
 int VAR_2,
 struct pipe_ctx *VAR_3[])
{
 struct dc_context *VAR_4 = VAR_0->ctx;
 int VAR_5;

 FUNC_0("Setting up OTG reset trigger\n");

 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  VAR_3[VAR_5]->stream_res.tg->funcs->enable_reset_trigger(
    VAR_3[VAR_5]->stream_res.tg,
    VAR_3[0]->stream_res.tg->inst);

 FUNC_0("Waiting for trigger\n");





 FUNC_3(VAR_4, VAR_3[1]->stream_res.tg);
 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  VAR_3[VAR_5]->stream_res.tg->funcs->disable_reset_trigger(
    VAR_3[VAR_5]->stream_res.tg);

 FUNC_0("Sync complete\n");
}
