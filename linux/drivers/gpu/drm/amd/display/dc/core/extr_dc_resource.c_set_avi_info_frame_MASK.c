
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* sb; int hb2; int hb1; int hb0; } ;
struct TYPE_8__ {int version; scalar_t__ length; scalar_t__ info_frame_type; } ;
struct TYPE_10__ {int Y0_Y1_Y2; int S0_S1; scalar_t__ C0_C1; scalar_t__ EC0_EC2; int M0_M1; unsigned int CN0_CN1; unsigned int VIC0_VIC7; TYPE_3__ header; scalar_t__ ACE0_ACE3; scalar_t__ bar_right; int bar_left; scalar_t__ bar_bottom; int bar_top; scalar_t__ PR0_PR3; void* YQ0_YQ1; void* Q0_Q1; scalar_t__ ITC; int R0_R3; int SC0_SC1; int B0_B1; int A0; } ;
union hdmi_info_packet {TYPE_2__ packet_raw_data; TYPE_5__ bits; } ;
struct TYPE_6__ {int graphics_content; int photo_content; int cinema_content; int game_content; int valid_content_type; } ;
union display_content_support {TYPE_1__ bits; int member_0; } ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct pipe_ctx {struct dc_stream_state* stream; } ;
struct TYPE_9__ {unsigned int vic; int pixel_encoding; int aspect_ratio; int timing_3d_format; int hdmi_vic; scalar_t__ h_border_right; scalar_t__ h_total; int h_border_left; scalar_t__ v_border_bottom; scalar_t__ v_total; int v_border_top; } ;
struct dc_stream_state {int output_color_space; int qs_bit; int qy_bit; TYPE_4__ timing; union display_content_support content_support; } ;
struct dc_info_packet {scalar_t__* sb; int valid; int hb2; int hb1; int hb0; } ;
typedef enum scanning_type { ____Placeholder_scanning_type } scanning_type ;
typedef enum dc_timing_3d_format { ____Placeholder_dc_timing_3d_format } dc_timing_3d_format ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
typedef enum dc_aspect_ratio { ____Placeholder_dc_aspect_ratio } dc_aspect_ratio ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;




 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 int FUNC_0 (union hdmi_info_packet*,int ,int) ;

__attribute__((used)) static void FUNC_1(
  struct dc_info_packet *VAR_36,
  struct pipe_ctx *VAR_37)
{
 struct dc_stream_state *VAR_38 = VAR_37->stream;
 enum dc_color_space VAR_39 = VAR_16;
 uint32_t VAR_40 = 0;
 enum scanning_type VAR_41 = VAR_31;
 enum dc_aspect_ratio VAR_42 = 132;
 bool VAR_43 = 0;
 uint8_t VAR_44 = 0;
 uint8_t VAR_45 = 0;
 unsigned int VAR_46 = 0;
 uint8_t *VAR_47 = ((void*)0);
 uint8_t VAR_48 = 0;
 union hdmi_info_packet VAR_49;
 union display_content_support VAR_50 = {0};
 unsigned int VAR_51 = VAR_37->stream->timing.vic;
 enum dc_timing_3d_format VAR_52;

 FUNC_0(&VAR_49, 0, sizeof(union hdmi_info_packet));

 VAR_39 = VAR_37->stream->output_color_space;
 if (VAR_39 == VAR_16)
  VAR_39 = (VAR_38->timing.pixel_encoding == 131) ?
   VAR_14:VAR_19;


 VAR_49.bits.header.info_frame_type = VAR_26;


 VAR_49.bits.header.version = 2;
 VAR_49.bits.header.length = VAR_25;






 switch (VAR_38->timing.pixel_encoding) {
 case 129:
  VAR_40 = 1;
  break;

 case 128:
  VAR_40 = 2;
  break;
 case 130:
  VAR_40 = 3;
  break;

 case 131:
 default:
  VAR_40 = 0;
 }



 VAR_49.bits.Y0_Y1_Y2 = VAR_40;


 VAR_49.bits.A0 = VAR_1;


 VAR_49.bits.B0_B1 = VAR_2;

 VAR_49.bits.SC0_SC1 = VAR_27;



 VAR_41 = VAR_32;
 VAR_49.bits.S0_S1 = VAR_41;


 if (VAR_39 == VAR_19 ||
   VAR_39 == VAR_20)
  VAR_49.bits.C0_C1 = VAR_8;
 else if (VAR_39 == VAR_17 ||
   VAR_39 == VAR_18)
  VAR_49.bits.C0_C1 = VAR_7;
 else {
  VAR_49.bits.C0_C1 = VAR_9;
 }
 if (VAR_39 == VAR_10 ||
   VAR_39 == VAR_11 ||
   VAR_39 == VAR_12) {
  VAR_49.bits.EC0_EC2 = VAR_4;
  VAR_49.bits.C0_C1 = VAR_6;
 } else if (VAR_39 == VAR_13) {
  VAR_49.bits.EC0_EC2 = VAR_3;
  VAR_49.bits.C0_C1 = VAR_6;
 }


