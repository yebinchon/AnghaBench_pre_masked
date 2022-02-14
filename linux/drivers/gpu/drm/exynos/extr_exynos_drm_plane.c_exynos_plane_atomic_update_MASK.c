
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_plane {int dummy; } ;
struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct TYPE_2__ {int (* update_plane ) (struct exynos_drm_crtc*,struct exynos_drm_plane*) ;} ;


 int FUNC_0 (struct exynos_drm_crtc*,struct exynos_drm_plane*) ;
 struct exynos_drm_crtc* FUNC_1 (int ) ;
 struct exynos_drm_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
           struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_0->state;
 struct exynos_drm_crtc *VAR_3 = FUNC_1(VAR_2->crtc);
 struct exynos_drm_plane *VAR_4 = FUNC_2(VAR_0);

 if (!VAR_2->crtc)
  return;

 if (VAR_3->ops->update_plane)
  VAR_3->ops->update_plane(VAR_3, VAR_4);
}
