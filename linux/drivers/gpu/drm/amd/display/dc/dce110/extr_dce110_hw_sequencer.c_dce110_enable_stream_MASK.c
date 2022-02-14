
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


typedef int uint32_t ;
struct timing_generator {TYPE_5__* funcs; } ;
struct TYPE_19__ {TYPE_9__* stream_enc; int * audio; struct timing_generator* tg; } ;
struct pipe_ctx {TYPE_8__ stream_res; TYPE_6__* stream; } ;
struct TYPE_12__ {int lane_count; } ;
struct dc_link {TYPE_4__* dc; TYPE_10__* link_enc; TYPE_1__ cur_link_settings; } ;
struct dc_crtc_timing {int h_addressable; int h_border_left; int h_border_right; } ;
typedef enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;
struct TYPE_20__ {TYPE_7__* funcs; int id; } ;
struct TYPE_18__ {int (* dp_audio_enable ) (TYPE_9__*) ;} ;
struct TYPE_17__ {int signal; struct dc_link* link; struct dc_crtc_timing timing; } ;
struct TYPE_16__ {int (* set_early_control ) (struct timing_generator*,int) ;} ;
struct TYPE_14__ {int (* update_info_frame ) (struct pipe_ctx*) ;} ;
struct TYPE_15__ {TYPE_3__ hwss; } ;
struct TYPE_13__ {int (* connect_dig_be_to_fe ) (TYPE_10__*,int ,int) ;} ;
struct TYPE_11__ {TYPE_2__* funcs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_10__*,int ,int) ;
 int FUNC_2 (struct pipe_ctx*) ;
 int FUNC_3 (struct timing_generator*,int) ;
 int FUNC_4 (TYPE_9__*) ;

void FUNC_5(struct pipe_ctx *VAR_0)
{
 enum dc_lane_count VAR_1 =
  VAR_0->stream->link->cur_link_settings.lane_count;

 struct dc_crtc_timing *VAR_2 = &VAR_0->stream->timing;
 struct dc_link *VAR_3 = VAR_0->stream->link;


 uint32_t VAR_4;
 uint32_t VAR_5 = 0;
 struct timing_generator *VAR_6 = VAR_0->stream_res.tg;





 VAR_3->link_enc->funcs->connect_dig_be_to_fe(VAR_3->link_enc,
          VAR_0->stream_res.stream_enc->id, 1);

 VAR_3->dc->hwss.update_info_frame(VAR_0);


 VAR_4 =
   VAR_2->h_addressable
    + VAR_2->h_border_left
    + VAR_2->h_border_right;

 if (VAR_1 != 0)
  VAR_5 = VAR_4 % VAR_1;

 if (VAR_5 == 0)
  VAR_5 = VAR_1;

 VAR_6->funcs->set_early_control(VAR_6, VAR_5);


 if (VAR_0->stream_res.audio != ((void*)0)) {
  if (FUNC_0(VAR_0->stream->signal))
   VAR_0->stream_res.stream_enc->funcs->dp_audio_enable(VAR_0->stream_res.stream_enc);
 }




}
