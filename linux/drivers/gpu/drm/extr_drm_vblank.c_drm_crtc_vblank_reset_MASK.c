
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int inmodeset; int refcount; } ;
struct drm_device {int vblank_event_list; int vbl_lock; struct drm_vblank_crtc* vblank; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 unsigned long VAR_2;
 unsigned int VAR_3 = FUNC_2(VAR_0);
 struct drm_vblank_crtc *VAR_4 = &VAR_1->vblank[VAR_3];

 FUNC_4(&VAR_1->vbl_lock, VAR_2);




 if (!VAR_4->inmodeset) {
  FUNC_1(&VAR_4->refcount);
  VAR_4->inmodeset = 1;
 }
 FUNC_5(&VAR_1->vbl_lock, VAR_2);

 FUNC_0(!FUNC_3(&VAR_1->vblank_event_list));
}
