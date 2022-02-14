
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int crtc_hdisplay; int crtc_htotal; int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_start; int crtc_hsync_end; int crtc_vdisplay; int crtc_vtotal; int crtc_vblank_start; int crtc_vblank_end; int crtc_vsync_start; int crtc_vsync_end; int flags; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_3__ base; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_2,
       struct intel_crtc_state *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_4);
 enum transcoder VAR_6 = VAR_3->cpu_transcoder;
 u32 VAR_7;

 VAR_7 = FUNC_3(FUNC_2(VAR_6));
 VAR_3->base.adjusted_mode.crtc_hdisplay = (VAR_7 & 0xffff) + 1;
 VAR_3->base.adjusted_mode.crtc_htotal = ((VAR_7 >> 16) & 0xffff) + 1;

 if (!FUNC_9(VAR_6)) {
  VAR_7 = FUNC_3(FUNC_0(VAR_6));
  VAR_3->base.adjusted_mode.crtc_hblank_start =
       (VAR_7 & 0xffff) + 1;
  VAR_3->base.adjusted_mode.crtc_hblank_end =
      ((VAR_7 >> 16) & 0xffff) + 1;
 }
 VAR_7 = FUNC_3(FUNC_1(VAR_6));
 VAR_3->base.adjusted_mode.crtc_hsync_start = (VAR_7 & 0xffff) + 1;
 VAR_3->base.adjusted_mode.crtc_hsync_end = ((VAR_7 >> 16) & 0xffff) + 1;

 VAR_7 = FUNC_3(FUNC_7(VAR_6));
 VAR_3->base.adjusted_mode.crtc_vdisplay = (VAR_7 & 0xffff) + 1;
 VAR_3->base.adjusted_mode.crtc_vtotal = ((VAR_7 >> 16) & 0xffff) + 1;

 if (!FUNC_9(VAR_6)) {
  VAR_7 = FUNC_3(FUNC_5(VAR_6));
  VAR_3->base.adjusted_mode.crtc_vblank_start =
       (VAR_7 & 0xffff) + 1;
  VAR_3->base.adjusted_mode.crtc_vblank_end =
      ((VAR_7 >> 16) & 0xffff) + 1;
 }
 VAR_7 = FUNC_3(FUNC_6(VAR_6));
 VAR_3->base.adjusted_mode.crtc_vsync_start = (VAR_7 & 0xffff) + 1;
 VAR_3->base.adjusted_mode.crtc_vsync_end = ((VAR_7 >> 16) & 0xffff) + 1;

 if (FUNC_3(FUNC_4(VAR_6)) & VAR_1) {
  VAR_3->base.adjusted_mode.flags |= VAR_0;
  VAR_3->base.adjusted_mode.crtc_vtotal += 1;
  VAR_3->base.adjusted_mode.crtc_vblank_end += 1;
 }
}
