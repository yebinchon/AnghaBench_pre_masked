
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dpi {scalar_t__ panel; int encoder; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct exynos_dpi* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_encoder *VAR_0)
{
 struct exynos_dpi *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->encoder);

 if (VAR_1->panel)
  FUNC_0(VAR_1->panel);

 return 0;
}
