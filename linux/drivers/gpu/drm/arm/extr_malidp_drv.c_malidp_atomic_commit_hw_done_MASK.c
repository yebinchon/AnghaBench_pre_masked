
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* state; } ;
struct malidp_drm {int * event; TYPE_2__ crtc; } ;
struct drm_device {int event_lock; struct malidp_drm* dev_private; } ;
struct drm_atomic_state {struct drm_device* dev; } ;
struct TYPE_4__ {scalar_t__ active; int * event; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct malidp_drm *VAR_2 = VAR_1->dev_private;
 int VAR_3 = 5;

 VAR_2->event = VAR_2->crtc.state->event;
 VAR_2->crtc.state->event = ((void*)0);

 if (VAR_2->crtc.state->active) {





  if (VAR_2->event)
   FUNC_3(&VAR_2->crtc);


  if (FUNC_4(VAR_1) < 0) {




   while (VAR_3--) {
    if (!FUNC_4(VAR_1))
     break;
   }
   FUNC_0("timed out waiting for updated configuration\n");
  }

 } else if (VAR_2->event) {

  FUNC_5(&VAR_1->event_lock);
  FUNC_2(&VAR_2->crtc, VAR_2->event);
  VAR_2->event = ((void*)0);
  FUNC_6(&VAR_1->event_lock);
 }
 FUNC_1(VAR_0);
}
