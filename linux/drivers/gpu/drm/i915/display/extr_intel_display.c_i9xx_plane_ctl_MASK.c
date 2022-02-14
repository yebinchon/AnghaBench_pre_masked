
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned int rotation; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; TYPE_3__* format; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;







 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(const struct intel_crtc_state *VAR_15,
     const struct intel_plane_state *VAR_16)
{
 struct drm_i915_private *VAR_17 =
  FUNC_5(VAR_16->base.plane->dev);
 const struct drm_framebuffer *VAR_18 = VAR_16->base.fb;
 unsigned int VAR_19 = VAR_16->base.rotation;
 u32 VAR_20;

 VAR_20 = VAR_0;

 if (FUNC_1(VAR_17) || FUNC_2(VAR_17, 5) ||
     FUNC_2(VAR_17, 6) || FUNC_3(VAR_17))
  VAR_20 |= VAR_11;

 switch (VAR_18->format->format) {
 case 134:
  VAR_20 |= VAR_1;
  break;
 case 130:
  VAR_20 |= VAR_3;
  break;
 case 133:
  VAR_20 |= VAR_4;
  break;
 case 128:
  VAR_20 |= VAR_5;
  break;
 case 131:
  VAR_20 |= VAR_8;
  break;
 case 129:
  VAR_20 |= VAR_2;
  break;
 case 132:
  VAR_20 |= VAR_7;
  break;
 default:
  FUNC_4(VAR_18->format->format);
  return 0;
 }

 if (FUNC_0(VAR_17) >= 4 &&
     VAR_18->modifier == VAR_14)
  VAR_20 |= VAR_10;

 if (VAR_19 & VAR_13)
  VAR_20 |= VAR_9;

 if (VAR_19 & VAR_12)
  VAR_20 |= VAR_6;

 return VAR_20;
}
