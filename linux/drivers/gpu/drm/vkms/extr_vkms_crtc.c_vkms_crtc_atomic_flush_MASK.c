
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vkms_output {int lock; int composer_state; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_4__ {int * event; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 struct vkms_output* FUNC_2 (struct drm_crtc*) ;
 scalar_t__ FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct vkms_output *VAR_2 = FUNC_2(VAR_0);

 if (VAR_0->state->event) {
  FUNC_4(&VAR_0->dev->event_lock);

  if (FUNC_3(VAR_0) != 0)
   FUNC_1(VAR_0, VAR_0->state->event);
  else
   FUNC_0(VAR_0, VAR_0->state->event);

  FUNC_5(&VAR_0->dev->event_lock);

  VAR_0->state->event = ((void*)0);
 }

 VAR_2->composer_state = FUNC_7(VAR_0->state);

 FUNC_6(&VAR_2->lock);
}
