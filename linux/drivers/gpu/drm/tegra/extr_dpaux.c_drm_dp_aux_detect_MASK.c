
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dpaux {int dummy; } ;
struct drm_dp_aux {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_dpaux*,int ) ;
 struct tegra_dpaux* FUNC_1 (struct drm_dp_aux*) ;

enum drm_connector_status FUNC_2(struct drm_dp_aux *VAR_4)
{
 struct tegra_dpaux *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);

 if (VAR_6 & VAR_1)
  return VAR_2;

 return VAR_3;
}
