
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct TYPE_8__ {TYPE_6__* bp; int id; } ;
struct dce110_stream_encoder {TYPE_4__* se_mask; TYPE_3__* regs; TYPE_2__ base; } ;
struct TYPE_11__ {scalar_t__ LTE_340MCSC_SCRAMBLE; } ;
struct dc_crtc_timing {int display_color_depth; TYPE_5__ flags; int pixel_encoding; } ;
struct bp_encoder_control {int enable_dp_audio; int pixel_clock; int lanes_number; int signal; int engine_id; int action; int member_0; } ;
struct TYPE_12__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {scalar_t__ HDMI_DATA_SCRAMBLE_EN; } ;
struct TYPE_9__ {scalar_t__ DIG_FE_CNTL; } ;
struct TYPE_7__ {scalar_t__ (* encoder_control ) (TYPE_6__*,struct bp_encoder_control*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (struct dce110_stream_encoder*,struct dc_crtc_timing*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,struct bp_encoder_control*) ;

__attribute__((used)) static void FUNC_7(
 struct stream_encoder *VAR_26,
 struct dc_crtc_timing *VAR_27,
 int VAR_28,
 bool VAR_29)
{
 struct dce110_stream_encoder *VAR_30 = FUNC_0(VAR_26);
 struct bp_encoder_control VAR_31 = {0};

 VAR_31.action = VAR_3;
 VAR_31.engine_id = VAR_30->base.id;
 VAR_31.signal = VAR_24;
 VAR_31.enable_dp_audio = VAR_29;
 VAR_31.pixel_clock = VAR_28;
 VAR_31.lanes_number = VAR_22;

 if (VAR_30->base.bp->funcs->encoder_control(
   VAR_30->base.bp, &VAR_31) != VAR_2)
  return;

 FUNC_5(VAR_30, VAR_27);


 if (!VAR_30->se_mask->HDMI_DATA_SCRAMBLE_EN) {
  FUNC_3(VAR_8,
   VAR_20, 1,
   VAR_18, 1,
   VAR_11, 0);
 } else if (VAR_30->regs->DIG_FE_CNTL) {
  FUNC_4(VAR_8,
   VAR_20, 1,
   VAR_18, 1,
   VAR_11, 0,
   VAR_9, 0,
   VAR_6, 0);
 }

 switch (VAR_27->display_color_depth) {
 case 128:
  FUNC_1(VAR_8, VAR_10, 0);
  break;
 case 131:
  if (VAR_27->pixel_encoding == VAR_23) {
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
  if (VAR_27->pixel_encoding == VAR_23) {
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

 if (VAR_30->se_mask->HDMI_DATA_SCRAMBLE_EN) {
  if (VAR_28 >= VAR_7) {




   FUNC_2(VAR_8,
    VAR_9, 1,
    VAR_6, 1);
  } else if (VAR_27->flags.LTE_340MCSC_SCRAMBLE) {
   FUNC_2(VAR_8,
    VAR_9, 1,
    VAR_6, 0);
  }
 }

 FUNC_3(VAR_21,
  VAR_14, 1,
  VAR_15, 1,
  VAR_19, 1);


 FUNC_1(VAR_16, VAR_5, 1);

 FUNC_1(VAR_1, VAR_0, 1);

 FUNC_1(VAR_17, VAR_4,
    VAR_25 + 2);

 FUNC_1(VAR_12, VAR_13, 0);

}
