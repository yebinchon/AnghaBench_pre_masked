
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int (* mode_valid ) (struct exynos_drm_crtc*,struct drm_display_mode const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct exynos_drm_crtc*,struct drm_display_mode const*) ;
 struct exynos_drm_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_crtc *VAR_1,
 const struct drm_display_mode *VAR_2)
{
 struct exynos_drm_crtc *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->ops->mode_valid)
  return VAR_3->ops->mode_valid(VAR_3, VAR_2);

 return VAR_0;
}
