
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned int rotation; scalar_t__ color_encoding; scalar_t__ color_range; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct drm_intel_sprite_colorkey {int flags; } ;
struct intel_plane_state {TYPE_2__ base; struct drm_intel_sprite_colorkey ckey; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int modifier; TYPE_3__* format; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct intel_plane_state const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;

u32 FUNC_8(const struct intel_crtc_state *VAR_12,
    const struct intel_plane_state *VAR_13)
{
 struct drm_i915_private *VAR_14 =
  FUNC_7(VAR_13->base.plane->dev);
 const struct drm_framebuffer *VAR_15 = VAR_13->base.fb;
 unsigned int VAR_16 = VAR_13->base.rotation;
 const struct drm_intel_sprite_colorkey *VAR_17 = &VAR_13->ckey;
 u32 VAR_18;

 VAR_18 = VAR_6;

 if (FUNC_0(VAR_14) < 10 && !FUNC_1(VAR_14)) {
  VAR_18 |= FUNC_3(VAR_13);
  VAR_18 |= VAR_9;

  if (VAR_13->base.color_encoding == VAR_0)
   VAR_18 |= VAR_11;

  if (VAR_13->base.color_range == VAR_1)
   VAR_18 |= VAR_10;
 }

 VAR_18 |= FUNC_4(VAR_15->format->format);
 VAR_18 |= FUNC_6(VAR_15->modifier);
 VAR_18 |= FUNC_5(VAR_16 & VAR_3);

 if (FUNC_0(VAR_14) >= 10)
  VAR_18 |= FUNC_2(VAR_16 &
      VAR_2);

 if (VAR_17->flags & VAR_4)
  VAR_18 |= VAR_7;
 else if (VAR_17->flags & VAR_5)
  VAR_18 |= VAR_8;

 return VAR_18;
}
