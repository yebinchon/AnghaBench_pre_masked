
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; TYPE_2__* stream; } ;
struct dc_context {int dummy; } ;
struct dc {struct dc_context* ctx; } ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
struct TYPE_7__ {int triggered_crtc_reset; } ;
struct TYPE_6__ {int (* enable_crtc_reset ) (TYPE_4__*,int ,int *) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;
 int FUNC_2 (struct dc_context*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(
 struct dc *VAR_0,
 int VAR_1,
 struct pipe_ctx *VAR_2[])
{
 struct dc_context *VAR_3 = VAR_0->ctx;
 int VAR_4;

 FUNC_0("Setting up\n");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2[VAR_4]->stream_res.tg->funcs->enable_crtc_reset)
   VAR_2[VAR_4]->stream_res.tg->funcs->enable_crtc_reset(
     VAR_2[VAR_4]->stream_res.tg,
     0,
     &VAR_2[VAR_4]->stream->triggered_crtc_reset);

 FUNC_0("Waiting for trigger\n");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_2(VAR_3, VAR_2[VAR_4]->stream_res.tg);

 FUNC_0("Multi-display sync is complete\n");
}
