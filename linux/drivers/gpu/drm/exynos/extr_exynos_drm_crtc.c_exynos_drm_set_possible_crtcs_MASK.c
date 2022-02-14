
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {int base; } ;
struct drm_encoder {int possible_crtcs; int dev; } ;
typedef enum exynos_drm_output_type { ____Placeholder_exynos_drm_output_type } exynos_drm_output_type ;


 scalar_t__ FUNC_0 (struct exynos_drm_crtc*) ;
 int FUNC_1 (struct exynos_drm_crtc*) ;
 int FUNC_2 (int *) ;
 struct exynos_drm_crtc* FUNC_3 (int ,int) ;

int FUNC_4(struct drm_encoder *VAR_0,
  enum exynos_drm_output_type VAR_1)
{
 struct exynos_drm_crtc *VAR_2 = FUNC_3(VAR_0->dev,
      VAR_1);

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_0->possible_crtcs = FUNC_2(&VAR_2->base);

 return 0;
}
