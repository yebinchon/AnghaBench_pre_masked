
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int rotation; scalar_t__ color_encoding; struct drm_framebuffer* fb; } ;
struct drm_intel_sprite_colorkey {int flags; } ;
struct intel_plane_state {TYPE_2__ base; struct drm_intel_sprite_colorkey ckey; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; TYPE_1__* format; } ;
struct TYPE_3__ {int format; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static u32 FUNC_1(const struct intel_crtc_state *VAR_23,
     const struct intel_plane_state *VAR_24)
{
 const struct drm_framebuffer *VAR_25 = VAR_24->base.fb;
 unsigned int VAR_26 = VAR_24->base.rotation;
 const struct drm_intel_sprite_colorkey *VAR_27 = &VAR_24->ckey;
 u32 VAR_28;

 VAR_28 = VAR_5;

 switch (VAR_25->format->format) {
 case 129:
  VAR_28 |= VAR_13 | VAR_21;
  break;
 case 128:
  VAR_28 |= VAR_13 | VAR_22;
  break;
 case 134:
  VAR_28 |= VAR_13 | VAR_19;
  break;
 case 133:
  VAR_28 |= VAR_13 | VAR_20;
  break;
 case 135:
  VAR_28 |= VAR_6;
  break;
 case 130:
  VAR_28 |= VAR_8;
  break;
 case 136:
  VAR_28 |= VAR_7;
  break;
 case 132:
  VAR_28 |= VAR_11;
  break;
 case 138:
  VAR_28 |= VAR_9;
  break;
 case 131:
  VAR_28 |= VAR_12;
  break;
 case 137:
  VAR_28 |= VAR_10;
  break;
 default:
  FUNC_0(VAR_25->format->format);
  return 0;
 }

 if (VAR_24->base.color_encoding == VAR_0)
  VAR_28 |= VAR_18;

 if (VAR_25->modifier == VAR_3)
  VAR_28 |= VAR_17;

 if (VAR_26 & VAR_2)
  VAR_28 |= VAR_15;

 if (VAR_26 & VAR_1)
  VAR_28 |= VAR_14;

 if (VAR_27->flags & VAR_4)
  VAR_28 |= VAR_16;

 return VAR_28;
}
