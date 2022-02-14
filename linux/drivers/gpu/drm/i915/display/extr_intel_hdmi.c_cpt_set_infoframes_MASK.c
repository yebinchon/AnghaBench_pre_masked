
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
struct intel_encoder {TYPE_3__ base; } ;
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
 int VAR_10 ;
 int FUNC_4 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state const*,int ,int *) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_11,
          bool VAR_12,
          const struct intel_crtc_state *VAR_13,
          const struct drm_connector_state *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_8(VAR_11->base.dev);
 struct intel_crtc *VAR_16 = FUNC_9(VAR_13->base.crtc);
 struct intel_hdmi *VAR_17 = FUNC_5(&VAR_11->base);
 i915_reg_t VAR_18 = FUNC_3(VAR_16->pipe);
 u32 VAR_19 = FUNC_0(VAR_18);

 FUNC_4(VAR_17);


 VAR_19 |= VAR_10 | VAR_9;

 if (!VAR_12) {
  if (!(VAR_19 & VAR_3))
   return;
  VAR_19 &= ~(VAR_3 | VAR_4 |
    VAR_8 | VAR_5 |
    VAR_7 | VAR_6);
  FUNC_1(VAR_18, VAR_19);
  FUNC_2(VAR_18);
  return;
 }


 VAR_19 |= VAR_3 | VAR_4;
 VAR_19 &= ~(VAR_8 | VAR_5 |
   VAR_7 | VAR_6);

 if (FUNC_6(VAR_11, VAR_13, VAR_14))
  VAR_19 |= VAR_6;

 FUNC_1(VAR_18, VAR_19);
 FUNC_2(VAR_18);

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
