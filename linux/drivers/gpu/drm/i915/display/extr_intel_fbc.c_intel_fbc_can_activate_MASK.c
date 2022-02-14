
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ rotation; scalar_t__ pixel_blend_mode; int adjusted_y; } ;
struct TYPE_12__ {int mode_flags; int hsw_bdw_pixel_rate; } ;
struct TYPE_11__ {TYPE_2__* format; int stride; } ;
struct intel_fbc_state_cache {int flags; TYPE_8__ plane; TYPE_4__ crtc; TYPE_3__ fb; int vma; } ;
struct TYPE_15__ {int size; } ;
struct intel_fbc {char* no_fbc_reason; int threshold; struct intel_fbc_state_cache state_cache; TYPE_7__ compressed_fb; scalar_t__ underrun_detected; } ;
struct TYPE_9__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_13__ {int cdclk; } ;
struct TYPE_14__ {TYPE_5__ hw; } ;
struct drm_i915_private {TYPE_6__ cdclk; struct intel_fbc fbc; } ;
struct TYPE_10__ {scalar_t__ has_alpha; int format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_5 (struct drm_i915_private*,struct intel_fbc_state_cache*) ;
 int FUNC_6 (struct intel_crtc*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(struct intel_crtc *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_9(VAR_4->base.dev);
 struct intel_fbc *VAR_6 = &VAR_5->fbc;
 struct intel_fbc_state_cache *VAR_7 = &VAR_6->state_cache;




 if (VAR_6->underrun_detected) {
  VAR_6->no_fbc_reason = "underrun detected";
  return 0;
 }

 if (!VAR_7->vma) {
  VAR_6->no_fbc_reason = "primary plane not visible";
  return 0;
 }

 if (VAR_7->crtc.mode_flags & VAR_1) {
  VAR_6->no_fbc_reason = "incompatible mode";
  return 0;
 }

 if (!FUNC_6(VAR_4)) {
  VAR_6->no_fbc_reason = "mode too large for compression";
  return 0;
 }
 if (!(VAR_7->flags & VAR_3)) {
  VAR_6->no_fbc_reason = "framebuffer not tiled or fenced";
  return 0;
 }
 if (FUNC_0(VAR_5) <= 4 && !FUNC_2(VAR_5) &&
     VAR_7->plane.rotation != VAR_2) {
  VAR_6->no_fbc_reason = "rotation unsupported";
  return 0;
 }

 if (!FUNC_8(VAR_5, VAR_7->fb.stride)) {
  VAR_6->no_fbc_reason = "framebuffer stride not supported";
  return 0;
 }

 if (!FUNC_7(VAR_5, VAR_7->fb.format->format)) {
  VAR_6->no_fbc_reason = "pixel format is invalid";
  return 0;
 }

 if (VAR_7->plane.pixel_blend_mode != VAR_0 &&
     VAR_7->fb.format->has_alpha) {
  VAR_6->no_fbc_reason = "per-pixel alpha blending is incompatible with FBC";
  return 0;
 }


 if ((FUNC_4(VAR_5) || FUNC_1(VAR_5)) &&
     VAR_7->crtc.hsw_bdw_pixel_rate >= VAR_5->cdclk.hw.cdclk * 95 / 100) {
  VAR_6->no_fbc_reason = "pixel rate is too big";
  return 0;
 }
 if (FUNC_5(VAR_5, &VAR_6->state_cache) >
     VAR_6->compressed_fb.size * VAR_6->threshold) {
  VAR_6->no_fbc_reason = "CFB requirements changed";
  return 0;
 }






 if (FUNC_3(VAR_5, 9, 10) &&
     (VAR_6->state_cache.plane.adjusted_y & 3)) {
  VAR_6->no_fbc_reason = "plane Y offset is misaligned";
  return 0;
 }

 return 1;
}
