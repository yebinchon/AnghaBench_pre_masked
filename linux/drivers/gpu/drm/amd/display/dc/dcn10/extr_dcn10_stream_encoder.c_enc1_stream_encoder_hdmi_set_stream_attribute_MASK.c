
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct TYPE_6__ {TYPE_4__* bp; int id; } ;
struct dcn10_stream_encoder {TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ LTE_340MCSC_SCRAMBLE; } ;
struct dc_crtc_timing {int display_color_depth; TYPE_3__ flags; int pixel_encoding; } ;
struct bp_encoder_control {int enable_dp_audio; int pixel_clock; int lanes_number; int signal; int engine_id; int action; int member_0; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {scalar_t__ (* encoder_control ) (TYPE_4__*,struct bp_encoder_control*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int,int ,int ,int ,int ,int ,int,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (struct dcn10_stream_encoder*,struct dc_crtc_timing*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,struct bp_encoder_control*) ;

void FUNC_7(
 struct stream_encoder *VAR_27,
 struct dc_crtc_timing *VAR_28,
 int VAR_29,
 bool VAR_30)
{
 struct dcn10_stream_encoder *VAR_31 = FUNC_0(VAR_27);
 struct bp_encoder_control VAR_32 = {0};

 VAR_32.action = VAR_3;
 VAR_32.engine_id = VAR_31->base.id;
 VAR_32.signal = VAR_25;
 VAR_32.enable_dp_audio = VAR_30;
 VAR_32.pixel_clock = VAR_29;
 VAR_32.lanes_number = VAR_23;

 if (VAR_31->base.bp->funcs->encoder_control(
   VAR_31->base.bp, &VAR_32) != VAR_2)
  return;

 FUNC_5(VAR_31, VAR_28);


 FUNC_4(VAR_8,
  VAR_21, 1,
  VAR_18, 1,
  VAR_11, 0,
  VAR_9, 0,
  VAR_19, 1,
  VAR_6, 0);


 switch (VAR_28->display_color_depth) {
 case 128:
  FUNC_1(VAR_8, VAR_10, 0);
  break;
 case 131:
  if (VAR_28->pixel_encoding == VAR_24) {
   FUNC_2(VAR_8,
     VAR_10, 1,
     VAR_11, 0);
  } else {
   FUNC_2(VAR_8,
     VAR_10, 1,
     VAR_11, 1);
   }
  break;
 case 130:
  if (VAR_28->pixel_encoding == VAR_24) {
   FUNC_2(VAR_8,
     VAR_10, 2,
     VAR_11, 0);
  } else {
   FUNC_2(VAR_8,
     VAR_10, 2,
     VAR_11, 1);
   }
  break;
 case 129:
  FUNC_2(VAR_8,
    VAR_10, 3,
    VAR_11, 1);
  break;
 default:
  break;
 }

 if (VAR_29 >= VAR_7) {




  FUNC_2(VAR_8,
   VAR_9, 1,
   VAR_6, 1);
 } else if (VAR_28->flags.LTE_340MCSC_SCRAMBLE) {
  FUNC_2(VAR_8,
   VAR_9, 1,
   VAR_6, 0);
 }


 FUNC_3(VAR_22,
  VAR_14, 1,
  VAR_15, 1,
  VAR_20, 1);


 FUNC_1(VAR_16, VAR_5, 1);

 FUNC_1(VAR_1, VAR_0, 1);

 FUNC_1(VAR_17, VAR_4,
    VAR_26 + 2);

 FUNC_1(VAR_12, VAR_13, 0);
}
