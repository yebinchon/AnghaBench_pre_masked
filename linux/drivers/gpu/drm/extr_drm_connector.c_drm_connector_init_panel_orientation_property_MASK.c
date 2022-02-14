
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_display_info {int panel_orientation; } ;
struct TYPE_2__ {struct drm_property* panel_orientation_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int base; struct drm_display_info display_info; struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,struct drm_property*,int) ;
 int VAR_3 ;
 struct drm_property* FUNC_3 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_4(
 struct drm_connector *VAR_4, int VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct drm_display_info *VAR_8 = &VAR_4->display_info;
 struct drm_property *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_6);
 if (VAR_10 != VAR_0)
  VAR_8->panel_orientation = VAR_10;

 if (VAR_8->panel_orientation == VAR_0)
  return 0;

 VAR_9 = VAR_7->mode_config.panel_orientation_property;
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_7, VAR_1,
    "panel orientation",
    VAR_3,
    FUNC_0(VAR_3));
  if (!VAR_9)
   return -VAR_2;

  VAR_7->mode_config.panel_orientation_property = VAR_9;
 }

 FUNC_2(&VAR_4->base, VAR_9,
       VAR_8->panel_orientation);
 return 0;
}
