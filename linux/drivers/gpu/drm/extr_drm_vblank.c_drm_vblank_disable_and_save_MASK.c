
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int enabled; } ;
struct drm_device {int vblank_time_lock; int vbl_lock; struct drm_vblank_crtc* vblank; } ;


 int FUNC_0 (struct drm_device*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];
 unsigned long VAR_3;

 FUNC_1(&VAR_0->vbl_lock);





 FUNC_3(&VAR_0->vblank_time_lock, VAR_3);







 if (!VAR_2->enabled)
  goto out;







 FUNC_2(VAR_0, VAR_1, 0);
 FUNC_0(VAR_0, VAR_1);
 VAR_2->enabled = 0;

out:
 FUNC_4(&VAR_0->vblank_time_lock, VAR_3);
}
