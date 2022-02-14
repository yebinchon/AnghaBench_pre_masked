
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_power_well {int dummy; } ;
struct TYPE_2__ {int allowed_dc_mask; int dmc_payload; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
        struct i915_power_well *VAR_3)
{
 if (!VAR_2->csr.dmc_payload)
  return;

 if (VAR_2->csr.allowed_dc_mask & VAR_1)
  FUNC_1(VAR_2);
 else if (VAR_2->csr.allowed_dc_mask & VAR_0)
  FUNC_0(VAR_2);
}
