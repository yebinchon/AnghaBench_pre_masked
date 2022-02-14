
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_device* dev; } ;
struct shmob_drm_crtc {TYPE_1__ crtc; struct drm_pending_vblank_event* event; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (TYPE_1__*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct shmob_drm_crtc *VAR_0)
{
 struct drm_pending_vblank_event *VAR_1;
 struct drm_device *VAR_2 = VAR_0->crtc.dev;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->event_lock, VAR_3);
 VAR_1 = VAR_0->event;
 VAR_0->event = ((void*)0);
 if (VAR_1) {
  FUNC_0(&VAR_0->crtc, VAR_1);
  FUNC_1(&VAR_0->crtc);
 }
 FUNC_3(&VAR_2->event_lock, VAR_3);
}
