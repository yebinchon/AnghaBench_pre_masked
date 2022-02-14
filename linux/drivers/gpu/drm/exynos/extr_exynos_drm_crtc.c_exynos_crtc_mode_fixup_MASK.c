
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* mode_fixup ) (struct exynos_drm_crtc*,struct drm_display_mode const*,struct drm_display_mode*) ;} ;


 int FUNC_0 (struct exynos_drm_crtc*,struct drm_display_mode const*,struct drm_display_mode*) ;
 struct exynos_drm_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_2(struct drm_crtc *VAR_0,
  const struct drm_display_mode *VAR_1,
  struct drm_display_mode *VAR_2)
{
 struct exynos_drm_crtc *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->ops->mode_fixup)
  return VAR_3->ops->mode_fixup(VAR_3, VAR_1,
    VAR_2);

 return 1;
}
