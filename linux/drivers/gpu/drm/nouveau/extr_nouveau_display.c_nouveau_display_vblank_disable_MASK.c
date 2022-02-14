
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_crtc {int vblank; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 struct drm_crtc* FUNC_0 (struct drm_device*,unsigned int) ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_crtc *VAR_2;
 struct nouveau_crtc *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(&VAR_3->vblank);
}
