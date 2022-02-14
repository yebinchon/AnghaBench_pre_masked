
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int inmodeset; } ;
struct drm_device {unsigned int num_crtcs; int vbl_lock; struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_device*,unsigned int) ;
 int FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0,
        unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];
 unsigned long VAR_3;


 if (!VAR_0->num_crtcs)
  return;

 if (FUNC_0(VAR_1 >= VAR_0->num_crtcs))
  return;

 if (VAR_2->inmodeset) {
  FUNC_3(&VAR_0->vbl_lock, VAR_3);
  FUNC_1(VAR_0, VAR_1);
  FUNC_4(&VAR_0->vbl_lock, VAR_3);

  if (VAR_2->inmodeset & 0x2)
   FUNC_2(VAR_0, VAR_1);

  VAR_2->inmodeset = 0;
 }
}
