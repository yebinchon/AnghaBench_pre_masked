
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo {int sdvo_reg; } ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {scalar_t__ has_audio; TYPE_2__ base; } ;
struct intel_crtc {scalar_t__ pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct intel_sdvo*) ;
 int FUNC_4 (struct intel_sdvo*,int ) ;
 int FUNC_5 (struct intel_sdvo*,int ) ;
 int FUNC_6 (struct intel_sdvo*,int) ;
 int FUNC_7 (struct drm_i915_private*,int ,int) ;
 int FUNC_8 (struct drm_i915_private*,int ,int) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;
 struct intel_sdvo* FUNC_12 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_13(struct intel_encoder *VAR_5,
          const struct intel_crtc_state *VAR_6,
          const struct drm_connector_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_10(VAR_5->base.dev);
 struct intel_sdvo *VAR_9 = FUNC_12(VAR_5);
 struct intel_crtc *VAR_10 = FUNC_11(VAR_6->base.crtc);
 u32 VAR_11;

 if (VAR_6->has_audio)
  FUNC_3(VAR_9);

 FUNC_4(VAR_9, 0);
 if (0)
  FUNC_5(VAR_9,
         VAR_0);

 VAR_11 = FUNC_1(VAR_9->sdvo_reg);

 VAR_11 &= ~VAR_3;
 FUNC_6(VAR_9, VAR_11);






 if (FUNC_0(VAR_8) && VAR_10->pipe == VAR_2) {




  FUNC_7(VAR_8, VAR_1, 0);
  FUNC_8(VAR_8, VAR_1, 0);

  VAR_11 &= ~VAR_4;
  VAR_11 |= VAR_3 | FUNC_2(VAR_1);
  FUNC_6(VAR_9, VAR_11);

  VAR_11 &= ~VAR_3;
  FUNC_6(VAR_9, VAR_11);

  FUNC_9(VAR_8, VAR_1);
  FUNC_7(VAR_8, VAR_1, 1);
  FUNC_8(VAR_8, VAR_1, 1);
 }
}
