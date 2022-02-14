
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_crtc crtc; } ;
struct xen_drm_front_drm_pipeline {int * pending_event; TYPE_1__ pipe; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct xen_drm_front_drm_pipeline *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->pipe.crtc;
 struct drm_device *VAR_2 = VAR_1->dev;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->event_lock, VAR_3);
 if (VAR_0->pending_event)
  FUNC_0(VAR_1, VAR_0->pending_event);
 VAR_0->pending_event = ((void*)0);
 FUNC_2(&VAR_2->event_lock, VAR_3);
}
