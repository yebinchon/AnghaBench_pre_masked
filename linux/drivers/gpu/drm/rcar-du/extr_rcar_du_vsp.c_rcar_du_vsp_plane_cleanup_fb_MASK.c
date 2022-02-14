
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_vsp_plane_state {int sg_tables; } ;
struct rcar_du_vsp {int dummy; } ;
struct drm_plane_state {int fb; int visible; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {struct rcar_du_vsp* vsp; } ;


 int FUNC_0 (struct rcar_du_vsp*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct drm_plane*) ;
 struct rcar_du_vsp_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct rcar_du_vsp_plane_state *VAR_2 = FUNC_2(VAR_1);
 struct rcar_du_vsp *VAR_3 = FUNC_1(VAR_0)->vsp;

 if (!VAR_1->visible)
  return;

 FUNC_0(VAR_3, VAR_1->fb, VAR_2->sg_tables);
}
