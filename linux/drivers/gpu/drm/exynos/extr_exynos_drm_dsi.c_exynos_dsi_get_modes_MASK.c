
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_dsi {TYPE_2__* panel; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_modes ) (TYPE_2__*) ;} ;


 struct exynos_dsi* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct exynos_dsi *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->panel)
  return VAR_1->panel->funcs->get_modes(VAR_1->panel);

 return 0;
}
