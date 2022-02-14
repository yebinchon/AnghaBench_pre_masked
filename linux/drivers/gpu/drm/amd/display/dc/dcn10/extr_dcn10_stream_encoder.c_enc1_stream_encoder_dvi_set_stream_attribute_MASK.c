
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct TYPE_5__ {TYPE_3__* bp; int id; } ;
struct dcn10_stream_encoder {TYPE_2__ base; } ;
struct dc_crtc_timing {int pix_clk_100hz; scalar_t__ pixel_encoding; scalar_t__ display_color_depth; } ;
struct bp_encoder_control {int enable_dp_audio; int pixel_clock; int lanes_number; int signal; int engine_id; int action; int member_0; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {scalar_t__ (* encoder_control ) (TYPE_3__*,struct bp_encoder_control*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dcn10_stream_encoder* FUNC_1 (struct stream_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dcn10_stream_encoder*,struct dc_crtc_timing*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct bp_encoder_control*) ;

void FUNC_4(
 struct stream_encoder *VAR_8,
 struct dc_crtc_timing *VAR_9,
 bool VAR_10)
{
 struct dcn10_stream_encoder *VAR_11 = FUNC_1(VAR_8);
 struct bp_encoder_control VAR_12 = {0};

 VAR_12.action = VAR_2;
 VAR_12.engine_id = VAR_11->base.id;
 VAR_12.signal = VAR_10 ?
   VAR_6 : VAR_7;
 VAR_12.enable_dp_audio = 0;
 VAR_12.pixel_clock = VAR_9->pix_clk_100hz / 10;
 VAR_12.lanes_number = (VAR_10) ? VAR_3 : VAR_4;

 if (VAR_11->base.bp->funcs->encoder_control(
   VAR_11->base.bp, &VAR_12) != VAR_0)
  return;

 FUNC_0(VAR_9->pixel_encoding == VAR_5);
 FUNC_0(VAR_9->display_color_depth == VAR_1);
 FUNC_2(VAR_11, VAR_9);
}
