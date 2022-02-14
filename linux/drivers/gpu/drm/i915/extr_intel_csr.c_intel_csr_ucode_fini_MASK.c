
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmc_payload; int wakeref; } ;
struct drm_i915_private {TYPE_1__ csr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->csr.wakeref);

 FUNC_3(VAR_0->csr.dmc_payload);
}
