
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct mtk_hdmi {TYPE_1__ bridge; int dev; } ;
struct drm_display_mode {int flags; int clock; int vrefresh; int vdisplay; int hdisplay; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int,int) ;
 int FUNC_1 (scalar_t__,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*,int,int) ;
 struct mtk_hdmi* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_4,
        struct drm_display_mode *VAR_5)
{
 struct mtk_hdmi *VAR_6 = FUNC_4(VAR_4);

 FUNC_0(VAR_6->dev, "xres=%d, yres=%d, refresh=%d, intl=%d clock=%d\n",
  VAR_5->hdisplay, VAR_5->vdisplay, VAR_5->vrefresh,
  !!(VAR_5->flags & VAR_0), VAR_5->clock * 1000);

 if (VAR_6->bridge.next) {
  struct drm_display_mode VAR_7;

  FUNC_2(&VAR_7, VAR_5);
  if (!FUNC_1(VAR_6->bridge.next, VAR_5,
        &VAR_7))
   return VAR_1;
 }

 if (VAR_5->clock < 27000)
  return VAR_3;
 if (VAR_5->clock > 297000)
  return VAR_2;

 return FUNC_3(VAR_5, 0x1fff, 0x1fff);
}
