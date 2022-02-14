
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {TYPE_2__* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; struct dc_stream_state const* stream; } ;
struct TYPE_18__ {int link_spread; int link_rate; int lane_count; } ;
struct dm_pp_single_disp_config {int v_refresh; int sym_clock; TYPE_7__ link_settings; int transmitter; int ddi_channel_mapping; int src_width; int src_height; int pipe_idx; int signal; } ;
struct dm_pp_display_configuration {int display_count; struct dm_pp_single_disp_config* disp_configs; } ;
struct TYPE_11__ {int pix_clk_100hz; int h_total; int v_total; } ;
struct TYPE_15__ {int width; int height; } ;
struct dc_stream_state {TYPE_10__ timing; int phy_pix_clk; TYPE_9__* link; TYPE_4__ src; int signal; scalar_t__ dpms_off; } ;
struct TYPE_12__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; TYPE_1__ res_ctx; struct dc_stream_state** streams; } ;
struct TYPE_19__ {int link_spread; int link_rate; int lane_count; } ;
struct TYPE_16__ {int raw; } ;
struct TYPE_20__ {TYPE_8__ cur_link_settings; TYPE_6__* link_enc; TYPE_5__ ddi_channel_mapping; } ;
struct TYPE_17__ {int transmitter; } ;
struct TYPE_13__ {int inst; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

void FUNC_1(
 const struct dc_state *VAR_1,
 struct dm_pp_display_configuration *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->stream_count; VAR_3++) {
  int VAR_5;

  const struct dc_stream_state *VAR_6 = VAR_1->streams[VAR_3];
  struct dm_pp_single_disp_config *VAR_7 =
   &VAR_2->disp_configs[VAR_4];
  const struct pipe_ctx *VAR_8 = ((void*)0);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_6 == VAR_1->res_ctx.pipe_ctx[VAR_5].stream) {
    VAR_8 = &VAR_1->res_ctx.pipe_ctx[VAR_5];
    break;
   }

  FUNC_0(VAR_8 != ((void*)0));


  if (VAR_6->dpms_off)
   continue;

  VAR_4++;
  VAR_7->signal = VAR_8->stream->signal;
  VAR_7->pipe_idx = VAR_8->stream_res.tg->inst;
  VAR_7->src_height = VAR_6->src.height;
  VAR_7->src_width = VAR_6->src.width;
  VAR_7->ddi_channel_mapping =
   VAR_6->link->ddi_channel_mapping.raw;
  VAR_7->transmitter =
   VAR_6->link->link_enc->transmitter;
  VAR_7->link_settings.lane_count =
   VAR_6->link->cur_link_settings.lane_count;
  VAR_7->link_settings.link_rate =
   VAR_6->link->cur_link_settings.link_rate;
  VAR_7->link_settings.link_spread =
   VAR_6->link->cur_link_settings.link_spread;
  VAR_7->sym_clock = VAR_6->phy_pix_clk;

  VAR_7->v_refresh = VAR_6->timing.pix_clk_100hz * 100;
  VAR_7->v_refresh /= VAR_6->timing.h_total;
  VAR_7->v_refresh = (VAR_7->v_refresh + VAR_6->timing.v_total / 2)
       / VAR_6->timing.v_total;
 }

 VAR_2->display_count = VAR_4;
}
