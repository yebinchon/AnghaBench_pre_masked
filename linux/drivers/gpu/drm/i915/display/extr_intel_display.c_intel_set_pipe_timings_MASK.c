
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_vtotal; int crtc_vblank_end; int flags; int crtc_htotal; int crtc_hsync_start; int crtc_hdisplay; int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_end; int crtc_vdisplay; int crtc_vblank_start; int crtc_vsync_start; int crtc_vsync_end; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*,int ) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_crtc* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(const struct intel_crtc_state *VAR_5)
{
 struct intel_crtc *VAR_6 = FUNC_13(VAR_5->base.crtc);
 struct drm_i915_private *VAR_7 = FUNC_12(VAR_6->base.dev);
 enum pipe VAR_8 = VAR_6->pipe;
 enum transcoder VAR_9 = VAR_5->cpu_transcoder;
 const struct drm_display_mode *VAR_10 = &VAR_5->base.adjusted_mode;
 u32 VAR_11, VAR_12;
 int VAR_13 = 0;



 VAR_11 = VAR_10->crtc_vtotal;
 VAR_12 = VAR_10->crtc_vblank_end;

 if (VAR_10->flags & VAR_0) {

  VAR_11 -= 1;
  VAR_12 -= 1;

  if (FUNC_11(VAR_5, VAR_1))
   VAR_13 = (VAR_10->crtc_htotal - 1) / 2;
  else
   VAR_13 = VAR_10->crtc_hsync_start -
    VAR_10->crtc_htotal / 2;
  if (VAR_13 < 0)
   VAR_13 += VAR_10->crtc_htotal;
 }

 if (FUNC_5(VAR_7) > 3)
  FUNC_4(FUNC_9(VAR_9), VAR_13);

 FUNC_4(FUNC_2(VAR_9),
     (VAR_10->crtc_hdisplay - 1) |
     ((VAR_10->crtc_htotal - 1) << 16));
 FUNC_4(FUNC_0(VAR_9),
     (VAR_10->crtc_hblank_start - 1) |
     ((VAR_10->crtc_hblank_end - 1) << 16));
 FUNC_4(FUNC_1(VAR_9),
     (VAR_10->crtc_hsync_start - 1) |
     ((VAR_10->crtc_hsync_end - 1) << 16));

 FUNC_4(FUNC_10(VAR_9),
     (VAR_10->crtc_vdisplay - 1) |
     ((VAR_11 - 1) << 16));
 FUNC_4(FUNC_7(VAR_9),
     (VAR_10->crtc_vblank_start - 1) |
     ((VAR_12 - 1) << 16));
 FUNC_4(FUNC_8(VAR_9),
     (VAR_10->crtc_vsync_start - 1) |
     ((VAR_10->crtc_vsync_end - 1) << 16));





 if (FUNC_6(VAR_7) && VAR_9 == VAR_4 &&
     (VAR_8 == VAR_2 || VAR_8 == VAR_3))
  FUNC_4(FUNC_10(VAR_8), FUNC_3(FUNC_10(VAR_9)));

}
