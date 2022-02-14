
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vc4_plane_state {size_t ptr0_offset; scalar_t__* dlist; int * hw_dlist; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {scalar_t__* offsets; } ;
struct TYPE_2__ {scalar_t__ crtc_x; scalar_t__ crtc_y; } ;


 int FUNC_0 (int) ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,int ) ;
 struct vc4_plane_state* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int *) ;

void FUNC_4(struct drm_plane *VAR_0, struct drm_framebuffer *VAR_1)
{
 struct vc4_plane_state *VAR_2 = FUNC_2(VAR_0->state);
 struct drm_gem_cma_object *VAR_3 = FUNC_1(VAR_1, 0);
 uint32_t VAR_4;




 FUNC_0(VAR_0->state->crtc_x < 0 || VAR_0->state->crtc_y < 0);
 VAR_4 = VAR_3->paddr + VAR_1->offsets[0];





 FUNC_3(VAR_4, &VAR_2->hw_dlist[VAR_2->ptr0_offset]);





 VAR_2->dlist[VAR_2->ptr0_offset] = VAR_4;
}
