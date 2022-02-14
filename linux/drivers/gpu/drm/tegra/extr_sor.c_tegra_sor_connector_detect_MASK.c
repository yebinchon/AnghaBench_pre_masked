
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {scalar_t__ aux; } ;
struct tegra_output {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 struct tegra_output* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_connector*,int) ;
 struct tegra_sor* FUNC_3 (struct tegra_output*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_4(struct drm_connector *VAR_0, bool VAR_1)
{
 struct tegra_output *VAR_2 = FUNC_0(VAR_0);
 struct tegra_sor *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->aux)
  return FUNC_1(VAR_3->aux);

 return FUNC_2(VAR_0, VAR_1);
}
