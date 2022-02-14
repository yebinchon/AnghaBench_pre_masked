
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {int port; TYPE_2__ base; } ;
struct intel_digital_port {int saved_port_bits; } ;
struct intel_crtc_state {scalar_t__ has_audio; int hdmi_scrambling; int hdmi_high_tmds_clock_ratio; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 struct intel_digital_port* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_9 (struct intel_encoder*,struct drm_connector*,int ,int ) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_6,
      const struct intel_crtc_state *VAR_7,
      const struct drm_connector_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_10(VAR_6->base.dev);
 struct intel_digital_port *VAR_10 = FUNC_6(&VAR_6->base);
 struct drm_connector *VAR_11 = VAR_8->connector;
 enum port VAR_12 = VAR_6->port;

 if (!FUNC_9(VAR_6, VAR_11,
            VAR_7->hdmi_high_tmds_clock_ratio,
            VAR_7->hdmi_scrambling))
  FUNC_1("[CONNECTOR:%d:%s] Failed to configure sink scrambling/TMDS bit clock ratio\n",
     VAR_11->base.id, VAR_11->name);


 if (FUNC_4(VAR_9)) {






  i915_reg_t VAR_13 = FUNC_7(VAR_9, VAR_12);
  u32 VAR_14;

  VAR_14 = FUNC_2(VAR_13);

  if (VAR_12 == VAR_5)
   VAR_14 |= VAR_0 |
    VAR_1;
  else
   VAR_14 |= VAR_3 |
    VAR_4;

  FUNC_3(VAR_13, VAR_14);
  FUNC_5(VAR_13);

  FUNC_11(1);

  if (VAR_12 == VAR_5)
   VAR_14 &= ~(VAR_0 |
     VAR_1);
  else
   VAR_14 &= ~(VAR_3 |
     VAR_4);

  FUNC_3(VAR_13, VAR_14);
 }





 FUNC_3(FUNC_0(VAR_12),
     VAR_10->saved_port_bits | VAR_2);

 if (VAR_7->has_audio)
  FUNC_8(VAR_6, VAR_7, VAR_8);
}
