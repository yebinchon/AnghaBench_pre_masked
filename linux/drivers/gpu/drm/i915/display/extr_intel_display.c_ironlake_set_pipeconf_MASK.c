
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
struct intel_crtc_state {int pipe_bpp; int gamma_mode; scalar_t__ limited_color_range; TYPE_3__ base; scalar_t__ dither; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct intel_crtc_state *VAR_10)
{
 struct intel_crtc *VAR_11 = FUNC_6(VAR_10->base.crtc);
 struct drm_i915_private *VAR_12 = FUNC_5(VAR_11->base.dev);
 enum pipe VAR_13 = VAR_11->pipe;
 u32 VAR_14;

 VAR_14 = 0;

 switch (VAR_10->pipe_bpp) {
 case 18:
  VAR_14 |= VAR_3;
  break;
 case 24:
  VAR_14 |= VAR_4;
  break;
 case 30:
  VAR_14 |= VAR_1;
  break;
 case 36:
  VAR_14 |= VAR_2;
  break;
 default:

  FUNC_0();
 }

 if (VAR_10->dither)
  VAR_14 |= (VAR_6 | VAR_7);

 if (VAR_10->base.adjusted_mode.flags & VAR_0)
  VAR_14 |= VAR_8;
 else
  VAR_14 |= VAR_9;

 if (VAR_10->limited_color_range)
  VAR_14 |= VAR_5;

 VAR_14 |= FUNC_3(VAR_10->gamma_mode);

 FUNC_1(FUNC_2(VAR_13), VAR_14);
 FUNC_4(FUNC_2(VAR_13));
}
