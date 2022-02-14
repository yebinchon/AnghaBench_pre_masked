
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
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 struct drm_i915_private* FUNC_3 (int ) ;

void FUNC_4(const struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.crtc->dev);
 enum transcoder VAR_5 = VAR_3->cpu_transcoder;

 if (VAR_5 != VAR_1) {
  if (FUNC_1(VAR_4) >= 12)
   FUNC_0(FUNC_2(VAR_5),
       VAR_0);
  else
   FUNC_0(FUNC_2(VAR_5),
       VAR_2);
 }
}
