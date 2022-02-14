
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
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

void FUNC_5(const struct intel_crtc_state *VAR_1,
        bool VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_4(VAR_1->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 enum transcoder VAR_5 = VAR_1->cpu_transcoder;
 u32 VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_5));
 if (VAR_2 == 1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_1(FUNC_2(VAR_5), VAR_6);
}
