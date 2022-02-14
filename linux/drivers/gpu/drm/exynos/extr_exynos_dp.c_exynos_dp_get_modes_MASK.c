
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ panel; } ;
struct exynos_dp_device {int vm; int dev; TYPE_2__ plat_data; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_3__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; int dev; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_display_mode*) ;
 struct exynos_dp_device* FUNC_5 (struct analogix_dp_plat_data*) ;

__attribute__((used)) static int FUNC_6(struct analogix_dp_plat_data *VAR_2,
          struct drm_connector *VAR_3)
{
 struct exynos_dp_device *VAR_4 = FUNC_5(VAR_2);
 struct drm_display_mode *VAR_5;
 int VAR_6 = 0;

 if (VAR_4->plat_data.panel)
  return VAR_6;

 VAR_5 = FUNC_2(VAR_3->dev);
 if (!VAR_5) {
  FUNC_0(VAR_4->dev,
         "failed to create a new display mode.\n");
  return VAR_6;
 }

 FUNC_1(&VAR_4->vm, VAR_5);
 VAR_3->display_info.width_mm = VAR_5->width_mm;
 VAR_3->display_info.height_mm = VAR_5->height_mm;

 VAR_5->type = VAR_0 | VAR_1;
 FUNC_4(VAR_5);
 FUNC_3(VAR_3, VAR_5);

 return VAR_6 + 1;
}
