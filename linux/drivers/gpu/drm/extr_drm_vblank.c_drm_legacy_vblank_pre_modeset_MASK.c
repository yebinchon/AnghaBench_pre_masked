
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int inmodeset; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_device*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0,
       unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];


 if (!VAR_0->num_crtcs)
  return;

 if (FUNC_0(VAR_1 >= VAR_0->num_crtcs))
  return;
 if (!VAR_2->inmodeset) {
  VAR_2->inmodeset = 0x1;
  if (FUNC_1(VAR_0, VAR_1) == 0)
   VAR_2->inmodeset |= 0x2;
 }
}
