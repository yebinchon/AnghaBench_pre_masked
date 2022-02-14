
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_lvds {int panel; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 struct sun4i_lvds* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0)
{
 struct sun4i_lvds *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->panel);
 FUNC_0(VAR_0);
}
