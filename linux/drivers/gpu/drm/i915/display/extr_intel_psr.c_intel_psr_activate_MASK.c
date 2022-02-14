
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_2__ {int active; scalar_t__ psr2_enabled; int lock; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct intel_dp *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_4);

 if (FUNC_1(VAR_5) >= 9)
  FUNC_2(FUNC_0(VAR_0) & VAR_1);
 FUNC_2(FUNC_0(VAR_2) & VAR_3);
 FUNC_2(VAR_5->psr.active);
 FUNC_6(&VAR_5->psr.lock);


 if (VAR_5->psr.psr2_enabled)
  FUNC_5(VAR_4);
 else
  FUNC_4(VAR_4);

 VAR_5->psr.active = 1;
}
