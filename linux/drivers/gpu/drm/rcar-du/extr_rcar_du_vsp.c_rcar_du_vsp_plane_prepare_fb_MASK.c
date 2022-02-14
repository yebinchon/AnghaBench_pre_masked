
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


 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_1 (struct rcar_du_vsp*,int ,int ) ;
 TYPE_1__* FUNC_2 (struct drm_plane*) ;
 struct rcar_du_vsp_plane_state* FUNC_3 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct rcar_du_vsp_plane_state *VAR_2 = FUNC_3(VAR_1);
 struct rcar_du_vsp *VAR_3 = FUNC_2(VAR_0)->vsp;
 int VAR_4;





 if (!VAR_1->visible)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1->fb, VAR_2->sg_tables);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1);
}