 VAR_42 = VAR_38->timing.aspect_ratio;

 switch (VAR_42) {
 case 134:
 case 136:
  VAR_49.bits.M0_M1 = VAR_42;
  break;

 case 132:
 case 133:
 case 135:
 default:
  VAR_49.bits.M0_M1 = 0;
 }


 VAR_49.bits.R0_R3 = VAR_0;



 VAR_45 = 0;
 VAR_46 = 0;

 VAR_43 = 1;
 VAR_44 = 1;

 VAR_50 = VAR_38->content_support;

 if (VAR_43) {
  if (!VAR_50.bits.valid_content_type) {
   VAR_46 = 0;
  } else {
   if (VAR_45 == VAR_23) {
    if (VAR_50.bits.graphics_content == 1) {
     VAR_46 = 0;
    }
   } else if (VAR_45 == VAR_24) {
    if (VAR_50.bits.photo_content == 1) {
     VAR_46 = 1;
    } else {
     VAR_46 = 0;
     VAR_44 = 0;
    }
   } else if (VAR_45 == VAR_21) {
    if (VAR_50.bits.cinema_content == 1) {
     VAR_46 = 2;
    } else {
     VAR_46 = 0;
     VAR_44 = 0;
    }
   } else if (VAR_45 == VAR_22) {
    if (VAR_50.bits.game_content == 1) {
     VAR_46 = 3;
    } else {
     VAR_46 = 0;
     VAR_44 = 0;
    }
   }
  }
  VAR_49.bits.CN0_CN1 = VAR_46;
  VAR_49.bits.ITC = VAR_44;
 }



 if (VAR_38->qs_bit == 1 &&
   VAR_38->qy_bit == 1) {
  if (VAR_39 == VAR_14 ||
   VAR_39 == VAR_10) {
   VAR_49.bits.Q0_Q1 = VAR_29;
   VAR_49.bits.YQ0_YQ1 = VAR_34;
  } else if (VAR_39 == VAR_15 ||
     VAR_39 == VAR_11) {
   VAR_49.bits.Q0_Q1 = VAR_30;
   VAR_49.bits.YQ0_YQ1 = VAR_35;
  } else {
   VAR_49.bits.Q0_Q1 = VAR_28;
   VAR_49.bits.YQ0_YQ1 = VAR_35;
  }
 } else {
  VAR_49.bits.Q0_Q1 = VAR_28;
  VAR_49.bits.YQ0_YQ1 = VAR_35;
 }


 VAR_52 = VAR_38->timing.timing_3d_format;

 if (VAR_52 != VAR_33) {

  switch (VAR_37->stream->timing.hdmi_vic) {
  case 1:
   VAR_51 = 95;
   break;
  case 2:
   VAR_51 = 94;
   break;
  case 3:
   VAR_51 = 93;
   break;
  case 4:
   VAR_51 = 98;
   break;
  default:
   break;
  }
 }

 VAR_49.bits.VIC0_VIC7 = VAR_51;
 if (VAR_51 >= 128)
  VAR_49.bits.header.version = 3;



 if (VAR_49.bits.C0_C1 == VAR_6 &&
   VAR_49.bits.EC0_EC2 == VAR_5) {
  VAR_49.bits.header.version = 4;
  VAR_49.bits.header.length = 14;
 }




 VAR_49.bits.PR0_PR3 = 0;






 VAR_49.bits.bar_top = VAR_38->timing.v_border_top;
 VAR_49.bits.bar_bottom = (VAR_38->timing.v_total
   - VAR_38->timing.v_border_bottom + 1);
 VAR_49.bits.bar_left = VAR_38->timing.h_border_left;
 VAR_49.bits.bar_right = (VAR_38->timing.h_total
   - VAR_38->timing.h_border_right + 1);






 VAR_49.bits.ACE0_ACE3 = 0;


 VAR_47 = &VAR_49.packet_raw_data.sb[0];

 *VAR_47 = VAR_26 + VAR_49.bits.header.length + VAR_49.bits.header.version;

 for (VAR_48 = 1; VAR_48 <= VAR_49.bits.header.length; VAR_48++)
  *VAR_47 += VAR_49.packet_raw_data.sb[VAR_48];


 *VAR_47 = (uint8_t) (0x100 - *VAR_47);


 VAR_36->hb0 = VAR_49.packet_raw_data.hb0;
 VAR_36->hb1 = VAR_49.packet_raw_data.hb1;
 VAR_36->hb2 = VAR_49.packet_raw_data.hb2;

 for (VAR_48 = 0; VAR_48 < sizeof(VAR_49.packet_raw_data.sb); VAR_48++)
  VAR_36->sb[VAR_48] = VAR_49.packet_raw_data.sb[VAR_48];

 VAR_36->valid = 1;
}
