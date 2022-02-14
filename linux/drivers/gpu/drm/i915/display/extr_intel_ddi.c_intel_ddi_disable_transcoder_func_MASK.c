
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int quirks; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct intel_crtc_state const*,int ) ;
 int FUNC_6 (int) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

void FUNC_9(const struct intel_crtc_state *VAR_6)
{
 struct intel_crtc *VAR_7 = FUNC_8(VAR_6->base.crtc);
 struct drm_i915_private *VAR_8 = FUNC_7(VAR_7->base.dev);
 enum transcoder VAR_9 = VAR_6->cpu_transcoder;
 i915_reg_t VAR_10 = FUNC_4(VAR_9);
 u32 VAR_11 = FUNC_1(VAR_10);

 if (FUNC_3(VAR_8) >= 12) {
  VAR_11 &= ~(VAR_4 | VAR_2 |
    VAR_3);
 } else {
  VAR_11 &= ~(VAR_4 | VAR_5 |
    VAR_3);
 }
 FUNC_2(VAR_10, VAR_11);

 if (VAR_8->quirks & VAR_1 &&
     FUNC_5(VAR_6, VAR_0)) {
  FUNC_0("Quirk Increase DDI disabled time\n");

  FUNC_6(100);
 }
}
