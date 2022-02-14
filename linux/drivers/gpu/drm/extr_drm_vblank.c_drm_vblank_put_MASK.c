
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int disable_timer; int refcount; } ;
struct drm_device {unsigned int num_crtcs; int vblank_disable_immediate; struct drm_vblank_crtc* vblank; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_3, unsigned int VAR_4)
{
 struct drm_vblank_crtc *VAR_5 = &VAR_3->vblank[VAR_4];

 if (FUNC_0(VAR_4 >= VAR_3->num_crtcs))
  return;

 if (FUNC_0(FUNC_2(&VAR_5->refcount) == 0))
  return;


 if (FUNC_1(&VAR_5->refcount)) {
  if (VAR_1 == 0)
   return;
  else if (VAR_1 < 0)
   FUNC_4(&VAR_5->disable_timer);
  else if (!VAR_3->vblank_disable_immediate)
   FUNC_3(&VAR_5->disable_timer,
      VAR_2 + ((VAR_1 * VAR_0)/1000));
 }
}
