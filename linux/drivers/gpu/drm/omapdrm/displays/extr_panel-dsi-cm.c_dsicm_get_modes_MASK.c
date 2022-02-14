
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_drv_data {int vm; int height_mm; int width_mm; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (struct drm_connector*,int *) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_0,
      struct drm_connector *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_1(VAR_0);

 VAR_1->display_info.width_mm = VAR_2->width_mm;
 VAR_1->display_info.height_mm = VAR_2->height_mm;

 return FUNC_0(VAR_1, &VAR_2->vm);
}
