
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repaper_epd {int mode; } ;
struct drm_display_mode {int height_mm; int width_mm; int type; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct repaper_epd* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_1)
{
 struct repaper_epd *VAR_2 = FUNC_4(VAR_1->dev);
 struct drm_display_mode *VAR_3;

 VAR_3 = FUNC_1(VAR_1->dev, VAR_2->mode);
 if (!VAR_3) {
  FUNC_0("Failed to duplicate mode\n");
  return 0;
 }

 FUNC_3(VAR_3);
 VAR_3->type |= VAR_0;
 FUNC_2(VAR_1, VAR_3);

 VAR_1->display_info.width_mm = VAR_3->width_mm;
 VAR_1->display_info.height_mm = VAR_3->height_mm;

 return 1;
}
