
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct hdmi_vendor_infoframe {int s3d_struct; scalar_t__ vic; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_2__ {int has_hdmi_infoframe; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_display_mode const*) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*) ;
 int FUNC_2 (struct drm_display_mode const*) ;

int
FUNC_3(struct hdmi_vendor_infoframe *VAR_2,
         struct drm_connector *VAR_3,
         const struct drm_display_mode *VAR_4)
{




 bool VAR_5 = VAR_3 ?
  VAR_3->display_info.has_hdmi_infoframe : 0;
 int VAR_6;
 u32 VAR_7;
 u8 VAR_8;

 if (!VAR_2 || !VAR_4)
  return -VAR_1;

 if (!VAR_5)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4);
 VAR_7 = VAR_4->flags & VAR_0;
 if (VAR_8 && VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->vic = VAR_8;
 VAR_2->s3d_struct = FUNC_2(VAR_4);

 return 0;
}
