
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int crtc_w; int rotation; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(const struct intel_crtc_state *VAR_6,
      const struct intel_plane_state *VAR_7)
{
 struct drm_i915_private *VAR_8 =
  FUNC_3(VAR_7->base.plane->dev);
 u32 VAR_9 = 0;

 if (FUNC_0(VAR_8, 6) || FUNC_1(VAR_8))
  VAR_9 |= VAR_5;

 switch (VAR_7->base.crtc_w) {
 case 64:
  VAR_9 |= VAR_3;
  break;
 case 128:
  VAR_9 |= VAR_1;
  break;
 case 256:
  VAR_9 |= VAR_2;
  break;
 default:
  FUNC_2(VAR_7->base.crtc_w);
  return 0;
 }

 if (VAR_7->base.rotation & VAR_0)
  VAR_9 |= VAR_4;

 return VAR_9;
}
