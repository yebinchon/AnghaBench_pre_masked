
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* dev; TYPE_1__* state; } ;
struct TYPE_4__ {int event_lock; } ;
struct TYPE_3__ {int * event; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)

{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->dev->event_lock, VAR_2);
 if (VAR_0->state->event)
  FUNC_0(VAR_0, VAR_0->state->event);
 VAR_0->state->event = ((void*)0);
 FUNC_2(&VAR_0->dev->event_lock, VAR_2);
}
