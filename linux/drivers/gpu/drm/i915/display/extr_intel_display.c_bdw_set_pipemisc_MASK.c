
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int pipe_bpp; scalar_t__ output_format; int active_planes; scalar_t__ dither; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
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
 int VAR_12 ;
 int FUNC_5 () ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_13)
{
 struct intel_crtc *VAR_14 = FUNC_7(VAR_13->base.crtc);
 struct drm_i915_private *VAR_15 = FUNC_6(VAR_14->base.dev);
 u32 VAR_16 = 0;

 switch (VAR_13->pipe_bpp) {
 case 18:
  VAR_16 |= VAR_4;
  break;
 case 24:
  VAR_16 |= VAR_5;
  break;
 case 30:
  VAR_16 |= VAR_2;
  break;
 case 36:
  VAR_16 |= VAR_3;
  break;
 default:
  FUNC_3(VAR_13->pipe_bpp);
  break;
 }

 if (VAR_13->dither)
  VAR_16 |= VAR_6 | VAR_7;

 if (VAR_13->output_format == VAR_0 ||
     VAR_13->output_format == VAR_1)
  VAR_16 |= VAR_9;

 if (VAR_13->output_format == VAR_0)
  VAR_16 |= VAR_10 |
   VAR_11;

 if (FUNC_2(VAR_15) >= 11 &&
     (VAR_13->active_planes & ~(FUNC_5() |
        FUNC_0(VAR_12))) == 0)
  VAR_16 |= VAR_8;

 FUNC_1(FUNC_4(VAR_14->pipe), VAR_16);
}
