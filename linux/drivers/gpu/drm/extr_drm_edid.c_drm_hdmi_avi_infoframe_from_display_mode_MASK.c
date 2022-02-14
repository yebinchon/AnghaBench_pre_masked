
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_avi_infoframe {int pixel_repeat; int video_code; int picture_aspect; int scan_mode; int active_aspect; scalar_t__ itc; int content_type; } ;
struct drm_display_mode {int flags; int picture_aspect_ratio; } ;
struct drm_connector {int dummy; } ;
typedef enum hdmi_picture_aspect { ____Placeholder_hdmi_picture_aspect } hdmi_picture_aspect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_display_mode const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hdmi_avi_infoframe*) ;
 int FUNC_5 (struct drm_connector*) ;

int
FUNC_6(struct hdmi_avi_infoframe *VAR_8,
      struct drm_connector *VAR_9,
      const struct drm_display_mode *VAR_10)
{
 enum hdmi_picture_aspect VAR_11;
 int VAR_12;

 if (!VAR_8 || !VAR_10)
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10->flags & VAR_1)
  VAR_8->pixel_repeat = 1;

 VAR_8->video_code = FUNC_1(VAR_10);






 if (!FUNC_5(VAR_9) && VAR_8->video_code > 64)
  VAR_8->video_code = 0;







 if (VAR_8->video_code) {
  u8 VAR_13 = FUNC_2(VAR_10);
  bool VAR_14 = VAR_10->flags & VAR_0;

  if (FUNC_3(VAR_13) && !VAR_14)
   VAR_8->video_code = 0;
 }

 VAR_8->picture_aspect = VAR_6;






 VAR_8->content_type = VAR_4;
 VAR_8->itc = 0;





 VAR_11 = VAR_10->picture_aspect_ratio;
 if (VAR_11 == VAR_6)
  VAR_11 = FUNC_0(VAR_8->video_code);






 if (VAR_11 > VAR_5) {
  if (VAR_11 !=
      FUNC_0(VAR_8->video_code))
   return -VAR_2;
  VAR_11 = VAR_6;
 }

 VAR_8->picture_aspect = VAR_11;
 VAR_8->active_aspect = VAR_3;
 VAR_8->scan_mode = VAR_7;

 return 0;
}
