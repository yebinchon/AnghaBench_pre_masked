
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_lvds {struct drm_panel* panel; } ;
struct drm_panel {int dummy; } ;
struct drm_connector {int dummy; } ;


 struct rockchip_lvds* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct rockchip_lvds *VAR_1 = FUNC_0(VAR_0);
 struct drm_panel *VAR_2 = VAR_1->panel;

 return FUNC_1(VAR_2);
}
