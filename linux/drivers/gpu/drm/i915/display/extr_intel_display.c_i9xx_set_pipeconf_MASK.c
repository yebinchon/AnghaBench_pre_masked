
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int pipe_bpp; int gamma_mode; scalar_t__ limited_color_range; TYPE_3__ base; scalar_t__ dither; scalar_t__ double_wide; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*,int ) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_crtc* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(const struct intel_crtc_state *VAR_13)
{
 struct intel_crtc *VAR_14 = FUNC_13(VAR_13->base.crtc);
 struct drm_i915_private *VAR_15 = FUNC_12(VAR_14->base.dev);
 u32 VAR_16;

 VAR_16 = 0;


 if (FUNC_6(VAR_15))
  VAR_16 |= FUNC_1(FUNC_8(VAR_14->pipe)) & VAR_9;

 if (VAR_13->double_wide)
  VAR_16 |= VAR_8;


 if (FUNC_5(VAR_15) || FUNC_7(VAR_15) ||
     FUNC_4(VAR_15)) {

  if (VAR_13->dither && VAR_13->pipe_bpp != 30)
   VAR_16 |= VAR_6 |
        VAR_7;

  switch (VAR_13->pipe_bpp) {
  case 18:
   VAR_16 |= VAR_3;
   break;
  case 24:
   VAR_16 |= VAR_4;
   break;
  case 30:
   VAR_16 |= VAR_2;
   break;
  default:

   FUNC_0();
  }
 }

 if (VAR_13->base.adjusted_mode.flags & VAR_0) {
  if (FUNC_3(VAR_15) < 4 ||
      FUNC_11(VAR_13, VAR_1))
   VAR_16 |= VAR_10;
  else
   VAR_16 |= VAR_11;
 } else {
  VAR_16 |= VAR_12;
 }

 if ((FUNC_7(VAR_15) || FUNC_4(VAR_15)) &&
      VAR_13->limited_color_range)
  VAR_16 |= VAR_5;

 VAR_16 |= FUNC_9(VAR_13->gamma_mode);

 FUNC_2(FUNC_8(VAR_14->pipe), VAR_16);
 FUNC_10(FUNC_8(VAR_14->pipe));
}
