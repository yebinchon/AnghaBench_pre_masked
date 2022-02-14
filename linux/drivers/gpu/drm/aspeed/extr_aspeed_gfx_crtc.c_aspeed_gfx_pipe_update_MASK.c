
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state; } ;
struct drm_crtc {TYPE_4__* dev; TYPE_3__* state; } ;
struct drm_simple_display_pipe {TYPE_2__ plane; struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_gem_cma_object {int paddr; } ;
struct drm_framebuffer {int dummy; } ;
struct aspeed_gfx {scalar_t__ base; } ;
struct TYPE_8__ {int event_lock; } ;
struct TYPE_7__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 struct drm_gem_cma_object* FUNC_3 (struct drm_framebuffer*,int ) ;
 struct aspeed_gfx* FUNC_4 (struct drm_simple_display_pipe*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct aspeed_gfx *VAR_3 = FUNC_4(VAR_1);
 struct drm_crtc *VAR_4 = &VAR_1->crtc;
 struct drm_framebuffer *VAR_5 = VAR_1->plane.state->fb;
 struct drm_pending_vblank_event *VAR_6;
 struct drm_gem_cma_object *VAR_7;

 FUNC_5(&VAR_4->dev->event_lock);
 VAR_6 = VAR_4->state->event;
 if (VAR_6) {
  VAR_4->state->event = ((void*)0);

  if (FUNC_2(VAR_4) == 0)
   FUNC_0(VAR_4, VAR_6);
  else
   FUNC_1(VAR_4, VAR_6);
 }
 FUNC_6(&VAR_4->dev->event_lock);

 if (!VAR_5)
  return;

 VAR_7 = FUNC_3(VAR_5, 0);
 if (!VAR_7)
  return;
 FUNC_7(VAR_7->paddr, VAR_3->base + VAR_0);
}
