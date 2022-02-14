
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct exynos_drm_plane_state {struct drm_plane_state base; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct exynos_drm_plane_state* FUNC_1 (int,int ) ;
 struct exynos_drm_plane_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_3(struct drm_plane *VAR_1)
{
 struct exynos_drm_plane_state *VAR_2;
 struct exynos_drm_plane_state *VAR_3;

 VAR_2 = FUNC_2(VAR_1->state);
 VAR_3 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);
 return &VAR_3->base;
}
