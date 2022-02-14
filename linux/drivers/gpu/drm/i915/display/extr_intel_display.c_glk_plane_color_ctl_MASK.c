
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ color_encoding; scalar_t__ color_range; TYPE_3__* plane; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_plane {int id; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ is_yuv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct intel_plane_state const*) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_plane* FUNC_3 (TYPE_3__*) ;

u32 FUNC_4(const struct intel_crtc_state *VAR_7,
   const struct intel_plane_state *VAR_8)
{
 struct drm_i915_private *VAR_9 =
  FUNC_2(VAR_8->base.plane->dev);
 const struct drm_framebuffer *VAR_10 = VAR_8->base.fb;
 struct intel_plane *VAR_11 = FUNC_3(VAR_8->base.plane);
 u32 VAR_12 = 0;

 VAR_12 |= VAR_5;
 VAR_12 |= FUNC_0(VAR_8);

 if (VAR_10->format->is_yuv && !FUNC_1(VAR_9, VAR_11->id)) {
  if (VAR_8->base.color_encoding == VAR_0)
   VAR_12 |= VAR_3;
  else
   VAR_12 |= VAR_2;

  if (VAR_8->base.color_range == VAR_1)
   VAR_12 |= VAR_6;
 } else if (VAR_10->format->is_yuv) {
  VAR_12 |= VAR_4;
 }

 return VAR_12;
}
