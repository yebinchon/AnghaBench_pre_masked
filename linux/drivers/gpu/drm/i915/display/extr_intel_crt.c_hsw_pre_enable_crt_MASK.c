
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {int has_pch_encoder; TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct TYPE_6__ {int (* fdi_link_train ) (struct intel_crtc*,struct intel_crtc_state const*) ;} ;
struct drm_i915_private {TYPE_3__ display; } ;
struct drm_connector_state {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_crtc_state const*) ;
 int FUNC_2 (struct drm_i915_private*,int,int) ;
 int FUNC_3 (struct intel_crtc*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_0,
          const struct intel_crtc_state *VAR_1,
          const struct drm_connector_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_0->base.dev);
 struct intel_crtc *VAR_4 = FUNC_5(VAR_1->base.crtc);
 enum pipe VAR_5 = VAR_4->pipe;

 FUNC_0(!VAR_1->has_pch_encoder);

 FUNC_2(VAR_3, VAR_5, 0);

 VAR_3->display.fdi_link_train(VAR_4, VAR_1);

 FUNC_1(VAR_1);
}
