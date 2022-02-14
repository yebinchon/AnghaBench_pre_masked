
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int disable_timer; int enabled; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_vblank_crtc*) ;

void FUNC_5(struct drm_device *VAR_1)
{
 unsigned int VAR_2;


 if (VAR_1->num_crtcs == 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_crtcs; VAR_2++) {
  struct drm_vblank_crtc *VAR_3 = &VAR_1->vblank[VAR_2];

  FUNC_1(FUNC_0(VAR_3->enabled) &&
   FUNC_3(VAR_1, VAR_0));

  FUNC_2(&VAR_3->disable_timer);
 }

 FUNC_4(VAR_1->vblank);

 VAR_1->num_crtcs = 0;
}
