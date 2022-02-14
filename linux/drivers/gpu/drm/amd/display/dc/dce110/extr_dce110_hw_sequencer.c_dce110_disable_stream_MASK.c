
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_7__* stream_enc; } ;
struct pipe_ctx {TYPE_5__ stream_res; struct dc_stream_state* stream; } ;
struct dc_stream_state {int signal; TYPE_1__* ctx; struct dc_link* link; } ;
struct dc_link {TYPE_6__* link_enc; } ;
struct TYPE_12__ {int (* disable_audio_stream ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_3__ hwss; } ;
struct TYPE_16__ {int id; TYPE_2__* funcs; } ;
struct TYPE_15__ {TYPE_4__* funcs; } ;
struct TYPE_13__ {int (* connect_dig_be_to_fe ) (TYPE_6__*,int ,int) ;} ;
struct TYPE_11__ {int (* stop_dp_info_packets ) (TYPE_7__*) ;int (* hdmi_reset_stream_attribute ) (TYPE_7__*) ;int (* stop_hdmi_info_packets ) (TYPE_7__*) ;} ;
struct TYPE_10__ {struct dc* dc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (struct pipe_ctx*) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;

void FUNC_7(struct pipe_ctx *VAR_0)
{
 struct dc_stream_state *VAR_1 = VAR_0->stream;
 struct dc_link *VAR_2 = VAR_1->link;
 struct dc *VAR_3 = VAR_0->stream->ctx->dc;

 if (FUNC_1(VAR_0->stream->signal)) {
  VAR_0->stream_res.stream_enc->funcs->stop_hdmi_info_packets(
   VAR_0->stream_res.stream_enc);
  VAR_0->stream_res.stream_enc->funcs->hdmi_reset_stream_attribute(
   VAR_0->stream_res.stream_enc);
 }

 if (FUNC_0(VAR_0->stream->signal))
  VAR_0->stream_res.stream_enc->funcs->stop_dp_info_packets(
   VAR_0->stream_res.stream_enc);

 VAR_3->hwss.disable_audio_stream(VAR_0);

 VAR_2->link_enc->funcs->connect_dig_be_to_fe(
   VAR_2->link_enc,
   VAR_0->stream_res.stream_enc->id,
   0);

}
