
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* stream_enc; } ;
struct pipe_ctx {struct dc_stream_state* stream; TYPE_4__ stream_res; } ;
struct ext_hdmi_settings {int member_0; } ;
struct TYPE_13__ {scalar_t__ DSC; } ;
struct TYPE_14__ {TYPE_6__ flags; } ;
struct dc_stream_state {scalar_t__ signal; TYPE_7__ timing; int link; TYPE_2__* sink; TYPE_1__* ctx; } ;
struct dc_link {unsigned short chip_caps; int ddc; } ;
struct TYPE_12__ {int (* disable_stream ) (struct pipe_ctx*) ;int (* blank_stream ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_5__ hwss; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {struct dc_link* link; } ;
struct TYPE_8__ {struct dc* dc; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pipe_ctx*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct pipe_ctx*,int) ;
 scalar_t__ FUNC_6 (struct pipe_ctx*,int,struct ext_hdmi_settings*) ;
 int FUNC_7 (struct pipe_ctx*) ;
 int FUNC_8 (struct pipe_ctx*) ;
 int FUNC_9 (struct pipe_ctx*,int,int) ;
 int FUNC_10 (struct pipe_ctx*,int) ;
 int FUNC_11 (struct pipe_ctx*,int,int,struct ext_hdmi_settings*) ;

void FUNC_12(struct pipe_ctx *VAR_4)
{
 struct dc *VAR_5 = VAR_4->stream->ctx->dc;
 struct dc_stream_state *VAR_6 = VAR_4->stream;
 struct dc_link *VAR_7 = VAR_6->sink->link;

 VAR_5->hwss.blank_stream(VAR_4);

 if (VAR_4->stream->signal == VAR_3)
  FUNC_3(VAR_4);

 if (FUNC_2(VAR_4->stream->signal)) {
  struct ext_hdmi_settings VAR_8 = {0};
  enum engine_id VAR_9 = VAR_4->stream_res.stream_enc->id;

  unsigned short VAR_10 = VAR_7->chip_caps &
    VAR_0;

  FUNC_0(
   VAR_7->ddc,
   165000,
   0);
  if (VAR_10 == VAR_2) {

   if (FUNC_6(VAR_4, VAR_9, &VAR_8))
    FUNC_11(VAR_4,
      0, 0, &VAR_8);
   else
    FUNC_9(VAR_4,
      0, 0);
  } else if (VAR_10 == VAR_1) {

   FUNC_10(VAR_4, 0);
  }
 }
 VAR_5->hwss.disable_stream(VAR_4);

 FUNC_4(VAR_4->stream->link, VAR_4->stream->signal);






}
