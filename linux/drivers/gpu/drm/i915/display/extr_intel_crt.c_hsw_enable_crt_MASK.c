
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {int has_pch_encoder; TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int,int) ;
 int FUNC_3 (struct drm_i915_private*,int ,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_2,
      const struct intel_crtc_state *VAR_3,
      const struct drm_connector_state *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_5(VAR_2->base.dev);
 struct intel_crtc *VAR_6 = FUNC_6(VAR_3->base.crtc);
 enum pipe VAR_7 = VAR_6->pipe;

 FUNC_0(!VAR_3->has_pch_encoder);

 FUNC_1(VAR_2, VAR_3, VAR_0);

 FUNC_4(VAR_5, VAR_7);
 FUNC_4(VAR_5, VAR_7);
 FUNC_2(VAR_5, VAR_7, 1);
 FUNC_3(VAR_5, VAR_1, 1);
}
