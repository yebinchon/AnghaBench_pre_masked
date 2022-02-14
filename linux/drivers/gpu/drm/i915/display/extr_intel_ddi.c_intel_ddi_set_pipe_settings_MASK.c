
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; int pipe_bpp; scalar_t__ output_format; scalar_t__ limited_color_range; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

void FUNC_8(const struct intel_crtc_state *VAR_11)
{
 struct intel_crtc *VAR_12 = FUNC_6(VAR_11->base.crtc);
 struct drm_i915_private *VAR_13 = FUNC_5(VAR_12->base.dev);
 enum transcoder VAR_14 = VAR_11->cpu_transcoder;
 u32 VAR_15;

 if (!FUNC_4(VAR_11))
  return;

 FUNC_3(FUNC_7(VAR_14));

 VAR_15 = VAR_9;

 if (VAR_11->limited_color_range)
  VAR_15 |= VAR_6;

 switch (VAR_11->pipe_bpp) {
 case 18:
  VAR_15 |= VAR_4;
  break;
 case 24:
  VAR_15 |= VAR_5;
  break;
 case 30:
  VAR_15 |= VAR_2;
  break;
 case 36:
  VAR_15 |= VAR_3;
  break;
 default:
  FUNC_1(VAR_11->pipe_bpp);
  break;
 }






 if (VAR_11->output_format == VAR_1)
  VAR_15 |= VAR_8 | VAR_7;






 if (VAR_11->output_format == VAR_0)
  VAR_15 |= VAR_10;
 FUNC_0(FUNC_2(VAR_14), VAR_15);
}
