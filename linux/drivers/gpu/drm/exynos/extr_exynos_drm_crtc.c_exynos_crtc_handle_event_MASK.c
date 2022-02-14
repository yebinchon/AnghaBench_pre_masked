
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; TYPE_2__* state; } ;
struct exynos_drm_crtc {struct drm_crtc base; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct TYPE_4__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct exynos_drm_crtc *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->base;
 struct drm_pending_vblank_event *VAR_2 = VAR_1->state->event;
 unsigned long VAR_3;

 if (!VAR_2)
  return;
 VAR_1->state->event = ((void*)0);

 FUNC_0(FUNC_2(VAR_1) != 0);

 FUNC_3(&VAR_1->dev->event_lock, VAR_3);
 FUNC_1(VAR_1, VAR_2);
 FUNC_4(&VAR_1->dev->event_lock, VAR_3);
}
