
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_vblank_crtc {int max_vblank_count; int inmodeset; } ;
struct drm_device {int max_vblank_count; struct drm_vblank_crtc* vblank; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct drm_crtc*) ;

void FUNC_3(struct drm_crtc *VAR_0,
       u32 VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 unsigned int VAR_3 = FUNC_2(VAR_0);
 struct drm_vblank_crtc *VAR_4 = &VAR_2->vblank[VAR_3];

 FUNC_1(VAR_2->max_vblank_count);
 FUNC_1(!FUNC_0(VAR_4->inmodeset));

 VAR_4->max_vblank_count = VAR_1;
}
