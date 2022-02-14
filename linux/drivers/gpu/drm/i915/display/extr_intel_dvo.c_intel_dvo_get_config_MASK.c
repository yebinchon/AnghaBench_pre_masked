
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct TYPE_5__ {int dvo_reg; } ;
struct intel_dvo {TYPE_1__ dev; } ;
struct TYPE_6__ {int flags; int crtc_clock; } ;
struct TYPE_7__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {int port_clock; TYPE_3__ base; int output_types; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct intel_dvo* FUNC_2 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_7,
     struct intel_crtc_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_3(VAR_7->base.dev);
 struct intel_dvo *VAR_10 = FUNC_2(VAR_7);
 u32 VAR_11, VAR_12 = 0;

 VAR_8->output_types |= FUNC_0(VAR_6);

 VAR_11 = FUNC_1(VAR_10->dev.dvo_reg);
 if (VAR_11 & VAR_4)
  VAR_12 |= VAR_2;
 else
  VAR_12 |= VAR_0;
 if (VAR_11 & VAR_5)
  VAR_12 |= VAR_3;
 else
  VAR_12 |= VAR_1;

 VAR_8->base.adjusted_mode.flags |= VAR_12;

 VAR_8->base.adjusted_mode.crtc_clock = VAR_8->port_clock;
}
