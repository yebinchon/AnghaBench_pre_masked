
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {int port; TYPE_2__ base; } ;
struct intel_digital_port {struct intel_hdmi hdmi; } ;
struct TYPE_3__ {int hdmi; int spd; int avi; } ;
struct intel_crtc_state {TYPE_1__ infoframes; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct intel_hdmi*) ;
 struct intel_digital_port* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state const*,int ,int *) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_encoder *VAR_11,
          bool VAR_12,
          const struct intel_crtc_state *VAR_13,
          const struct drm_connector_state *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_8(VAR_11->base.dev);
 struct intel_digital_port *VAR_16 = FUNC_6(&VAR_11->base);
 struct intel_hdmi *VAR_17 = &VAR_16->hdmi;
 i915_reg_t VAR_18 = VAR_3;
 u32 VAR_19 = FUNC_1(VAR_18);
 u32 VAR_20 = FUNC_4(VAR_11->port);

 FUNC_5(VAR_17);
 VAR_19 |= VAR_10 | VAR_8;

 if (!VAR_12) {
  if (!(VAR_19 & VAR_4))
   return;
  if (VAR_20 != (VAR_19 & VAR_9)) {
   FUNC_0("video DIP still enabled on port %c\n",
          (VAR_19 & VAR_9) >> 29);
   return;
  }
  VAR_19 &= ~(VAR_4 | VAR_5 |
    VAR_7 | VAR_6);
  FUNC_2(VAR_18, VAR_19);
  FUNC_3(VAR_18);
  return;
 }

 if (VAR_20 != (VAR_19 & VAR_9)) {
  if (VAR_19 & VAR_4) {
   FUNC_0("video DIP already enabled on port %c\n",
          (VAR_19 & VAR_9) >> 29);
   return;
  }
  VAR_19 &= ~VAR_9;
  VAR_19 |= VAR_20;
 }

 VAR_19 |= VAR_4;
 VAR_19 &= ~(VAR_5 |
   VAR_7 | VAR_6);

 FUNC_2(VAR_18, VAR_19);
 FUNC_3(VAR_18);

 FUNC_7(VAR_11, VAR_13,
         VAR_0,
         &VAR_13->infoframes.avi);
 FUNC_7(VAR_11, VAR_13,
         VAR_1,
         &VAR_13->infoframes.spd);
 FUNC_7(VAR_11, VAR_13,
         VAR_2,
         &VAR_13->infoframes.hdmi);
}
