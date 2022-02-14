
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_du_vsp_plane {int index; TYPE_2__* vsp; } ;
struct rcar_du_crtc {int vsp_pipe; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_4__ {int vsp; } ;
struct TYPE_3__ {scalar_t__ visible; } ;


 int FUNC_0 (struct rcar_du_vsp_plane*) ;
 struct rcar_du_crtc* FUNC_1 (int ) ;
 struct rcar_du_vsp_plane* FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct rcar_du_vsp_plane *VAR_2 = FUNC_2(VAR_0);
 struct rcar_du_crtc *VAR_3 = FUNC_1(VAR_1->crtc);

 if (VAR_0->state->visible)
  FUNC_0(VAR_2);
 else
  FUNC_3(VAR_2->vsp->vsp, VAR_3->vsp_pipe,
          VAR_2->index, ((void*)0));
}
