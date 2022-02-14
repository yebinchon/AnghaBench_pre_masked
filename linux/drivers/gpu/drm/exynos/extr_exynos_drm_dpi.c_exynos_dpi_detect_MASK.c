
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_dpi {int connector; TYPE_1__* panel; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int connector; } ;


 int VAR_0 ;
 struct exynos_dpi* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_1, bool VAR_2)
{
 struct exynos_dpi *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->panel && !VAR_3->panel->connector)
  FUNC_1(VAR_3->panel, &VAR_3->connector);

 return VAR_0;
}
