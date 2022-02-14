
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_lvds {int panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rockchip_lvds* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct rockchip_lvds*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct rockchip_lvds *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->panel);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1->panel);
}
