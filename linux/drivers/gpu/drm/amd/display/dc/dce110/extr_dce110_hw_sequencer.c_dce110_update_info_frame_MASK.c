
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int encoder_info_frame; TYPE_3__* stream_enc; } ;
struct pipe_ctx {TYPE_2__ stream_res; TYPE_5__* stream; } ;
struct TYPE_9__ {int signal; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int (* update_dp_info_packets ) (TYPE_3__*,int *) ;int (* update_hdmi_info_packets ) (TYPE_3__*,int *) ;} ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

void FUNC_5(struct pipe_ctx *VAR_0)
{
 bool VAR_1;
 bool VAR_2;

 FUNC_0(VAR_0->stream);

 if (VAR_0->stream_res.stream_enc == ((void*)0))
  return;

 VAR_1 = FUNC_2(VAR_0->stream->signal);
 VAR_2 = FUNC_1(VAR_0->stream->signal);

 if (!VAR_1 && !VAR_2)
  return;

 if (VAR_1)
  VAR_0->stream_res.stream_enc->funcs->update_hdmi_info_packets(
   VAR_0->stream_res.stream_enc,
   &VAR_0->stream_res.encoder_info_frame);
 else
  VAR_0->stream_res.stream_enc->funcs->update_dp_info_packets(
   VAR_0->stream_res.stream_enc,
   &VAR_0->stream_res.encoder_info_frame);
}
