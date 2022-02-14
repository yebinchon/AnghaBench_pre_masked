
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo {int attached_output; int sdvo_reg; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {scalar_t__ has_audio; TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct intel_sdvo*) ;
 int FUNC_3 (struct intel_sdvo*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_4 (struct intel_sdvo*,int*,int*) ;
 int FUNC_5 (struct intel_sdvo*,int ) ;
 int FUNC_6 (struct intel_sdvo*,int ) ;
 int FUNC_7 (struct intel_sdvo*,int ) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;
 struct intel_crtc* FUNC_10 (int ) ;
 struct intel_sdvo* FUNC_11 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_2,
         const struct intel_crtc_state *VAR_3,
         const struct drm_connector_state *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_9(VAR_5);
 struct intel_sdvo *VAR_7 = FUNC_11(VAR_2);
 struct intel_crtc *VAR_8 = FUNC_10(VAR_3->base.crtc);
 u32 VAR_9;
 bool VAR_10, VAR_11;
 int VAR_12;
 bool VAR_13;

 VAR_9 = FUNC_1(VAR_7->sdvo_reg);
 VAR_9 |= VAR_1;
 FUNC_7(VAR_7, VAR_9);

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
  FUNC_8(VAR_6, VAR_8->pipe);

 VAR_13 = FUNC_4(VAR_7, &VAR_10, &VAR_11);






 if (VAR_13 && !VAR_10) {
  FUNC_0("First %s output reported failure to "
    "sync\n", FUNC_2(VAR_7));
 }

 if (0)
  FUNC_6(VAR_7,
         VAR_0);
 FUNC_5(VAR_7, VAR_7->attached_output);

 if (VAR_3->has_audio)
  FUNC_3(VAR_7, VAR_3, VAR_4);
}
