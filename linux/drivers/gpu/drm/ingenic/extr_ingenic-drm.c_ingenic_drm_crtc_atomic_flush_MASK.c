
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ingenic_drm {TYPE_5__* dma_hwdesc; int map; int pix_clk; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_format_info {int dummy; } ;
struct TYPE_10__ {int clock; } ;
struct drm_crtc_state {struct drm_pending_vblank_event* event; TYPE_4__ adjusted_mode; int mode; } ;
struct drm_crtc {TYPE_6__* dev; TYPE_2__* primary; struct drm_crtc_state* state; } ;
struct TYPE_12__ {int event_lock; } ;
struct TYPE_11__ {int next; } ;
struct TYPE_9__ {int format; } ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_7__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 struct ingenic_drm* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_5 (struct drm_crtc*) ;
 struct drm_format_info* FUNC_6 (int ) ;
 int FUNC_7 (struct ingenic_drm*,struct drm_format_info const*) ;
 int FUNC_8 (struct ingenic_drm*,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_1,
       struct drm_crtc_state *VAR_2)
{
 struct ingenic_drm *VAR_3 = FUNC_3(VAR_1);
 struct drm_crtc_state *VAR_4 = VAR_1->state;
 struct drm_pending_vblank_event *VAR_5 = VAR_4->event;
 struct drm_framebuffer *VAR_6 = VAR_1->primary->state->fb;
 const struct drm_format_info *VAR_7;

 if (FUNC_1(VAR_4)) {
  VAR_7 = FUNC_6(VAR_6->format->format);

  FUNC_8(VAR_3, &VAR_4->mode);
  FUNC_7(VAR_3, VAR_7);

  FUNC_0(VAR_3->pix_clk, VAR_4->adjusted_mode.clock * 1000);

  FUNC_9(VAR_3->map, VAR_0, VAR_3->dma_hwdesc->next);
 }

 if (VAR_5) {
  VAR_4->event = ((void*)0);

  FUNC_10(&VAR_1->dev->event_lock);
  if (FUNC_5(VAR_1) == 0)
   FUNC_2(VAR_1, VAR_5);
  else
   FUNC_4(VAR_1, VAR_5);
  FUNC_11(&VAR_1->dev->event_lock);
 }
}
