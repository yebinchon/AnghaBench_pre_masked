
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_display_mode*) ;
 struct drm_display_mode* VAR_0 ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode const*) ;

int FUNC_4(struct drm_connector *VAR_1,
   int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 struct drm_display_mode *VAR_7;
 struct drm_device *VAR_8 = VAR_1->dev;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  VAR_2 = 0;
 if (VAR_3 < 0)
  VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  const struct drm_display_mode *VAR_9 = &VAR_0[VAR_4];
  if (VAR_2 && VAR_3) {





   if (VAR_9->hdisplay > VAR_2 ||
     VAR_9->vdisplay > VAR_3)
    continue;
  }
  if (FUNC_3(VAR_9) > 61)
   continue;
  VAR_7 = FUNC_1(VAR_8, VAR_9);
  if (VAR_7) {
   FUNC_2(VAR_1, VAR_7);
   VAR_6++;
  }
 }
 return VAR_6;
}
