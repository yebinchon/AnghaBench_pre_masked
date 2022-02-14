
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_dpi {TYPE_2__* panel; scalar_t__ vm; int dev; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_modes ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct exynos_dpi* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (scalar_t__,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_2)
{
 struct exynos_dpi *VAR_3 = FUNC_1(VAR_2);


 if (VAR_3->vm) {
  struct drm_display_mode *VAR_4;

  VAR_4 = FUNC_3(VAR_2->dev);
  if (!VAR_4) {
   FUNC_0(VAR_3->dev,
          "failed to create a new display mode\n");
   return 0;
  }
  FUNC_2(VAR_3->vm, VAR_4);
  VAR_4->type = VAR_0 | VAR_1;
  FUNC_4(VAR_2, VAR_4);
  return 1;
 }

 if (VAR_3->panel)
  return VAR_3->panel->funcs->get_modes(VAR_3->panel);

 return 0;
}
