
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct intel_encoder* FUNC_5 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

void FUNC_8(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_7(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2->base.dev);
 struct intel_encoder *VAR_4 = FUNC_5(VAR_2);
 enum port VAR_5 = VAR_4->port;
 enum transcoder VAR_6 = VAR_1->cpu_transcoder;

 if (VAR_6 != VAR_0) {
  if (FUNC_1(VAR_3) >= 12)
   FUNC_0(FUNC_3(VAR_6),
       FUNC_2(VAR_5));
  else
   FUNC_0(FUNC_3(VAR_6),
       FUNC_4(VAR_5));
 }
}
