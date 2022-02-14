
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lspcon {scalar_t__ active; } ;
struct intel_encoder {int base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int has_infoframe; int has_pch_encoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct intel_digital_port* FUNC_2 (int *) ;
 struct intel_lspcon* FUNC_3 (int *) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*) ;
 scalar_t__ FUNC_5 (struct intel_crtc_state const*,int ) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_8 (struct drm_i915_private*,int,int) ;
 int FUNC_9 (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_1,
     const struct intel_crtc_state *VAR_2,
     const struct drm_connector_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_11(VAR_2->base.crtc);
 struct drm_i915_private *VAR_5 = FUNC_10(VAR_4->base.dev);
 enum pipe VAR_6 = VAR_4->pipe;
 FUNC_1(VAR_2->has_pch_encoder);

 if (FUNC_0(VAR_5) >= 11)
  FUNC_4(VAR_1, VAR_2);

 FUNC_8(VAR_5, VAR_6, 1);

 if (FUNC_5(VAR_2, VAR_0)) {
  FUNC_7(VAR_1, VAR_2, VAR_3);
 } else {
  struct intel_lspcon *VAR_7 =
    FUNC_3(&VAR_1->base);

  FUNC_6(VAR_1, VAR_2, VAR_3);
  if (VAR_7->active) {
   struct intel_digital_port *VAR_8 =
     FUNC_2(&VAR_1->base);

   VAR_8->set_infoframes(VAR_1,
       VAR_2->has_infoframe,
       VAR_2, VAR_3);
  }
 }
}
