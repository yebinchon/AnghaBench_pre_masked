
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_plane_state {scalar_t__ bo_size; scalar_t__ bo; } ;
struct drm_plane_state {struct drm_crtc* crtc; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_crtc {int dev; } ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;


 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_state*) ;
 struct vmw_plane_state* FUNC_3 (struct drm_plane_state*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct vmw_plane_state *VAR_2 = FUNC_3(VAR_1);
 struct drm_crtc *VAR_3 = VAR_0->state->crtc ?
  VAR_0->state->crtc : VAR_1->crtc;

 if (VAR_2->bo)
  FUNC_0(FUNC_4(VAR_3->dev), VAR_2->bo, 0);
 FUNC_1(&VAR_2->bo);
 VAR_2->bo_size = 0;

 FUNC_2(VAR_0, VAR_1);
}
