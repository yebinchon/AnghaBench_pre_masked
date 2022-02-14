
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


struct TYPE_17__ {int requested_pix_clk_100hz; } ;
struct TYPE_14__ {TYPE_13__ pix_clk_params; } ;
struct pipe_ctx {int pll_settings; TYPE_10__ stream_res; struct clock_source* clock_source; TYPE_8__* stream; } ;
struct link_encoder {TYPE_11__* funcs; } ;
struct dmcu {TYPE_12__* funcs; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {struct dc_link_settings cur_link_settings; TYPE_6__* dc; TYPE_1__* ctx; struct link_encoder* link_enc; } ;
struct dc {TYPE_2__* res_pool; } ;
struct clock_source {scalar_t__ id; TYPE_9__* funcs; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;
struct TYPE_26__ {int (* program_pix_clk ) (struct clock_source*,TYPE_13__*,int *) ;} ;
struct TYPE_24__ {int pix_clk_100hz; } ;
struct TYPE_25__ {TYPE_7__ timing; struct dc_link* link; } ;
struct TYPE_23__ {TYPE_5__* res_pool; TYPE_4__* current_state; } ;
struct TYPE_22__ {struct clock_source* dp_clock_source; } ;
struct TYPE_20__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_21__ {TYPE_3__ res_ctx; } ;
struct TYPE_19__ {struct dmcu* dmcu; } ;
struct TYPE_18__ {struct dc* dc; } ;
struct TYPE_16__ {int (* unlock_phy ) (struct dmcu*) ;int (* lock_phy ) (struct dmcu*) ;} ;
struct TYPE_15__ {int (* enable_dp_mst_output ) (struct link_encoder*,struct dc_link_settings const*,int) ;int (* enable_dp_output ) (struct link_encoder*,struct dc_link_settings const*,int) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dc_link*,int) ;
 int FUNC_2 (struct clock_source*,TYPE_13__*,int *) ;
 int FUNC_3 (struct dmcu*) ;
 int FUNC_4 (struct link_encoder*,struct dc_link_settings const*,int) ;
 int FUNC_5 (struct link_encoder*,struct dc_link_settings const*,int) ;
 int FUNC_6 (struct dmcu*) ;

void FUNC_7(
 struct dc_link *VAR_2,
 enum signal_type VAR_3,
 enum clock_source_id VAR_4,
 const struct dc_link_settings *VAR_5)
{
 struct link_encoder *VAR_6 = VAR_2->link_enc;
 struct dc *VAR_7 = VAR_2->ctx->dc;
 struct dmcu *VAR_8 = VAR_7->res_pool->dmcu;

 struct pipe_ctx *VAR_9 =
   VAR_2->dc->current_state->res_ctx.pipe_ctx;
 struct clock_source *VAR_10 =
   VAR_2->dc->res_pool->dp_clock_source;
 unsigned int VAR_11;




 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (VAR_9[VAR_11].stream != ((void*)0) &&
   VAR_9[VAR_11].stream->link == VAR_2) {
   if (VAR_9[VAR_11].clock_source != ((void*)0) &&
     VAR_9[VAR_11].clock_source->id != VAR_0) {
    VAR_9[VAR_11].clock_source = VAR_10;
    VAR_9[VAR_11].stream_res.pix_clk_params.requested_pix_clk_100hz =
      VAR_9[VAR_11].stream->timing.pix_clk_100hz;
    VAR_9[VAR_11].clock_source->funcs->program_pix_clk(
       VAR_9[VAR_11].clock_source,
       &VAR_9[VAR_11].stream_res.pix_clk_params,
       &VAR_9[VAR_11].pll_settings);
   }
  }
 }

 if (VAR_8 != ((void*)0) && VAR_8->funcs->lock_phy)
  VAR_8->funcs->lock_phy(VAR_8);

 if (FUNC_0(VAR_3)) {
  VAR_6->funcs->enable_dp_output(
      VAR_6,
      VAR_5,
      VAR_4);
 } else {
  VAR_6->funcs->enable_dp_mst_output(
      VAR_6,
      VAR_5,
      VAR_4);
 }

 if (VAR_8 != ((void*)0) && VAR_8->funcs->unlock_phy)
  VAR_8->funcs->unlock_phy(VAR_8);

 VAR_2->cur_link_settings = *VAR_5;

 FUNC_1(VAR_2, 1);
}
