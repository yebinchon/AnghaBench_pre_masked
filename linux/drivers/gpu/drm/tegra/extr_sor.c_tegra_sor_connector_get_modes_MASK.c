
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {scalar_t__ aux; } ;
struct tegra_output {int dummy; } ;
struct drm_connector {int dummy; } ;


 struct tegra_output* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drm_connector*) ;
 struct tegra_sor* FUNC_4 (struct tegra_output*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct tegra_output *VAR_1 = FUNC_0(VAR_0);
 struct tegra_sor *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 if (VAR_2->aux)
  FUNC_2(VAR_2->aux);

 VAR_3 = FUNC_3(VAR_0);

 if (VAR_2->aux)
  FUNC_1(VAR_2->aux);

 return VAR_3;
}
