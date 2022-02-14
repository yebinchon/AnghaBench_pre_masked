
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned int rotation; scalar_t__ color_encoding; scalar_t__ color_range; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct drm_intel_sprite_colorkey {int flags; } ;
struct intel_plane_state {TYPE_3__ base; struct drm_intel_sprite_colorkey ckey; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; TYPE_2__* format; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(const struct intel_crtc_state *VAR_22,
     const struct intel_plane_state *VAR_23)
{
 struct drm_i915_private *VAR_24 =
  FUNC_2(VAR_23->base.plane->dev);
 const struct drm_framebuffer *VAR_25 = VAR_23->base.fb;
 unsigned int VAR_26 = VAR_23->base.rotation;
 const struct drm_intel_sprite_colorkey *VAR_27 = &VAR_23->ckey;
 u32 VAR_28;

 VAR_28 = VAR_7;

 if (FUNC_0(VAR_24))
  VAR_28 |= VAR_15;

 switch (VAR_25->format->format) {
 case 131:
  VAR_28 |= VAR_8 | VAR_11;
  break;
 case 130:
  VAR_28 |= VAR_8;
  break;
 case 129:
  VAR_28 |= VAR_9 | VAR_18;
  break;
 case 128:
  VAR_28 |= VAR_9 | VAR_19;
  break;
 case 133:
  VAR_28 |= VAR_9 | VAR_16;
  break;
 case 132:
  VAR_28 |= VAR_9 | VAR_17;
  break;
 default:
  FUNC_1(VAR_25->format->format);
  return 0;
 }

 VAR_28 |= VAR_10;

 if (VAR_23->base.color_encoding == VAR_0)
  VAR_28 |= VAR_21;

 if (VAR_23->base.color_range == VAR_1)
  VAR_28 |= VAR_20;

 if (VAR_25->modifier == VAR_3)
  VAR_28 |= VAR_14;

 if (VAR_26 & VAR_2)
  VAR_28 |= VAR_12;

 if (VAR_27->flags & VAR_4)
  VAR_28 |= VAR_6;
 else if (VAR_27->flags & VAR_5)
  VAR_28 |= VAR_13;

 return VAR_28;
}
