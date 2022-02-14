
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int mode; int dev; } ;
struct drm_display_mode {int flags; int vscan; int vtotal; int vsync_end; int vsync_start; int vdisplay; int hskew; int htotal; int hsync_end; int hsync_start; int hdisplay; int name; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (int *,struct drm_display_mode const*) ;
 struct mtk_hdmi* FUNC_2 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0,
    const struct drm_display_mode *VAR_1,
    const struct drm_display_mode *VAR_2)
{
 struct mtk_hdmi *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3->dev, "cur info: name:%s, hdisplay:%d\n",
  VAR_2->name, VAR_2->hdisplay);
 FUNC_0(VAR_3->dev, "hsync_start:%d,hsync_end:%d, htotal:%d",
  VAR_2->hsync_start, VAR_2->hsync_end,
  VAR_2->htotal);
 FUNC_0(VAR_3->dev, "hskew:%d, vdisplay:%d\n",
  VAR_2->hskew, VAR_2->vdisplay);
 FUNC_0(VAR_3->dev, "vsync_start:%d, vsync_end:%d, vtotal:%d",
  VAR_2->vsync_start, VAR_2->vsync_end,
  VAR_2->vtotal);
 FUNC_0(VAR_3->dev, "vscan:%d, flag:%d\n",
  VAR_2->vscan, VAR_2->flags);

 FUNC_1(&VAR_3->mode, VAR_2);
}
