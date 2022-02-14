
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* disable_vblank ) (struct exynos_drm_crtc*) ;} ;


 int FUNC_0 (struct exynos_drm_crtc*) ;
 struct exynos_drm_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct exynos_drm_crtc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ops->disable_vblank)
  VAR_1->ops->disable_vblank(VAR_1);
}
