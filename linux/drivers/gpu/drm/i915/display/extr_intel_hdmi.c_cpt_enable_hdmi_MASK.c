
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int pipe_bpp; scalar_t__ has_audio; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 struct intel_hdmi* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;
 struct intel_crtc* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_6,
       const struct intel_crtc_state *VAR_7,
       const struct drm_connector_state *VAR_8)
{
 struct drm_device *VAR_9 = VAR_6->base.dev;
 struct drm_i915_private *VAR_10 = FUNC_6(VAR_9);
 struct intel_crtc *VAR_11 = FUNC_7(VAR_7->base.crtc);
 struct intel_hdmi *VAR_12 = FUNC_4(&VAR_6->base);
 enum pipe VAR_13 = VAR_11->pipe;
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_12->hdmi_reg);

 VAR_14 |= VAR_4;
 if (VAR_7->has_audio)
  VAR_14 |= VAR_0;
 if (VAR_7->pipe_bpp > 24) {
  FUNC_1(FUNC_3(VAR_13),
      FUNC_0(FUNC_3(VAR_13)) |
      VAR_5);

  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_2;
 }

 FUNC_1(VAR_12->hdmi_reg, VAR_14);
 FUNC_2(VAR_12->hdmi_reg);

 if (VAR_7->pipe_bpp > 24) {
  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_1;

  FUNC_1(VAR_12->hdmi_reg, VAR_14);
  FUNC_2(VAR_12->hdmi_reg);

  FUNC_1(FUNC_3(VAR_13),
      FUNC_0(FUNC_3(VAR_13)) &
      ~VAR_5);
 }

 if (VAR_7->has_audio)
  FUNC_5(VAR_6, VAR_7, VAR_8);
}
