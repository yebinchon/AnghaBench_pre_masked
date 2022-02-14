
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int drm; int hdmi; int spd; int avi; } ;
struct intel_crtc_state {TYPE_2__ infoframes; int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state const*,int ,int *) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_11,
          bool VAR_12,
          const struct intel_crtc_state *VAR_13,
          const struct drm_connector_state *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_7(VAR_11->base.dev);
 i915_reg_t VAR_16 = FUNC_0(VAR_13->cpu_transcoder);
 u32 VAR_17 = FUNC_1(VAR_16);

 FUNC_4(VAR_15,
          VAR_13->cpu_transcoder);

 VAR_17 &= ~(VAR_9 | VAR_4 |
   VAR_6 | VAR_10 |
   VAR_7 | VAR_8 |
   VAR_5);

 if (!VAR_12) {
  FUNC_2(VAR_16, VAR_17);
  FUNC_3(VAR_16);
  return;
 }

 if (FUNC_5(VAR_11, VAR_13, VAR_14))
  VAR_17 |= VAR_6;

 FUNC_2(VAR_16, VAR_17);
 FUNC_3(VAR_16);

 FUNC_6(VAR_11, VAR_13,
         VAR_0,
         &VAR_13->infoframes.avi);
 FUNC_6(VAR_11, VAR_13,
         VAR_2,
         &VAR_13->infoframes.spd);
 FUNC_6(VAR_11, VAR_13,
         VAR_3,
         &VAR_13->infoframes.hdmi);
 FUNC_6(VAR_11, VAR_13,
         VAR_1,
         &VAR_13->infoframes.drm);
}
