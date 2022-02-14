
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_output {int cec; int panel; scalar_t__ hpd_gpio; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tegra_output* FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

enum drm_connector_status
FUNC_3(struct drm_connector *VAR_3, bool VAR_4)
{
 struct tegra_output *VAR_5 = FUNC_1(VAR_3);
 enum drm_connector_status VAR_6 = VAR_2;

 if (VAR_5->hpd_gpio) {
  if (FUNC_2(VAR_5->hpd_gpio) == 0)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
 } else {
  if (!VAR_5->panel)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
 }

 if (VAR_6 != VAR_0)
  FUNC_0(VAR_5->cec);

 return VAR_6;
}
