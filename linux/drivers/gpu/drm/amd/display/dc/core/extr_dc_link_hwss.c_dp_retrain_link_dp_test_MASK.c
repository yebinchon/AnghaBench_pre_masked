
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_19__ {TYPE_12__* stream_enc; TYPE_13__* audio; } ;
struct pipe_ctx {TYPE_11__ stream_res; TYPE_6__* clock_source; TYPE_3__* stream; int prev_odm_pipe; int top_pipe; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {TYPE_8__* dc; struct dc_link_settings cur_link_settings; TYPE_14__* link_enc; } ;
struct TYPE_31__ {int (* az_enable ) (TYPE_13__*) ;int (* az_disable ) (TYPE_13__*) ;} ;
struct TYPE_29__ {int (* unblank_stream ) (struct pipe_ctx*,struct dc_link_settings*) ;int (* enable_stream ) (struct pipe_ctx*) ;int (* disable_stream ) (struct pipe_ctx*) ;} ;
struct TYPE_26__ {int az_endpoint_mute_only; } ;
struct TYPE_30__ {TYPE_7__ hwss; TYPE_4__ debug; TYPE_2__* current_state; } ;
struct TYPE_28__ {int id; } ;
struct TYPE_27__ {int (* enable_dp_output ) (TYPE_14__*,struct dc_link_settings*,int ) ;int (* disable_output ) (TYPE_14__*,int ) ;} ;
struct TYPE_25__ {int * link; } ;
struct TYPE_23__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_24__ {TYPE_1__ res_ctx; } ;
struct TYPE_22__ {TYPE_5__* funcs; } ;
struct TYPE_21__ {TYPE_9__* funcs; } ;
struct TYPE_20__ {TYPE_10__* funcs; } ;
struct TYPE_18__ {int (* audio_mute_control ) (TYPE_12__*,int) ;int (* dp_blank ) (TYPE_12__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_link*,int) ;
 int FUNC_1 (struct dc_link*,int ,int *,int ) ;
 int FUNC_2 (struct dc_link_settings*,int ,int) ;
 int FUNC_3 (struct dc_link*,struct dc_link_settings*,int,int ) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (struct pipe_ctx*) ;
 int FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (TYPE_14__*,int ) ;
 int FUNC_8 (TYPE_14__*,struct dc_link_settings*,int ) ;
 int FUNC_9 (struct pipe_ctx*) ;
 int FUNC_10 (struct pipe_ctx*,struct dc_link_settings*) ;
 int FUNC_11 (TYPE_13__*) ;
 int FUNC_12 (TYPE_12__*,int) ;
 int FUNC_13 (int) ;

void FUNC_14(struct dc_link *VAR_4,
   struct dc_link_settings *VAR_5,
   bool VAR_6)
{
 struct pipe_ctx *VAR_7 =
   &VAR_4->dc->current_state->res_ctx.pipe_ctx[0];
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_7[VAR_8].stream != ((void*)0) &&
   !VAR_7[VAR_8].top_pipe && !VAR_7[VAR_8].prev_odm_pipe &&
   VAR_7[VAR_8].stream->link != ((void*)0) &&
   VAR_7[VAR_8].stream_res.stream_enc != ((void*)0)) {
   FUNC_13(100);

   VAR_7[VAR_8].stream_res.stream_enc->funcs->dp_blank(
     VAR_7[VAR_8].stream_res.stream_enc);


   FUNC_1(VAR_4,
     VAR_0, ((void*)0), 0);

   FUNC_0(VAR_4, 0);

   VAR_4->dc->hwss.disable_stream(&VAR_7[VAR_8]);
   if ((&VAR_7[VAR_8])->stream_res.audio && !VAR_4->dc->debug.az_endpoint_mute_only)
    (&VAR_7[VAR_8])->stream_res.audio->funcs->az_disable((&VAR_7[VAR_8])->stream_res.audio);

   VAR_4->link_enc->funcs->disable_output(
     VAR_4->link_enc,
     VAR_3);


   FUNC_2(&VAR_4->cur_link_settings, 0,
    sizeof(VAR_4->cur_link_settings));

   VAR_4->link_enc->funcs->enable_dp_output(
      VAR_4->link_enc,
      VAR_5,
      VAR_7[VAR_8].clock_source->id);
   VAR_4->cur_link_settings = *VAR_5;

   FUNC_0(VAR_4, 1);

   FUNC_3(
     VAR_4,
     VAR_5,
     VAR_6,
     VAR_1);


   VAR_4->dc->hwss.enable_stream(&VAR_7[VAR_8]);

   VAR_4->dc->hwss.unblank_stream(&VAR_7[VAR_8],
     VAR_5);

   if (VAR_7[VAR_8].stream_res.audio) {


    VAR_7[VAR_8].stream_res.audio->funcs->az_enable(
      VAR_7[VAR_8].stream_res.audio);




    VAR_7[VAR_8].stream_res.stream_enc->funcs->
    audio_mute_control(
     VAR_7[VAR_8].stream_res.stream_enc, 0);
   }
  }
 }
}
