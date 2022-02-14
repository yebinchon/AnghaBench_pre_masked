
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct rcar_lvds {struct drm_display_mode display_mode; } ;
struct drm_bridge {int dummy; } ;


 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct rcar_lvds*) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0,
          const struct drm_display_mode *VAR_1,
          const struct drm_display_mode *VAR_2)
{
 struct rcar_lvds *VAR_3 = FUNC_0(VAR_0);

 VAR_3->display_mode = *VAR_2;

 FUNC_1(VAR_3);
}
