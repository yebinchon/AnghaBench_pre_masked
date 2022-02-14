
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct exynos_drm_plane_state {int base; } ;
struct exynos_drm_plane {TYPE_1__* config; } ;
struct drm_plane {TYPE_2__* state; } ;
struct TYPE_5__ {int zpos; } ;
struct TYPE_4__ {int zpos; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (struct exynos_drm_plane_state*) ;
 struct exynos_drm_plane_state* FUNC_3 (int,int ) ;
 struct exynos_drm_plane* FUNC_4 (struct drm_plane*) ;
 struct exynos_drm_plane_state* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_1)
{
 struct exynos_drm_plane *VAR_2 = FUNC_4(VAR_1);
 struct exynos_drm_plane_state *VAR_3;

 if (VAR_1->state) {
  VAR_3 = FUNC_5(VAR_1->state);
  FUNC_0(VAR_1->state);
  FUNC_2(VAR_3);
  VAR_1->state = ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_1, &VAR_3->base);
  VAR_1->state->zpos = VAR_2->config->zpos;
 }
}
