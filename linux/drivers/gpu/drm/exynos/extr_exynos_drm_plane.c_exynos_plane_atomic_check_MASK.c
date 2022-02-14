
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_plane_state {int dummy; } ;
struct exynos_drm_plane {int config; } ;
struct drm_plane_state {int fb; int crtc; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (int ,struct exynos_drm_plane_state*) ;
 int FUNC_1 (int ,struct exynos_drm_plane_state*) ;
 int FUNC_2 (struct exynos_drm_plane_state*) ;
 struct exynos_drm_plane* FUNC_3 (struct drm_plane*) ;
 struct exynos_drm_plane_state* FUNC_4 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct exynos_drm_plane *VAR_2 = FUNC_3(VAR_0);
 struct exynos_drm_plane_state *VAR_3 =
      FUNC_4(VAR_1);
 int VAR_4 = 0;

 if (!VAR_1->crtc || !VAR_1->fb)
  return 0;


 FUNC_2(VAR_3);

 VAR_4 = FUNC_0(VAR_2->config, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2->config, VAR_3);
 return VAR_4;
}
