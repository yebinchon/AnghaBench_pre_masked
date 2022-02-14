
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_plane {int dummy; } ;
struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {int (* disable_plane ) (struct exynos_drm_crtc*,struct exynos_drm_plane*) ;} ;


 int FUNC_0 (struct exynos_drm_crtc*,struct exynos_drm_plane*) ;
 struct exynos_drm_crtc* FUNC_1 (int ) ;
 struct exynos_drm_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct exynos_drm_plane *VAR_2 = FUNC_2(VAR_0);
 struct exynos_drm_crtc *VAR_3 = FUNC_1(VAR_1->crtc);

 if (!VAR_1->crtc)
  return;

 if (VAR_3->ops->disable_plane)
  VAR_3->ops->disable_plane(VAR_3, VAR_2);
}
