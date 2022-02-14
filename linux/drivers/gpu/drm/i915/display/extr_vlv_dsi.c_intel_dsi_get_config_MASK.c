
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_6__ {void* crtc_clock; } ;
struct TYPE_4__ {TYPE_3__ adjusted_mode; } ;
struct intel_crtc_state {void* port_clock; TYPE_1__ base; int output_types; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 void* FUNC_3 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 void* FUNC_6 (struct intel_encoder*,struct intel_crtc_state*) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_1,
     struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_1->base.dev);
 u32 VAR_4;
 FUNC_1("\n");

 VAR_2->output_types |= FUNC_0(VAR_0);

 if (FUNC_2(VAR_3)) {
  FUNC_4(VAR_1, VAR_2);
  VAR_4 = FUNC_3(VAR_1, VAR_2);
 } else {
  VAR_4 = FUNC_6(VAR_1, VAR_2);
 }

 if (VAR_4) {
  VAR_2->base.adjusted_mode.crtc_clock = VAR_4;
  VAR_2->port_clock = VAR_4;
 }
}
