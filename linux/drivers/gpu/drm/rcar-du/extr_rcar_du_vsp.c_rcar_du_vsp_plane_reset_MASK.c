
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zpos; } ;
struct rcar_du_vsp_plane_state {TYPE_1__ state; } ;
struct drm_plane {scalar_t__ type; int * state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_plane*,TYPE_1__*) ;
 struct rcar_du_vsp_plane_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_plane*,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_2)
{
 struct rcar_du_vsp_plane_state *VAR_3;

 if (VAR_2->state) {
  FUNC_2(VAR_2, VAR_2->state);
  VAR_2->state = ((void*)0);
 }

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_2, &VAR_3->state);
 VAR_3->state.zpos = VAR_2->type == VAR_0 ? 0 : 1;
}
