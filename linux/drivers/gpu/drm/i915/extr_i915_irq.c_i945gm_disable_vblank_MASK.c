
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enabled; int work; } ;
struct drm_i915_private {TYPE_1__ i945gm_vblank; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int *) ;
 struct drm_i915_private* FUNC_2 (int ) ;

void FUNC_3(struct drm_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->dev);

 FUNC_0(VAR_0);

 if (--VAR_1->i945gm_vblank.enabled == 0)
  FUNC_1(&VAR_1->i945gm_vblank.work);
}
