
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hactive; scalar_t__ vactive; } ;
struct panel_drv_data {TYPE_1__ vm; } ;
struct omap_dss_device {int dev; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_1,
          struct drm_display_mode *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 if (VAR_2->hdisplay != VAR_3->vm.hactive)
  VAR_4 = -VAR_0;

 if (VAR_2->vdisplay != VAR_3->vm.vactive)
  VAR_4 = -VAR_0;

 if (VAR_4) {
  FUNC_0(VAR_1->dev, "wrong resolution: %d x %d",
    VAR_2->hdisplay, VAR_2->vdisplay);
  FUNC_0(VAR_1->dev, "panel resolution: %d x %d",
    VAR_3->vm.hactive, VAR_3->vm.vactive);
 }

 return VAR_4;
}
