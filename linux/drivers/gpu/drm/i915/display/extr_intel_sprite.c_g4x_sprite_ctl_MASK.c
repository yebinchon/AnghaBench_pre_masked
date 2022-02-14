
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(const struct intel_crtc_state *VAR_21,
     const struct intel_plane_state *VAR_22)
{
 struct drm_i915_private *VAR_23 =
  FUNC_2(VAR_22->base.plane->dev);
 const struct drm_framebuffer *VAR_24 = VAR_22->base.fb;
 unsigned int VAR_25 = VAR_22->base.rotation;
 const struct drm_intel_sprite_colorkey *VAR_26 = &VAR_22->ckey;
 u32 VAR_27;

 VAR_27 = VAR_4;

 if (FUNC_0(VAR_23, 6))
  VAR_27 |= VAR_11;

 switch (VAR_24->format->format) {
 case 131:
  VAR_27 |= VAR_5 | VAR_7;
  break;
 case 130:
  VAR_27 |= VAR_5;
  break;
 case 129:
  VAR_27 |= VAR_6 | VAR_15;
  break;
 case 128:
  VAR_27 |= VAR_6 | VAR_16;
  break;
 case 133:
  VAR_27 |= VAR_6 | VAR_13;
  break;
 case 132:
  VAR_27 |= VAR_6 | VAR_14;
  break;
 default:
  FUNC_1(VAR_24->format->format);
  return 0;
 }

 if (VAR_22->base.color_encoding == VAR_0)
  VAR_27 |= VAR_12;

 if (VAR_22->base.color_range == VAR_1)
  VAR_27 |= VAR_17;

 if (VAR_24->modifier == VAR_18)
  VAR_27 |= VAR_10;

 if (VAR_25 & VAR_2)
  VAR_27 |= VAR_8;

 if (VAR_26->flags & VAR_19)
  VAR_27 |= VAR_3;
 else if (VAR_26->flags & VAR_20)
  VAR_27 |= VAR_9;

 return VAR_27;
}
