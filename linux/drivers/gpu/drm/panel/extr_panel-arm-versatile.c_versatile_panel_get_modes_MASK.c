
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct versatile_panel {TYPE_2__* panel_type; } ;
struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_3__ {int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;
struct TYPE_4__ {int height_mm; int width_mm; int mode; int bus_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct versatile_panel* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->connector;
 struct versatile_panel *VAR_4 = FUNC_3(VAR_2);
 struct drm_display_mode *VAR_5;

 VAR_3->display_info.width_mm = VAR_4->panel_type->width_mm;
 VAR_3->display_info.height_mm = VAR_4->panel_type->height_mm;
 VAR_3->display_info.bus_flags = VAR_4->panel_type->bus_flags;

 VAR_5 = FUNC_0(VAR_2->drm, &VAR_4->panel_type->mode);
 FUNC_2(VAR_5);
 VAR_5->type = VAR_0 | VAR_1;

 VAR_5->width_mm = VAR_4->panel_type->width_mm;
 VAR_5->height_mm = VAR_4->panel_type->height_mm;
 FUNC_1(VAR_3, VAR_5);

 return 1;
}
