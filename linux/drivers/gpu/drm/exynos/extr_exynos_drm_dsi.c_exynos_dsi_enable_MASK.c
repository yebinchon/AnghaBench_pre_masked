
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int state; int dev; scalar_t__ panel; int out_bridge; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct exynos_dsi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct exynos_dsi*,int) ;
 int FUNC_7 (struct exynos_dsi*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_2)
{
 struct exynos_dsi *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 if (VAR_3->state & VAR_0)
  return;

 FUNC_8(VAR_3->dev);
 VAR_3->state |= VAR_0;

 if (VAR_3->panel) {
  VAR_4 = FUNC_3(VAR_3->panel);
  if (VAR_4 < 0)
   goto err_put_sync;
 } else {
  FUNC_1(VAR_3->out_bridge);
 }

 FUNC_7(VAR_3);
 FUNC_6(VAR_3, 1);

 if (VAR_3->panel) {
  VAR_4 = FUNC_2(VAR_3->panel);
  if (VAR_4 < 0)
   goto err_display_disable;
 } else {
  FUNC_0(VAR_3->out_bridge);
 }

 VAR_3->state |= VAR_1;
 return;

err_display_disable:
 FUNC_6(VAR_3, 0);
 FUNC_4(VAR_3->panel);

err_put_sync:
 VAR_3->state &= ~VAR_0;
 FUNC_9(VAR_3->dev);
}
