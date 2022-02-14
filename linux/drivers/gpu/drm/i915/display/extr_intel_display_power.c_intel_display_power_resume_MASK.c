
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allowed_dc_mask; scalar_t__ dmc_payload; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*) ;

void FUNC_10(struct drm_i915_private *VAR_2)
{
 if (FUNC_0(VAR_2) >= 11) {
  FUNC_4(VAR_2);
  FUNC_8(VAR_2, 1);
  if (VAR_2->csr.dmc_payload) {
   if (VAR_2->csr.allowed_dc_mask &
       VAR_1)
    FUNC_9(VAR_2);
   else if (VAR_2->csr.allowed_dc_mask &
     VAR_0)
    FUNC_6(VAR_2);
  }
 } else if (FUNC_2(VAR_2)) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2, 1);
  if (VAR_2->csr.dmc_payload &&
      (VAR_2->csr.allowed_dc_mask & VAR_0))
   FUNC_6(VAR_2);
 } else if (FUNC_3(VAR_2) || FUNC_1(VAR_2)) {
  FUNC_7(VAR_2);
 }
}
