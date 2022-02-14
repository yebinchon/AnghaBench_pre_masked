
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipu_crtc {int * event; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; TYPE_2__* state; } ;
struct TYPE_4__ {int * event; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ipu_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 FUNC_2(&VAR_0->dev->event_lock);
 if (VAR_0->state->event) {
  struct ipu_crtc *VAR_2 = FUNC_4(VAR_0);

  FUNC_0(FUNC_1(VAR_0));
  VAR_2->event = VAR_0->state->event;
  VAR_0->state->event = ((void*)0);
 }
 FUNC_3(&VAR_0->dev->event_lock);
}
