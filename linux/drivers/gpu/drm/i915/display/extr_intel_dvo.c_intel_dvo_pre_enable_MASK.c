
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_6__ {int dvo_srcdim_reg; int dvo_reg; } ;
struct intel_dvo {TYPE_3__ dev; } ;
struct drm_display_mode {int flags; int crtc_hdisplay; int crtc_vdisplay; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct intel_dvo* FUNC_3 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_12,
     const struct intel_crtc_state *VAR_13,
     const struct drm_connector_state *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_4(VAR_12->base.dev);
 struct intel_crtc *VAR_16 = FUNC_5(VAR_13->base.crtc);
 const struct drm_display_mode *VAR_17 = &VAR_13->base.adjusted_mode;
 struct intel_dvo *VAR_18 = FUNC_3(VAR_12);
 int VAR_19 = VAR_16->pipe;
 u32 VAR_20;
 i915_reg_t VAR_21 = VAR_18->dev.dvo_reg;
 i915_reg_t VAR_22 = VAR_18->dev.dvo_srcdim_reg;


 VAR_20 = FUNC_1(VAR_21) &
    (VAR_8 | VAR_5);
 VAR_20 |= VAR_4 | VAR_3 |
     VAR_2;

 VAR_20 |= FUNC_0(VAR_19);
 VAR_20 |= VAR_7;
 if (VAR_17->flags & VAR_0)
  VAR_20 |= VAR_6;
 if (VAR_17->flags & VAR_1)
  VAR_20 |= VAR_11;




 FUNC_2(VAR_22,
     (VAR_17->crtc_hdisplay << VAR_9) |
     (VAR_17->crtc_vdisplay << VAR_10));

 FUNC_2(VAR_21, VAR_20);
}
