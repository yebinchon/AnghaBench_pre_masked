
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vic; scalar_t__ sink_is_hdmi; int colorimetry; int enc_out_format; } ;
struct rk3066_hdmi {int tmdsclk; TYPE_1__ hdmi_data; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_0 (struct drm_display_mode*) ;
 int FUNC_1 (struct rk3066_hdmi*,int ,int ,int) ;
 int FUNC_2 (struct rk3066_hdmi*,int ,int) ;
 int FUNC_3 (struct rk3066_hdmi*,struct drm_display_mode*) ;
 int FUNC_4 (struct rk3066_hdmi*) ;
 int FUNC_5 (struct rk3066_hdmi*,struct drm_display_mode*) ;
 scalar_t__ FUNC_6 (struct rk3066_hdmi*) ;
 int FUNC_7 (struct rk3066_hdmi*) ;
 int FUNC_8 (struct rk3066_hdmi*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct rk3066_hdmi *VAR_20,
        struct drm_display_mode *VAR_21)
{
 VAR_20->hdmi_data.vic = FUNC_0(VAR_21);
 VAR_20->hdmi_data.enc_out_format = VAR_4;

 if (VAR_20->hdmi_data.vic == 6 || VAR_20->hdmi_data.vic == 7 ||
     VAR_20->hdmi_data.vic == 21 || VAR_20->hdmi_data.vic == 22 ||
     VAR_20->hdmi_data.vic == 2 || VAR_20->hdmi_data.vic == 3 ||
     VAR_20->hdmi_data.vic == 17 || VAR_20->hdmi_data.vic == 18)
  VAR_20->hdmi_data.colorimetry = VAR_2;
 else
  VAR_20->hdmi_data.colorimetry = VAR_3;

 VAR_20->tmdsclk = VAR_21->clock * 1000;


 FUNC_1(VAR_20, VAR_11, VAR_9,
    VAR_0 | VAR_13);


 if (FUNC_6(VAR_20) != VAR_7)
  FUNC_8(VAR_20, VAR_7);


 FUNC_1(VAR_20, VAR_1,
    VAR_12, VAR_14);
 FUNC_2(VAR_20, VAR_10,
      VAR_19 |
      VAR_16 |
      VAR_15);
 FUNC_2(VAR_20, VAR_5, 0x20);

 FUNC_5(VAR_20, VAR_21);

 if (VAR_20->hdmi_data.sink_is_hdmi) {
  FUNC_1(VAR_20, VAR_6, VAR_18,
     VAR_17);
  FUNC_3(VAR_20, VAR_21);
 } else {
  FUNC_1(VAR_20, VAR_6, VAR_18, 0);
 }

 FUNC_4(VAR_20);

 FUNC_8(VAR_20, VAR_8);







 FUNC_7(VAR_20);


 FUNC_1(VAR_20, VAR_11,
    VAR_9, VAR_0);
 return 0;
}
