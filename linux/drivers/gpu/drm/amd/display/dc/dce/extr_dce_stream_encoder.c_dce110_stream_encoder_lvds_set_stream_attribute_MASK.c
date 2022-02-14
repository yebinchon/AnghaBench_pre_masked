
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct TYPE_5__ {TYPE_3__* bp; int id; } ;
struct dce110_stream_encoder {TYPE_2__ base; } ;
struct dc_crtc_timing {int pix_clk_100hz; scalar_t__ pixel_encoding; } ;
struct bp_encoder_control {int enable_dp_audio; int pixel_clock; int lanes_number; int signal; int engine_id; int action; int member_0; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {scalar_t__ (* encoder_control ) (TYPE_3__*,struct bp_encoder_control*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct dce110_stream_encoder* FUNC_1 (struct stream_encoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*,struct bp_encoder_control*) ;

__attribute__((used)) static void FUNC_3(
 struct stream_encoder *VAR_5,
 struct dc_crtc_timing *VAR_6)
{
 struct dce110_stream_encoder *VAR_7 = FUNC_1(VAR_5);
 struct bp_encoder_control VAR_8 = {0};

 VAR_8.action = VAR_1;
 VAR_8.engine_id = VAR_7->base.id;
 VAR_8.signal = VAR_4;
 VAR_8.enable_dp_audio = 0;
 VAR_8.pixel_clock = VAR_6->pix_clk_100hz / 10;
 VAR_8.lanes_number = VAR_2;

 if (VAR_7->base.bp->funcs->encoder_control(
   VAR_7->base.bp, &VAR_8) != VAR_0)
  return;

 FUNC_0(VAR_6->pixel_encoding == VAR_3);
}
