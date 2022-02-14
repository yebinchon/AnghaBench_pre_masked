
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hdmi_avi_infoframe {int colorspace; int colorimetry; int extended_colorimetry; int scan_mode; int active_aspect; int top_bar; int bottom_bar; int left_bar; int right_bar; int picture_aspect; int quantization_range; int nups; int video_code; int ycc_quantization_range; int content_type; scalar_t__ itc; } ;
struct TYPE_3__ {int mpixelrepetitioninput; int mpixelrepetitionoutput; } ;
struct TYPE_4__ {int enc_out_encoding; TYPE_1__ video_mode; int enc_in_encoding; int enc_out_bus_format; } ;
struct dw_hdmi {TYPE_2__ hdmi_data; int connector; } ;
struct drm_display_mode {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
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
 int FUNC_0 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dw_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct dw_hdmi *VAR_34, struct drm_display_mode *VAR_35)
{
 struct hdmi_avi_infoframe VAR_36;
 u8 VAR_37;


 FUNC_0(&VAR_36,
       &VAR_34->connector, VAR_35);

 if (FUNC_3(VAR_34->hdmi_data.enc_out_bus_format))
  VAR_36.colorspace = VAR_6;
 else if (FUNC_2(VAR_34->hdmi_data.enc_out_bus_format))
  VAR_36.colorspace = VAR_5;
 else if (FUNC_1(VAR_34->hdmi_data.enc_out_bus_format))
  VAR_36.colorspace = VAR_4;
 else
  VAR_36.colorspace = VAR_3;


 switch (VAR_34->hdmi_data.enc_out_encoding) {
 case 129:
  if (VAR_34->hdmi_data.enc_in_encoding == VAR_32)
   VAR_36.colorimetry = VAR_0;
  else
   VAR_36.colorimetry = VAR_1;
  VAR_36.extended_colorimetry =
    VAR_7;
  break;
 case 128:
  if (VAR_34->hdmi_data.enc_in_encoding == VAR_33)
   VAR_36.colorimetry = VAR_0;
  else
   VAR_36.colorimetry = VAR_2;
  VAR_36.extended_colorimetry =
    VAR_8;
  break;
 default:
  VAR_36.colorimetry = VAR_1;
  VAR_36.extended_colorimetry =
    VAR_7;
  break;
 }

 VAR_36.scan_mode = VAR_31;
 VAR_37 = (VAR_36.scan_mode & 3) << 4 | (VAR_36.colorspace & 3);
 if (VAR_36.active_aspect & 15)
  VAR_37 |= VAR_10;
 if (VAR_36.top_bar || VAR_36.bottom_bar)
  VAR_37 |= VAR_11;
 if (VAR_36.left_bar || VAR_36.right_bar)
  VAR_37 |= VAR_12;
 FUNC_4(VAR_34, VAR_37, VAR_9);


 VAR_37 = ((VAR_36.colorimetry & 0x3) << 6) |
       ((VAR_36.picture_aspect & 0x3) << 4) |
       (VAR_36.active_aspect & 0xf);
 FUNC_4(VAR_34, VAR_37, VAR_13);


 VAR_37 = ((VAR_36.extended_colorimetry & 0x7) << 4) |
       ((VAR_36.quantization_range & 0x3) << 2) |
       (VAR_36.nups & 0x3);
 if (VAR_36.itc)
  VAR_37 |= VAR_15;
 FUNC_4(VAR_34, VAR_37, VAR_14);


 VAR_37 = VAR_36.video_code & 0x7f;
 FUNC_4(VAR_34, VAR_37, VAR_25);


 VAR_37 = (((VAR_34->hdmi_data.video_mode.mpixelrepetitioninput + 1) <<
  VAR_28) &
  VAR_27) |
  ((VAR_34->hdmi_data.video_mode.mpixelrepetitionoutput <<
  VAR_30) &
  VAR_29);
 FUNC_4(VAR_34, VAR_37, VAR_26);





 VAR_37 = ((VAR_36.ycc_quantization_range & 0x3) << 2) |
       (VAR_36.content_type & 0x3);
 FUNC_4(VAR_34, VAR_37, VAR_16);


 FUNC_4(VAR_34, VAR_36.top_bar & 0xff, VAR_19);
 FUNC_4(VAR_34, (VAR_36.top_bar >> 8) & 0xff, VAR_20);
 FUNC_4(VAR_34, VAR_36.bottom_bar & 0xff, VAR_21);
 FUNC_4(VAR_34, (VAR_36.bottom_bar >> 8) & 0xff, VAR_22);
 FUNC_4(VAR_34, VAR_36.left_bar & 0xff, VAR_17);
 FUNC_4(VAR_34, (VAR_36.left_bar >> 8) & 0xff, VAR_18);
 FUNC_4(VAR_34, VAR_36.right_bar & 0xff, VAR_23);
 FUNC_4(VAR_34, (VAR_36.right_bar >> 8) & 0xff, VAR_24);
}
