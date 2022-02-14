
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int crtc; } ;
struct exynos_dsi {int state; struct drm_encoder encoder; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct exynos_dsi *VAR_4 = (struct exynos_dsi *)VAR_3;
 struct drm_encoder *VAR_5 = &VAR_4->encoder;

 if (VAR_4->state & VAR_0)
  FUNC_0(VAR_5->crtc);

 return VAR_1;
}
