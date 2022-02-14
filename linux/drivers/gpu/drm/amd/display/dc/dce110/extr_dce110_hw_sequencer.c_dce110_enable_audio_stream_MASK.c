
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct pp_smu_funcs {int dummy; } ;
struct TYPE_15__ {TYPE_13__* audio; TYPE_12__* stream_enc; } ;
struct pipe_ctx {TYPE_11__ stream_res; TYPE_2__* stream; } ;
struct dc {TYPE_7__* current_state; TYPE_3__* res_pool; struct clk_mgr* clk_mgr; } ;
struct clk_mgr {TYPE_9__* funcs; } ;
struct TYPE_26__ {int (* enable_pme_wa ) (struct clk_mgr*) ;} ;
struct TYPE_25__ {int (* az_enable ) (TYPE_13__*) ;} ;
struct TYPE_23__ {TYPE_5__* pipe_ctx; } ;
struct TYPE_24__ {TYPE_6__ res_ctx; } ;
struct TYPE_21__ {int * audio; } ;
struct TYPE_22__ {TYPE_4__ stream_res; } ;
struct TYPE_20__ {struct pp_smu_funcs* pp_smu; } ;
struct TYPE_19__ {TYPE_1__* ctx; } ;
struct TYPE_18__ {struct dc* dc; } ;
struct TYPE_17__ {int enabled; TYPE_8__* funcs; } ;
struct TYPE_16__ {TYPE_10__* funcs; } ;
struct TYPE_14__ {int (* audio_mute_control ) (TYPE_12__*,int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_13__*) ;
 int FUNC_1 (struct clk_mgr*) ;
 int FUNC_2 (TYPE_12__*,int) ;

void FUNC_3(struct pipe_ctx *VAR_1)
{

 struct dc *VAR_2;
 struct pp_smu_funcs *VAR_3 = ((void*)0);
 struct clk_mgr *VAR_4;
 unsigned int VAR_5, VAR_6 = 1;

 if (!VAR_1->stream)
  return;

 VAR_2 = VAR_1->stream->ctx->dc;
 VAR_4 = VAR_2->clk_mgr;

 if (VAR_1->stream_res.audio && VAR_1->stream_res.audio->enabled == 1)
  return;

 if (VAR_2->res_pool->pp_smu)
  VAR_3 = VAR_2->res_pool->pp_smu;

 if (VAR_1->stream_res.audio) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

   if (VAR_2->current_state->res_ctx.pipe_ctx[VAR_5].stream_res.audio != ((void*)0))
    VAR_6++;
  }

  VAR_1->stream_res.audio->funcs->az_enable(VAR_1->stream_res.audio);

  if (VAR_6 >= 1 && VAR_4->funcs->enable_pme_wa)

   VAR_4->funcs->enable_pme_wa(VAR_4);


  VAR_1->stream_res.stream_enc->funcs->audio_mute_control(
     VAR_1->stream_res.stream_enc, 0);
  if (VAR_1->stream_res.audio)
   VAR_1->stream_res.audio->enabled = 1;
 }
}
