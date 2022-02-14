
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ compression_enable; } ;
struct intel_crtc_state {int has_psr2; TYPE_1__ dsc_params; } ;
struct TYPE_4__ {int debug; } ;
struct drm_i915_private {TYPE_2__ psr; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_1,
          const struct intel_crtc_state *VAR_2)
{

 FUNC_0(VAR_2->dsc_params.compression_enable &&
  VAR_2->has_psr2);

 switch (VAR_1->psr.debug & VAR_0) {
 case 129:
 case 128:
  return 0;
 default:
  return VAR_2->has_psr2;
 }
}
