
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int dummy; } ;
struct tegra_dsi_state {struct drm_connector_state base; } ;
struct drm_connector {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_connector_state*) ;
 struct tegra_dsi_state* FUNC_1 (struct tegra_dsi_state*,int,int ) ;
 struct tegra_dsi_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_connector_state *
FUNC_3(struct drm_connector *VAR_1)
{
 struct tegra_dsi_state *VAR_2 = FUNC_2(VAR_1->state);
 struct tegra_dsi_state *VAR_3;

 VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_2), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1,
            &VAR_3->base);

 return &VAR_3->base;
}
