
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vic; scalar_t__ sink_is_hdmi; int colorimetry; void* enc_out_format; void* enc_in_format; } ;
struct inno_hdmi {int tmds_rate; TYPE_1__ hdmi_data; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_display_mode*) ;
 int FUNC_1 (struct inno_hdmi*,int ,int,int) ;
 int FUNC_2 (struct inno_hdmi*,int ,int ) ;
 int FUNC_3 (struct inno_hdmi*,struct drm_display_mode*) ;
 int FUNC_4 (struct inno_hdmi*) ;
 int FUNC_5 (struct inno_hdmi*,struct drm_display_mode*) ;
 int FUNC_6 (struct inno_hdmi*,struct drm_display_mode*) ;
 int FUNC_7 (struct inno_hdmi*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct inno_hdmi *VAR_7,
      struct drm_display_mode *VAR_8)
{
 VAR_7->hdmi_data.vic = FUNC_0(VAR_8);

 VAR_7->hdmi_data.enc_in_format = VAR_3;
 VAR_7->hdmi_data.enc_out_format = VAR_3;

 if ((VAR_7->hdmi_data.vic == 6) || (VAR_7->hdmi_data.vic == 7) ||
     (VAR_7->hdmi_data.vic == 21) || (VAR_7->hdmi_data.vic == 22) ||
     (VAR_7->hdmi_data.vic == 2) || (VAR_7->hdmi_data.vic == 3) ||
     (VAR_7->hdmi_data.vic == 17) || (VAR_7->hdmi_data.vic == 18))
  VAR_7->hdmi_data.colorimetry = VAR_1;
 else
  VAR_7->hdmi_data.colorimetry = VAR_2;


 FUNC_1(VAR_7, VAR_0, VAR_5 | VAR_6,
    FUNC_8(1) | FUNC_10(1));


 FUNC_2(VAR_7, VAR_4,
      FUNC_9(VAR_7->hdmi_data.sink_is_hdmi));

 FUNC_5(VAR_7, VAR_8);

 FUNC_4(VAR_7);

 if (VAR_7->hdmi_data.sink_is_hdmi) {
  FUNC_3(VAR_7, VAR_8);
  FUNC_6(VAR_7, VAR_8);
 }







 VAR_7->tmds_rate = VAR_8->clock * 1000;
 FUNC_7(VAR_7);


 FUNC_1(VAR_7, VAR_0, VAR_5 | VAR_6,
    FUNC_8(0) | FUNC_10(0));

 return 0;
}
