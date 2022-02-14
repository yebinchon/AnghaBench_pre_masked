
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct atmel_hlcdc_crtc {TYPE_2__* event; } ;
struct TYPE_4__ {int pipe; } ;
struct TYPE_3__ {TYPE_2__* event; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct atmel_hlcdc_crtc* FUNC_2 (struct drm_crtc*) ;
 scalar_t__ FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct atmel_hlcdc_crtc *VAR_2 = FUNC_2(VAR_0);

 if (VAR_0->state->event) {
  VAR_0->state->event->pipe = FUNC_1(VAR_0);

  FUNC_0(FUNC_3(VAR_0) != 0);

  VAR_2->event = VAR_0->state->event;
  VAR_0->state->event = ((void*)0);
 }
}
