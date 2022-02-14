
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int refcount; int enabled; } ;
struct drm_device {unsigned int num_crtcs; int vbl_lock; struct drm_vblank_crtc* vblank; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_1, unsigned int VAR_2)
{
 struct drm_vblank_crtc *VAR_3 = &VAR_1->vblank[VAR_2];
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!VAR_1->num_crtcs)
  return -VAR_0;

 if (FUNC_0(VAR_2 >= VAR_1->num_crtcs))
  return -VAR_0;

 FUNC_4(&VAR_1->vbl_lock, VAR_4);

 if (FUNC_1(1, &VAR_3->refcount) == 1) {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
 } else {
  if (!VAR_3->enabled) {
   FUNC_2(&VAR_3->refcount);
   VAR_5 = -VAR_0;
  }
 }
 FUNC_5(&VAR_1->vbl_lock, VAR_4);

 return VAR_5;
}
