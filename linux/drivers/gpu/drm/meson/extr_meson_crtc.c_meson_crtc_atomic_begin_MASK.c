
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct meson_crtc {int * event; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; TYPE_2__* dev; } ;
struct TYPE_4__ {int event_lock; } ;
struct TYPE_3__ {int * event; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct meson_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct meson_crtc *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;

 if (VAR_0->state->event) {
  FUNC_0(FUNC_1(VAR_0) != 0);

  FUNC_2(&VAR_0->dev->event_lock, VAR_3);
  VAR_2->event = VAR_0->state->event;
  FUNC_3(&VAR_0->dev->event_lock, VAR_3);
  VAR_0->state->event = ((void*)0);
 }
}
