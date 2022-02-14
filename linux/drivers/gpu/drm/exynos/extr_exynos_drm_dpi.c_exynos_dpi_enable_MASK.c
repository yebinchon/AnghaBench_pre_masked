
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dpi {scalar_t__ panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct exynos_dpi* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0)
{
 struct exynos_dpi *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->panel) {
  FUNC_1(VAR_1->panel);
  FUNC_0(VAR_1->panel);
 }
}
