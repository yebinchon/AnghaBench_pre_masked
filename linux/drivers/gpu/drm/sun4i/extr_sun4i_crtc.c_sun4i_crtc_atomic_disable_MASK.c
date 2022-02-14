
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_crtc {int tcon; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_4__ {int * event; int active; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 struct sun4i_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct drm_encoder* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int ,struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 struct drm_encoder *VAR_2 = FUNC_6(VAR_0);
 struct sun4i_crtc *VAR_3 = FUNC_2(VAR_0);

 FUNC_0("Disabling the CRTC\n");

 FUNC_3(VAR_0);

 FUNC_7(VAR_3->tcon, VAR_2, 0);

 if (VAR_0->state->event && !VAR_0->state->active) {
  FUNC_4(&VAR_0->dev->event_lock);
  FUNC_1(VAR_0, VAR_0->state->event);
  FUNC_5(&VAR_0->dev->event_lock);

  VAR_0->state->event = ((void*)0);
 }
}
