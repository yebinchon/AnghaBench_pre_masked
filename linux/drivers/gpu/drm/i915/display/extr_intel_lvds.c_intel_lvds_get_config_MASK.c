
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_lvds_encoder {int reg; } ;
struct TYPE_8__ {int dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct TYPE_6__ {int flags; int crtc_clock; } ;
struct TYPE_7__ {TYPE_2__ adjusted_mode; } ;
struct TYPE_5__ {int lvds_border_bits; int control; } ;
struct intel_crtc_state {int port_clock; TYPE_3__ base; TYPE_1__ gmch_pfit; int output_types; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_lvds_encoder* FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_10,
      struct intel_crtc_state *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_3(VAR_10->base.dev);
 struct intel_lvds_encoder *VAR_13 = FUNC_4(&VAR_10->base);
 u32 VAR_14, VAR_15 = 0;

 VAR_11->output_types |= FUNC_0(VAR_4);

 VAR_14 = FUNC_1(VAR_13->reg);
 if (VAR_14 & VAR_6)
  VAR_15 |= VAR_0;
 else
  VAR_15 |= VAR_2;
 if (VAR_14 & VAR_7)
  VAR_15 |= VAR_1;
 else
  VAR_15 |= VAR_3;

 VAR_11->base.adjusted_mode.flags |= VAR_15;

 if (FUNC_2(VAR_12) < 5)
  VAR_11->gmch_pfit.lvds_border_bits =
   VAR_14 & VAR_5;


 if (FUNC_2(VAR_12) < 4) {
  VAR_14 = FUNC_1(VAR_9);

  VAR_11->gmch_pfit.control |= VAR_14 & VAR_8;
 }

 VAR_11->base.adjusted_mode.crtc_clock = VAR_11->port_clock;
}
