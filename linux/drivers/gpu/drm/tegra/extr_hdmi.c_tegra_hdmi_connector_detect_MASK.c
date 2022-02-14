
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_output {int dummy; } ;
struct tegra_hdmi {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra_output* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct tegra_hdmi*,int ,int ) ;
 int FUNC_2 (struct drm_connector*,int) ;
 struct tegra_hdmi* FUNC_3 (struct tegra_output*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_4(struct drm_connector *VAR_2, bool VAR_3)
{
 struct tegra_output *VAR_4 = FUNC_0(VAR_2);
 struct tegra_hdmi *VAR_5 = FUNC_3(VAR_4);
 enum drm_connector_status VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 == VAR_1)
  return VAR_6;

 FUNC_1(VAR_5, 0, VAR_0);
 return VAR_6;
}
