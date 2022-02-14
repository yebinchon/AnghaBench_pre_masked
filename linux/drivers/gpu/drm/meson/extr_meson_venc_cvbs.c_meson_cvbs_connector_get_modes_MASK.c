
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_cvbs_mode {int mode; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 struct meson_cvbs_mode* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_display_mode *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  struct meson_cvbs_mode *VAR_6 = &VAR_1[VAR_5];

  VAR_4 = FUNC_1(VAR_3, &VAR_6->mode);
  if (!VAR_4) {
   FUNC_0("Failed to create a new display mode\n");
   return 0;
  }

  FUNC_2(VAR_2, VAR_4);
 }

 return VAR_5;
}
