
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 struct drm_i915_private* FUNC_14 (int ) ;
 struct intel_crtc* FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct intel_encoder *VAR_8,
        const struct intel_crtc_state *VAR_9,
        const struct drm_connector_state *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_14(VAR_8->base.dev);
 struct intel_crtc *VAR_12 = FUNC_15(VAR_9->base.crtc);
 enum pipe VAR_13 = VAR_12->pipe;
 enum port VAR_14 = VAR_8->port;
 u32 VAR_15, VAR_16;
 i915_reg_t VAR_17, VAR_18;

 FUNC_1("Disable audio codec on port %c, pipe %c\n",
        FUNC_13(VAR_14), FUNC_12(VAR_13));

 if (FUNC_10(VAR_14 == VAR_6))
  return;

 if (FUNC_2(VAR_11)) {
  VAR_17 = FUNC_5(VAR_13);
  VAR_18 = VAR_5;
 } else if (FUNC_8(VAR_11) || FUNC_7(VAR_11)) {
  VAR_17 = FUNC_9(VAR_13);
  VAR_18 = VAR_7;
 } else {
  VAR_17 = FUNC_0(VAR_13);
  VAR_18 = VAR_4;
 }


 VAR_15 = FUNC_3(VAR_17);
 VAR_15 &= ~VAR_2;
 VAR_15 |= VAR_1;
 VAR_15 &= ~VAR_3;
 VAR_15 &= ~VAR_0;
 if (FUNC_11(VAR_9))
  VAR_15 |= VAR_2;
 FUNC_4(VAR_17, VAR_15);

 VAR_16 = FUNC_6(VAR_14);


 VAR_15 = FUNC_3(VAR_18);
 VAR_15 &= ~VAR_16;
 FUNC_4(VAR_18, VAR_15);
}
