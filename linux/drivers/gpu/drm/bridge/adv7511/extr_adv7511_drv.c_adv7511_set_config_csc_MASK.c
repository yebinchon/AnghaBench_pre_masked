
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int color_formats; } ;
struct drm_connector {TYPE_1__ display_info; } ;
struct TYPE_5__ {int colorspace; int scan_mode; } ;
struct adv7511_video_config {int hdmi_mode; int csc_enable; TYPE_2__ avi_infoframe; int csc_scaling_factor; int csc_coefficents; } ;
struct adv7511 {int regmap; } ;
typedef int infoframe ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct adv7511*,int ) ;
 int FUNC_1 (struct adv7511*,int ) ;
 int FUNC_2 (struct adv7511*,int,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct adv7511 *VAR_12,
       struct drm_connector *VAR_13,
       bool VAR_14, bool VAR_15)
{
 struct adv7511_video_config VAR_16;
 bool VAR_17, VAR_18;
 unsigned int VAR_19;
 uint8_t VAR_20[17];

 VAR_16.hdmi_mode = VAR_15;

 FUNC_3(&VAR_16.avi_infoframe);

 VAR_16.avi_infoframe.scan_mode = VAR_10;

 if (VAR_14) {
  VAR_16.csc_enable = 0;
  VAR_16.avi_infoframe.colorspace = VAR_9;
 } else {
  VAR_16.csc_scaling_factor = VAR_0;
  VAR_16.csc_coefficents = VAR_11;

  if ((VAR_13->display_info.color_formats &
       VAR_8) &&
      VAR_16.hdmi_mode) {
   VAR_16.csc_enable = 0;
   VAR_16.avi_infoframe.colorspace =
    129;
  } else {
   VAR_16.csc_enable = 1;
   VAR_16.avi_infoframe.colorspace = VAR_9;
  }
 }

 if (VAR_16.hdmi_mode) {
  VAR_19 = VAR_2;

  switch (VAR_16.avi_infoframe.colorspace) {
  case 128:
   VAR_17 = 0;
   VAR_18 = 1;
   break;
  case 129:
   VAR_17 = 1;
   VAR_18 = 1;
   break;
  default:
   VAR_17 = 0;
   VAR_18 = 0;
   break;
  }
 } else {
  VAR_19 = VAR_1;
  VAR_17 = 0;
  VAR_18 = 0;
 }

 FUNC_0(VAR_12, VAR_4);

 FUNC_2(VAR_12, VAR_16.csc_enable,
        VAR_16.csc_coefficents,
        VAR_16.csc_scaling_factor);

 FUNC_6(VAR_12->regmap, VAR_7, 0x81,
      (VAR_17 << 7) | VAR_18);

 FUNC_6(VAR_12->regmap, VAR_6,
      VAR_3, VAR_19);

 FUNC_4(&VAR_16.avi_infoframe, VAR_20,
    sizeof(VAR_20));


 FUNC_5(VAR_12->regmap, VAR_5,
     VAR_20 + 1, sizeof(VAR_20) - 1);

 FUNC_1(VAR_12, VAR_4);
}
