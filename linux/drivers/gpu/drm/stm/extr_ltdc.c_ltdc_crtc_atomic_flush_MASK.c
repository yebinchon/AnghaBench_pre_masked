
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltdc_device {int regs; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ltdc_device* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_2,
       struct drm_crtc_state *VAR_3)
{
 struct ltdc_device *VAR_4 = FUNC_1(VAR_2);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct drm_pending_vblank_event *VAR_6 = VAR_2->state->event;

 FUNC_0("\n");

 FUNC_5(VAR_2);


 FUNC_6(VAR_4->regs, VAR_0, VAR_1);

 if (VAR_6) {
  VAR_2->state->event = ((void*)0);

  FUNC_7(&VAR_5->event_lock);
  if (FUNC_4(VAR_2) == 0)
   FUNC_2(VAR_2, VAR_6);
  else
   FUNC_3(VAR_2, VAR_6);
  FUNC_8(&VAR_5->event_lock);
 }
}
