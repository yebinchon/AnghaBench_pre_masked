
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_power_well {int dummy; } ;
struct i915_power_domains {int lock; } ;
struct TYPE_2__ {scalar_t__ dmc_payload; } ;
struct drm_i915_private {TYPE_1__ csr; struct i915_power_domains power_domains; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,struct i915_power_well*) ;
 struct i915_power_well* FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_2,
      bool VAR_3)
{
 struct i915_power_domains *VAR_4 = &VAR_2->power_domains;
 struct i915_power_well *VAR_5;

 FUNC_1(VAR_2, VAR_0);


 FUNC_7(VAR_2, !FUNC_0(VAR_2));


 FUNC_5(VAR_2);





 FUNC_10(&VAR_4->lock);
 VAR_5 = FUNC_9(VAR_2, VAR_1);
 FUNC_8(VAR_2, VAR_5);
 FUNC_11(&VAR_4->lock);


 FUNC_4(VAR_2);


 FUNC_2(VAR_2);


 FUNC_3(VAR_2);

 if (VAR_3 && VAR_2->csr.dmc_payload)
  FUNC_6(VAR_2);
}
