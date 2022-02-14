
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {int port; TYPE_3__ base; } ;
struct intel_digital_port {struct intel_hdmi hdmi; } ;
struct TYPE_5__ {int hdmi; int spd; int avi; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ infoframes; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (struct intel_hdmi*) ;
 struct intel_digital_port* FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_9 (struct intel_encoder*,struct intel_crtc_state const*,int ,int *) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_12,
          bool VAR_13,
          const struct intel_crtc_state *VAR_14,
          const struct drm_connector_state *VAR_15)
{
 struct drm_i915_private *VAR_16 = FUNC_10(VAR_12->base.dev);
 struct intel_crtc *VAR_17 = FUNC_11(VAR_14->base.crtc);
 struct intel_digital_port *VAR_18 = FUNC_7(&VAR_12->base);
 struct intel_hdmi *VAR_19 = &VAR_18->hdmi;
 i915_reg_t VAR_20 = FUNC_3(VAR_17->pipe);
 u32 VAR_21 = FUNC_0(VAR_20);
 u32 VAR_22 = FUNC_4(VAR_12->port);

 FUNC_6(VAR_19);


 VAR_21 |= VAR_11 | VAR_9;

 if (!VAR_13) {
  if (!(VAR_21 & VAR_3))
   return;
  VAR_21 &= ~(VAR_3 | VAR_4 |
    VAR_8 | VAR_5 |
    VAR_7 | VAR_6);
  FUNC_1(VAR_20, VAR_21);
  FUNC_2(VAR_20);
  return;
 }

 if (VAR_22 != (VAR_21 & VAR_10)) {
  FUNC_5(VAR_21 & VAR_3,
       "DIP already enabled on port %c\n",
       (VAR_21 & VAR_10) >> 29);
  VAR_21 &= ~VAR_10;
  VAR_21 |= VAR_22;
 }

 VAR_21 |= VAR_3;
 VAR_21 &= ~(VAR_4 |
   VAR_8 | VAR_5 |
   VAR_7 | VAR_6);

 if (FUNC_8(VAR_12, VAR_14, VAR_15))
  VAR_21 |= VAR_6;

 FUNC_1(VAR_20, VAR_21);
 FUNC_2(VAR_20);

 FUNC_9(VAR_12, VAR_14,
         VAR_0,
         &VAR_14->infoframes.avi);
 FUNC_9(VAR_12, VAR_14,
         VAR_1,
         &VAR_14->infoframes.spd);
 FUNC_9(VAR_12, VAR_14,
         VAR_2,
         &VAR_14->infoframes.hdmi);
}
