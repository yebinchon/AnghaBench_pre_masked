
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_plane_state {scalar_t__ source; } ;
struct rcar_du_plane {TYPE_1__* group; } ;
struct drm_plane_state {int visible; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct TYPE_2__ {int need_restart; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rcar_du_plane*) ;
 struct rcar_du_plane* FUNC_1 (struct drm_plane*) ;
 struct rcar_du_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct rcar_du_plane *VAR_3 = FUNC_1(VAR_1);
 struct rcar_du_plane_state *VAR_4;
 struct rcar_du_plane_state *VAR_5;

 if (!VAR_1->state->visible)
  return;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_2(VAR_1->state);

 if ((VAR_4->source == VAR_0) !=
     (VAR_5->source == VAR_0))
  VAR_3->group->need_restart = 1;
}
