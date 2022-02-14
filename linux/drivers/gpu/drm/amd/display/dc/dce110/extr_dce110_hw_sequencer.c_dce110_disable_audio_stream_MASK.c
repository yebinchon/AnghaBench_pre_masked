
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pp_smu_funcs {int dummy; } ;
struct TYPE_16__ {TYPE_8__* stream_enc; TYPE_2__* audio; } ;
struct pipe_ctx {TYPE_6__ stream_res; TYPE_4__* stream; } ;
struct dc {TYPE_3__* res_pool; struct clk_mgr* clk_mgr; } ;
struct clk_mgr {TYPE_7__* funcs; } ;
struct TYPE_18__ {TYPE_5__* funcs; } ;
struct TYPE_17__ {int (* enable_pme_wa ) (struct clk_mgr*) ;} ;
struct TYPE_15__ {int (* hdmi_audio_disable ) (TYPE_8__*) ;int (* dp_audio_disable ) (TYPE_8__*) ;int (* audio_mute_control ) (TYPE_8__*,int) ;} ;
struct TYPE_14__ {int signal; TYPE_1__* ctx; } ;
struct TYPE_13__ {struct pp_smu_funcs* pp_smu; } ;
struct TYPE_12__ {int enabled; } ;
struct TYPE_11__ {struct dc* dc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,int) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (struct clk_mgr*) ;

void FUNC_5(struct pipe_ctx *VAR_0)
{
 struct dc *VAR_1;
 struct pp_smu_funcs *VAR_2 = ((void*)0);
 struct clk_mgr *VAR_3;

 if (!VAR_0 || !VAR_0->stream)
  return;

 VAR_1 = VAR_0->stream->ctx->dc;
 VAR_3 = VAR_1->clk_mgr;

 if (VAR_0->stream_res.audio && VAR_0->stream_res.audio->enabled == 0)
  return;

 VAR_0->stream_res.stream_enc->funcs->audio_mute_control(
   VAR_0->stream_res.stream_enc, 1);
 if (VAR_0->stream_res.audio) {
  VAR_0->stream_res.audio->enabled = 0;

  if (VAR_1->res_pool->pp_smu)
   VAR_2 = VAR_1->res_pool->pp_smu;

  if (FUNC_0(VAR_0->stream->signal))
   VAR_0->stream_res.stream_enc->funcs->dp_audio_disable(
     VAR_0->stream_res.stream_enc);
  else
   VAR_0->stream_res.stream_enc->funcs->hdmi_audio_disable(
     VAR_0->stream_res.stream_enc);

  if (VAR_3->funcs->enable_pme_wa)

   VAR_3->funcs->enable_pme_wa(VAR_3);






 }
}
