
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct tegra_plane_state {struct drm_plane_state base; int * blending; int opaque; int bottom_up; int swap; int format; int tiling; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct tegra_plane_state* FUNC_1 (int,int ) ;
 struct tegra_plane_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_3(struct drm_plane *VAR_1)
{
 struct tegra_plane_state *VAR_2 = FUNC_2(VAR_1->state);
 struct tegra_plane_state *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);
 VAR_3->tiling = VAR_2->tiling;
 VAR_3->format = VAR_2->format;
 VAR_3->swap = VAR_2->swap;
 VAR_3->bottom_up = VAR_2->bottom_up;
 VAR_3->opaque = VAR_2->opaque;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  VAR_3->blending[VAR_4] = VAR_2->blending[VAR_4];

 return &VAR_3->base;
}
