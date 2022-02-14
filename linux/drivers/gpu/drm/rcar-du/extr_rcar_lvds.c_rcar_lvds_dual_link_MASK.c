
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_lvds {int dual_link; } ;
struct drm_bridge {int dummy; } ;


 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;

bool FUNC_1(struct drm_bridge *VAR_0)
{
 struct rcar_lvds *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dual_link;
}
