
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_vblank_crtc {int count; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u64 FUNC_1(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];

 if (FUNC_0(VAR_1 >= VAR_0->num_crtcs))
  return 0;

 return VAR_2->count;
}
