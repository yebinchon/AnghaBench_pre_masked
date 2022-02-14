
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_lvds {scalar_t__ panel; } ;
struct drm_bridge {int dummy; } ;


 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0)
{
 struct rcar_lvds *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->panel)
  FUNC_1(VAR_1->panel);
}
