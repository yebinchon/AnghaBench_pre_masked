
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int dev; } ;
struct drm_display_mode {int flags; int clock; int vrefresh; int vdisplay; int hdisplay; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdmi_context* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct hdmi_context*,int) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_3,
   struct drm_display_mode *VAR_4)
{
 struct hdmi_context *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 FUNC_0(VAR_5->dev,
     "xres=%d, yres=%d, refresh=%d, intl=%d clock=%d\n",
     VAR_4->hdisplay, VAR_4->vdisplay, VAR_4->vrefresh,
     (VAR_4->flags & VAR_0) ? 1 :
     0, VAR_4->clock * 1000);

 VAR_6 = FUNC_2(VAR_5, VAR_4->clock * 1000);
 if (VAR_6 < 0)
  return VAR_1;

 return VAR_2;
}
