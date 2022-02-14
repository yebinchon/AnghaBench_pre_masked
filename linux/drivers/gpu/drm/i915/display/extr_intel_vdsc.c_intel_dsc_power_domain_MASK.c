
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_i915_private* FUNC_2 (int ) ;

enum intel_display_power_domain
FUNC_3(const struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3->base.crtc->dev);
 enum transcoder VAR_5 = VAR_3->cpu_transcoder;
 if (FUNC_0(VAR_4) >= 12 && VAR_5 == VAR_1)
  return VAR_0;
 else if (VAR_5 == VAR_2)
  return VAR_0;
 else
  return FUNC_1(VAR_5);
}
