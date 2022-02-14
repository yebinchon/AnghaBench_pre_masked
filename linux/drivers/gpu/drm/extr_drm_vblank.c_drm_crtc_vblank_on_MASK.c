
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int refcount; scalar_t__ inmodeset; int enabled; } ;
struct drm_device {unsigned int num_crtcs; int vbl_lock; struct drm_vblank_crtc* vblank; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,unsigned int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_device*,unsigned int) ;
 int FUNC_6 (struct drm_device*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 unsigned int VAR_3 = FUNC_4(VAR_1);
 struct drm_vblank_crtc *VAR_4 = &VAR_2->vblank[VAR_3];
 unsigned long VAR_5;

 if (FUNC_1(VAR_3 >= VAR_2->num_crtcs))
  return;

 FUNC_7(&VAR_2->vbl_lock, VAR_5);
 FUNC_0("crtc %d, vblank enabled %d, inmodeset %d\n",
        VAR_3, VAR_4->enabled, VAR_4->inmodeset);


 if (VAR_4->inmodeset) {
  FUNC_2(&VAR_4->refcount);
  VAR_4->inmodeset = 0;
 }

 FUNC_5(VAR_2, VAR_3);





 if (FUNC_3(&VAR_4->refcount) != 0 || VAR_0 == 0)
  FUNC_1(FUNC_6(VAR_2, VAR_3));
 FUNC_8(&VAR_2->vbl_lock, VAR_5);
}
