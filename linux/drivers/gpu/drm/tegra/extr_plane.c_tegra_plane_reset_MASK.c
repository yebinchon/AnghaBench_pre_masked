
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int normalized_zpos; int zpos; struct drm_plane* plane; } ;
struct tegra_plane_state {TYPE_1__ base; } ;
struct tegra_plane {int index; } ;
struct drm_plane {TYPE_1__* state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct tegra_plane_state* FUNC_2 (int,int ) ;
 struct tegra_plane* FUNC_3 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_1)
{
 struct tegra_plane *VAR_2 = FUNC_3(VAR_1);
 struct tegra_plane_state *VAR_3;

 if (VAR_1->state)
  FUNC_0(VAR_1->state);

 FUNC_1(VAR_1->state);
 VAR_1->state = ((void*)0);

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_1->state = &VAR_3->base;
  VAR_1->state->plane = VAR_1;
  VAR_1->state->zpos = VAR_2->index;
  VAR_1->state->normalized_zpos = VAR_2->index;
 }
}
