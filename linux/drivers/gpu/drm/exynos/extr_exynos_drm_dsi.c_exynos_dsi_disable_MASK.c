
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int state; int dev; int out_bridge; int panel; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct exynos_dsi* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct exynos_dsi*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_2)
{
 struct exynos_dsi *VAR_3 = FUNC_4(VAR_2);

 if (!(VAR_3->state & VAR_0))
  return;

 VAR_3->state &= ~VAR_1;

 FUNC_2(VAR_3->panel);
 FUNC_0(VAR_3->out_bridge);
 FUNC_5(VAR_3, 0);
 FUNC_3(VAR_3->panel);
 FUNC_1(VAR_3->out_bridge);
 VAR_3->state &= ~VAR_0;
 FUNC_6(VAR_3->dev);
}
