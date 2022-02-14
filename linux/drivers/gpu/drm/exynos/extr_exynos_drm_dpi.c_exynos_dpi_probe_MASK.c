
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct exynos_dpi {struct drm_encoder encoder; int panel; scalar_t__ panel_node; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct drm_encoder* FUNC_0 (int ) ;
 struct drm_encoder* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct exynos_dpi*) ;
 struct exynos_dpi* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct exynos_dpi*) ;
 int FUNC_6 (scalar_t__) ;

struct drm_encoder *FUNC_7(struct device *VAR_2)
{
 struct exynos_dpi *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_1(-VAR_0);

 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0) {
  FUNC_3(VAR_2, VAR_3);
  return ((void*)0);
 }

 if (VAR_3->panel_node) {
  VAR_3->panel = FUNC_6(VAR_3->panel_node);
  if (FUNC_2(VAR_3->panel))
   return FUNC_0(VAR_3->panel);
 }

 return &VAR_3->encoder;
}
