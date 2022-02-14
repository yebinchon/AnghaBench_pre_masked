
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drm; struct drm_connector* connector; } ;
struct panel_lvds {scalar_t__ data_mirror; int bus_format; int height; int width; int video_mode; TYPE_1__ panel; } ;
struct drm_panel {int dummy; } ;
struct drm_display_mode {int type; } ;
struct TYPE_4__ {int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_2__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (int *,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct panel_lvds* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_4)
{
 struct panel_lvds *VAR_5 = FUNC_4(VAR_4);
 struct drm_connector *VAR_6 = VAR_5->panel.connector;
 struct drm_display_mode *VAR_7;

 VAR_7 = FUNC_2(VAR_5->panel.drm);
 if (!VAR_7)
  return 0;

 FUNC_1(&VAR_5->video_mode, VAR_7);
 VAR_7->type |= VAR_2 | VAR_3;
 FUNC_3(VAR_6, VAR_7);

 VAR_6->display_info.width_mm = VAR_5->width;
 VAR_6->display_info.height_mm = VAR_5->height;
 FUNC_0(&VAR_6->display_info,
      &VAR_5->bus_format, 1);
 VAR_6->display_info.bus_flags = VAR_5->data_mirror
       ? VAR_0
       : VAR_1;

 return 1;
}
