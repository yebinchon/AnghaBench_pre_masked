
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct tg_color {int member_0; } ;
struct resource_pool {unsigned int underlay_pipe_index; int * opps; int * transforms; TYPE_12__** mis; TYPE_11__** timing_generators; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_17__ {TYPE_11__* tg; int opp; } ;
struct TYPE_28__ {TYPE_12__* mi; int xfm; } ;
struct pipe_ctx {unsigned int pipe_idx; TYPE_10__ stream_res; TYPE_8__ plane_res; struct dc_stream_state* stream; } ;
struct TYPE_20__ {int pix_clk_100hz; int v_total; int h_total; } ;
struct dc_stream_state {TYPE_14__ timing; int signal; TYPE_1__* ctx; } ;
struct dc_state {int stream_count; struct resource_context res_ctx; } ;
struct dc_bios {int dummy; } ;
struct TYPE_26__ {int (* enable_display_power_gating ) (struct dc*,int ,struct dc_bios*,int ) ;} ;
struct dc {TYPE_6__ hwss; TYPE_5__* ctx; TYPE_4__* current_state; } ;
struct TYPE_29__ {int (* set_blank_color ) (TYPE_11__*,struct tg_color*) ;int (* enable_advanced_request ) (TYPE_11__*,int,TYPE_14__*) ;int (* program_timing ) (TYPE_11__*,TYPE_14__*,int ,int ,int ,int ,int ,int) ;} ;
struct TYPE_27__ {int (* allocate_mem_input ) (TYPE_12__*,int ,int ,int,int ) ;} ;
struct TYPE_25__ {struct dc_bios* dc_bios; } ;
struct TYPE_23__ {TYPE_2__* pipe_ctx; } ;
struct TYPE_24__ {TYPE_3__ res_ctx; } ;
struct TYPE_22__ {int stream; } ;
struct TYPE_21__ {struct dc* dc; } ;
struct TYPE_19__ {TYPE_7__* funcs; } ;
struct TYPE_18__ {TYPE_9__* funcs; int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc*,int ,struct tg_color*) ;
 int FUNC_1 (struct dc*,int ,struct dc_bios*,int ) ;
 int FUNC_2 (TYPE_11__*,TYPE_14__*,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_11__*,int,TYPE_14__*) ;
 int FUNC_4 (TYPE_12__*,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_11__*,struct tg_color*) ;

__attribute__((used)) static struct pipe_ctx *FUNC_6(
  struct dc_state *VAR_2,
  const struct resource_pool *VAR_3,
  struct dc_stream_state *VAR_4)
{
 struct dc *VAR_5 = VAR_4->ctx->dc;
 struct resource_context *VAR_6 = &VAR_2->res_ctx;
 unsigned int VAR_7 = VAR_3->underlay_pipe_index;
 struct pipe_ctx *VAR_8 = &VAR_6->pipe_ctx[VAR_7];

 if (VAR_6->pipe_ctx[VAR_7].stream)
  return ((void*)0);

 VAR_8->stream_res.tg = VAR_3->timing_generators[VAR_7];
 VAR_8->plane_res.mi = VAR_3->mis[VAR_7];

 VAR_8->plane_res.xfm = VAR_3->transforms[VAR_7];
 VAR_8->stream_res.opp = VAR_3->opps[VAR_7];
 VAR_8->pipe_idx = VAR_7;

 VAR_8->stream = VAR_4;

 if (!VAR_5->current_state->res_ctx.pipe_ctx[VAR_7].stream) {
  struct tg_color VAR_9 = {0};
  struct dc_bios *VAR_10 = VAR_5->ctx->dc_bios;

  VAR_5->hwss.enable_display_power_gating(
    VAR_5,
    VAR_8->stream_res.tg->inst,
    VAR_10, VAR_1);






  VAR_8->stream_res.tg->funcs->program_timing(VAR_8->stream_res.tg,
    &VAR_4->timing,
    0,
    0,
    0,
    0,
    VAR_8->stream->signal,
    0);

  VAR_8->stream_res.tg->funcs->enable_advanced_request(
    VAR_8->stream_res.tg,
    1,
    &VAR_4->timing);

  VAR_8->plane_res.mi->funcs->allocate_mem_input(VAR_8->plane_res.mi,
    VAR_4->timing.h_total,
    VAR_4->timing.v_total,
    VAR_4->timing.pix_clk_100hz / 10,
    VAR_2->stream_count);

  FUNC_0(VAR_5,
    VAR_0, &VAR_9);
  VAR_8->stream_res.tg->funcs->set_blank_color(
    VAR_8->stream_res.tg,
    &VAR_9);
 }

 return VAR_8;
}
