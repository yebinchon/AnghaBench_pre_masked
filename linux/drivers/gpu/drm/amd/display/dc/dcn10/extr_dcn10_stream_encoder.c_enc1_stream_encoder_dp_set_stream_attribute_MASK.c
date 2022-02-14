
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct dcn10_stream_encoder {int dummy; } ;
struct TYPE_2__ {int VSYNC_POSITIVE_POLARITY; int HSYNC_POSITIVE_POLARITY; int Y_ONLY; scalar_t__ INTERLACE; } ;
struct dc_crtc_timing {int v_total; int v_border_top; int v_addressable; int v_border_bottom; int v_front_porch; int v_sync_width; int pixel_encoding; int display_color_depth; int h_total; int h_border_left; int h_addressable; int h_border_right; int h_front_porch; int h_sync_width; TYPE_1__ flags; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
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



 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(
 struct stream_encoder *VAR_30,
 struct dc_crtc_timing *VAR_31,
 enum dc_color_space VAR_32,
 uint32_t VAR_33)
{
 uint32_t VAR_34;
 uint32_t VAR_35;
 uint32_t VAR_36 = 0;
 uint32_t VAR_37 = 0;
 uint32_t VAR_38;
 uint32_t VAR_39;
 uint8_t VAR_40 = 0;
 uint8_t VAR_41;
 uint8_t VAR_42 = 0;
 uint8_t VAR_43 = 1;
 uint8_t VAR_44 = 0;
 uint8_t VAR_45 = 0;

 struct dcn10_stream_encoder *VAR_46 = FUNC_0(VAR_30);
 struct dc_crtc_timing VAR_47 = *VAR_31;

 if (VAR_47.flags.INTERLACE) {

  VAR_47.v_total /= 2;
  VAR_47.v_border_top /= 2;
  VAR_47.v_addressable /= 2;
  VAR_47.v_border_bottom /= 2;
  VAR_47.v_front_porch /= 2;
  VAR_47.v_sync_width /= 2;
 }



 switch (VAR_47.pixel_encoding) {
 case 129:
  VAR_44 = VAR_26;
  break;
 case 128:
  VAR_44 = VAR_27;

  if (VAR_47.flags.Y_ONLY)
   if (VAR_47.display_color_depth != 153)




    VAR_44 = VAR_28;






  break;
 case 130:
  VAR_44 = VAR_25;
  break;
 default:
  VAR_44 = VAR_24;
  break;
 }

 VAR_37 = FUNC_1(VAR_12);





 if ((VAR_47.pixel_encoding == 130) ||
   (VAR_32 == 149) ||
   (VAR_32 == 151) ||
   (VAR_32 == 150))
  VAR_37 = VAR_37 | 0x40;
 else
  VAR_37 = VAR_37 & ~0x40;


 switch (VAR_47.display_color_depth) {
 case 153:
  VAR_45 = VAR_4;
  break;
 case 152:
  VAR_45 = VAR_5;
  break;
 case 156:
  VAR_45 = VAR_1;
  break;
 case 155:
  VAR_45 = VAR_2;
  break;
 case 154:
  VAR_45 = VAR_3;
  break;
 default:
  VAR_45 = VAR_4;
  break;
 }


 FUNC_5(VAR_29,
   VAR_23, VAR_44,
   VAR_0, VAR_45);



 switch (VAR_47.display_color_depth) {
 case 153:
  VAR_41 = 0;
  break;
 case 152:
  VAR_41 = 1;
  break;
 case 156:
  VAR_41 = 2;
  break;
 case 155:
  VAR_41 = 3;
  break;
 default:
  VAR_41 = 0;
  break;
 }

 VAR_36 = VAR_36 | VAR_40;
 VAR_36 = VAR_41 << 5;

 switch (VAR_32) {
 case 141:
  VAR_37 = VAR_37 & ~0x80;
  VAR_42 = 0;
  break;
 case 140:
  VAR_36 = VAR_36 | 0x8;
  VAR_37 = VAR_37 & ~0x80;
  VAR_42 = 1;
  break;
 case 135:
 case 134:
  VAR_36 = VAR_36 | 0x8;
  VAR_37 = VAR_37 & ~0x80;
  VAR_43 = 0;
  if (VAR_47.pixel_encoding == 129)
   VAR_36 = VAR_36 | 0x2;
  else if (VAR_47.pixel_encoding == 128)
   VAR_36 = VAR_36 | 0x4;
  break;
 case 133:
 case 131:
  VAR_36 = VAR_36 | 0x18;
  VAR_37 = VAR_37 & ~0x80;
  VAR_43 = 1;
  if (VAR_47.pixel_encoding == 129)
   VAR_36 = VAR_36 | 0x2;
  else if (VAR_47.pixel_encoding == 128)
   VAR_36 = VAR_36 | 0x4;
  break;
 case 150:
  VAR_42 = 1;
  break;
 case 151:
 case 149:
 case 138:
 case 142:
 case 148:
 case 145:
 case 136:
 case 137:
 case 144:
 case 143:
 case 147:
 case 146:
 case 139:
 case 132:

  break;
 }

 FUNC_2(VAR_6, 0, VAR_13, VAR_36);
 FUNC_6(VAR_12, VAR_37);




 FUNC_3(VAR_14, 0,
   VAR_10, VAR_47.h_total,
   VAR_22, VAR_47.v_total);





 VAR_38 = VAR_47.h_total - VAR_47.h_border_left -
   VAR_47.h_addressable - VAR_47.h_border_right;

 VAR_39 = VAR_38 - VAR_47.h_front_porch -
   VAR_47.h_sync_width;


 VAR_34 = VAR_47.h_sync_width + VAR_39;


 VAR_35 = VAR_47.v_total - VAR_47.v_border_top -
   VAR_47.v_addressable - VAR_47.v_border_bottom -
   VAR_47.v_front_porch;



 FUNC_3(VAR_15, 0,
  VAR_7, VAR_34,
  VAR_19, VAR_35);

 FUNC_4(VAR_16, 0,
   VAR_9,
   VAR_47.h_sync_width,
   VAR_8,
   !VAR_47.flags.HSYNC_POSITIVE_POLARITY,
   VAR_21,
   VAR_47.v_sync_width,
   VAR_20,
   !VAR_47.flags.VSYNC_POSITIVE_POLARITY);


 FUNC_3(VAR_17, 0,
  VAR_11, VAR_47.h_border_left +
  VAR_47.h_addressable + VAR_47.h_border_right,
  VAR_18, VAR_47.v_border_top +
  VAR_47.v_addressable + VAR_47.v_border_bottom);
}
