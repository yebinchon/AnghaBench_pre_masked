
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_display_mode* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_4)
{
 struct drm_connector *VAR_5 = VAR_4->connector;
 struct drm_display_mode *VAR_6;

 VAR_6 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_6) {
  FUNC_0("bad mode or failed to add mode\n");
  return -VAR_2;
 }
 FUNC_3(VAR_6);
 VAR_6->type = VAR_0 | VAR_1;

 VAR_5->display_info.width_mm = VAR_6->width_mm;
 VAR_5->display_info.height_mm = VAR_6->height_mm;

 FUNC_2(VAR_5, VAR_6);

 return 1;
}
