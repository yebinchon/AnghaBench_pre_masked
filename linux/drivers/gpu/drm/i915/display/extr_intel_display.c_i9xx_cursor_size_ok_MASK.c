
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int crtc_w; int crtc_h; int rotation; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_plane_state const*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct intel_plane_state *VAR_1)
{
 struct drm_i915_private *VAR_2 =
  FUNC_2(VAR_1->base.plane->dev);
 int VAR_3 = VAR_1->base.crtc_w;
 int VAR_4 = VAR_1->base.crtc_h;

 if (!FUNC_1(VAR_1))
  return 0;


 switch (VAR_3) {
 case 256:
 case 128:
 case 64:
  break;
 default:
  return 0;
 }







 if (FUNC_0(VAR_2) &&
     VAR_1->base.rotation & VAR_0) {
  if (VAR_4 < 8 || VAR_4 > VAR_3)
   return 0;
 } else {
  if (VAR_4 != VAR_3)
   return 0;
 }

 return 1;
}
