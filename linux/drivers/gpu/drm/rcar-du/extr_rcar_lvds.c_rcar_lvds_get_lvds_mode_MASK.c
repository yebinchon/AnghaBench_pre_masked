
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_info {int* bus_formats; int bus_flags; int num_bus_formats; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;
struct rcar_lvds {int mode; int dev; int panel; TYPE_1__ connector; } ;
typedef enum rcar_lvds_mode { ____Placeholder_rcar_lvds_mode } rcar_lvds_mode ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct rcar_lvds *VAR_4)
{
 struct drm_display_info *VAR_5 = &VAR_4->connector.display_info;
 enum rcar_lvds_mode VAR_6;





 if (!VAR_4->panel)
  return;

 if (!VAR_5->num_bus_formats || !VAR_5->bus_formats) {
  FUNC_0(VAR_4->dev, "no LVDS bus format reported\n");
  return;
 }

 switch (VAR_5->bus_formats[0]) {
 case 130:
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 default:
  FUNC_0(VAR_4->dev, "unsupported LVDS bus format 0x%04x\n",
   VAR_5->bus_formats[0]);
  return;
 }

 if (VAR_5->bus_flags & VAR_0)
  VAR_6 |= VAR_2;

 VAR_4->mode = VAR_6;
}
