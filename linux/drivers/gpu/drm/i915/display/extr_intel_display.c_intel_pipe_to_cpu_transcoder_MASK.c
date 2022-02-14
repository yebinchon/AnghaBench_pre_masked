
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_crtc {TYPE_1__* config; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int cpu_transcoder; } ;


 struct intel_crtc* FUNC_0 (struct drm_i915_private*,int) ;

enum transcoder FUNC_1(struct drm_i915_private *VAR_0,
          enum pipe VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->config->cpu_transcoder;
}
