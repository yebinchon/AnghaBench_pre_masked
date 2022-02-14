
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct vop {int fb_unref_work; int pending; int * event; struct drm_crtc crtc; struct drm_device* drm_dev; } ;
struct drm_device {int event_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct vop *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->drm_dev;
 struct drm_crtc *VAR_4 = &VAR_2->crtc;

 FUNC_3(&VAR_3->event_lock);
 if (VAR_2->event) {
  FUNC_0(VAR_4, VAR_2->event);
  FUNC_1(VAR_4);
  VAR_2->event = ((void*)0);
 }
 FUNC_4(&VAR_3->event_lock);

 if (FUNC_5(VAR_0, &VAR_2->pending))
  FUNC_2(&VAR_2->fb_unref_work, VAR_1);
}
