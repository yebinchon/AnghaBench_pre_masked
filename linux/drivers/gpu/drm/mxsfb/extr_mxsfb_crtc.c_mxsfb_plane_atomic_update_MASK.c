
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_crtc {TYPE_2__* dev; TYPE_1__* state; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct mxsfb_drm_private {TYPE_3__* devdata; scalar_t__ base; struct drm_simple_display_pipe pipe; } ;
struct drm_plane_state {int dummy; } ;
struct drm_pending_vblank_event {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ next_buf; } ;
struct TYPE_5__ {int event_lock; } ;
struct TYPE_4__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct mxsfb_drm_private*) ;
 int FUNC_4 (struct mxsfb_drm_private*) ;
 scalar_t__ FUNC_5 (struct mxsfb_drm_private*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

void FUNC_9(struct mxsfb_drm_private *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct drm_simple_display_pipe *VAR_2 = &VAR_0->pipe;
 struct drm_crtc *VAR_3 = &VAR_2->crtc;
 struct drm_pending_vblank_event *VAR_4;
 dma_addr_t VAR_5;

 FUNC_6(&VAR_3->dev->event_lock);
 VAR_4 = VAR_3->state->event;
 if (VAR_4) {
  VAR_3->state->event = ((void*)0);

  if (FUNC_2(VAR_3) == 0) {
   FUNC_0(VAR_3, VAR_4);
  } else {
   FUNC_1(VAR_3, VAR_4);
  }
 }
 FUNC_7(&VAR_3->dev->event_lock);

 VAR_5 = FUNC_5(VAR_0);
 if (VAR_5) {
  FUNC_4(VAR_0);
  FUNC_8(VAR_5, VAR_0->base + VAR_0->devdata->next_buf);
  FUNC_3(VAR_0);
 }
}
