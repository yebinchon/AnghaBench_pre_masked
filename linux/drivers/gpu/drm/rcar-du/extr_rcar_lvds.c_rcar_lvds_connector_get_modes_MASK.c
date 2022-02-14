
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_lvds {int panel; } ;
struct drm_connector {int dummy; } ;


 struct rcar_lvds* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct rcar_lvds *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->panel);
}
