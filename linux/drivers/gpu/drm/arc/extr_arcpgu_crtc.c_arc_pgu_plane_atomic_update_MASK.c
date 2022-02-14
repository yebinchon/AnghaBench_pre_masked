
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_gem_cma_object {int paddr; } ;
struct arcpgu_drm_private {int dummy; } ;
struct TYPE_2__ {int fb; int crtc; } ;


 int VAR_0 ;
 int FUNC_0 (struct arcpgu_drm_private*,int ,int ) ;
 struct arcpgu_drm_private* FUNC_1 (int ) ;
 struct drm_gem_cma_object* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct arcpgu_drm_private *VAR_3;
 struct drm_gem_cma_object *VAR_4;

 if (!VAR_1->state->crtc || !VAR_1->state->fb)
  return;

 VAR_3 = FUNC_1(VAR_1->state->crtc);
 VAR_4 = FUNC_2(VAR_1->state->fb, 0);
 FUNC_0(VAR_3, VAR_0, VAR_4->paddr);
}
