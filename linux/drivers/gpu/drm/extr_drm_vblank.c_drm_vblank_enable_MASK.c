
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int enabled; int refcount; } ;
struct drm_device {int vblank_time_lock; int vbl_lock; struct drm_vblank_crtc* vblank; } ;


 int FUNC_0 (char*,unsigned int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,unsigned int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];
 int VAR_3 = 0;

 FUNC_3(&VAR_0->vbl_lock);

 FUNC_6(&VAR_0->vblank_time_lock);

 if (!VAR_2->enabled) {







  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_0("enabling vblank on crtc %u, ret: %d\n", VAR_1, VAR_3);
  if (VAR_3) {
   FUNC_4(&VAR_2->refcount);
  } else {
   FUNC_5(VAR_0, VAR_1, 0);





   FUNC_1(VAR_2->enabled, 1);
  }
 }

 FUNC_7(&VAR_0->vblank_time_lock);

 return VAR_3;
}
