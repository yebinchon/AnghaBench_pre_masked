
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct dce110_stream_encoder {TYPE_1__* se_mask; } ;
struct TYPE_4__ {int VSYNC_POSITIVE_POLARITY; int HSYNC_POSITIVE_POLARITY; int Y_ONLY; scalar_t__ INTERLACE; } ;
struct dc_crtc_timing {int v_total; int v_border_top; int v_addressable; int v_border_bottom; int v_front_porch; int v_sync_width; int pixel_encoding; int display_color_depth; int h_total; int h_border_left; int h_addressable; int h_border_right; int h_front_porch; int h_sync_width; TYPE_2__ flags; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_3__ {scalar_t__ DP_YCBCR_RANGE; scalar_t__ DP_DYN_RANGE; int DP_VID_N_MUL; int DP_VID_M_DOUBLE_VALUE_EN; } ;
 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;



 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int ,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(
 struct stream_encoder *VAR_34,
 struct dc_crtc_timing *VAR_35,
 enum dc_color_space VAR_36,
 uint32_t VAR_37)
{
 struct dce110_stream_encoder *VAR_38 = FUNC_0(VAR_34);
 struct dc_crtc_timing VAR_39 = *VAR_35;
 if (VAR_39.flags.INTERLACE) {

  VAR_39.v_total /= 2;
  VAR_39.v_border_top /= 2;
  VAR_39.v_addressable /= 2;
  VAR_39.v_border_bottom /= 2;
  VAR_39.v_front_porch /= 2;
  VAR_39.v_sync_width /= 2;
 }

 switch (VAR_39.pixel_encoding) {
 case 129:
  FUNC_6(VAR_29, VAR_23,
    VAR_26);
  break;
 case 128:
  FUNC_6(VAR_29, VAR_23,
    VAR_27);

  if (VAR_39.flags.Y_ONLY)
   if (VAR_39.display_color_depth != 153)



    FUNC_6(VAR_29, VAR_23,
      VAR_28);




  break;
 case 130:
  FUNC_6(VAR_29, VAR_23,
    VAR_25);
  if (VAR_38->se_mask->DP_VID_M_DOUBLE_VALUE_EN)
   FUNC_6(VAR_32, VAR_30, 1);





  break;
 default:
  FUNC_6(VAR_29, VAR_23,
    VAR_24);
  break;
 }
 switch (VAR_39.display_color_depth) {
 case 153:
  FUNC_6(VAR_29, VAR_0,
    0);
  break;
 case 152:
  FUNC_6(VAR_29, VAR_0,
    VAR_4);
  break;
 case 155:
  FUNC_6(VAR_29, VAR_0,
    VAR_1);

  break;
 case 154:
  FUNC_6(VAR_29, VAR_0,
    VAR_2);
  break;
 default:
  FUNC_6(VAR_29, VAR_0,
    VAR_3);
  break;
 }
}
