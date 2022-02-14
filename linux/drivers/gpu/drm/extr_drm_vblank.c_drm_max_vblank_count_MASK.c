
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_vblank_crtc {scalar_t__ max_vblank_count; } ;
struct drm_device {int max_vblank_count; struct drm_vblank_crtc* vblank; } ;



__attribute__((used)) static u32 FUNC_0(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];

 return VAR_2->max_vblank_count ?: VAR_0->max_vblank_count;
}
