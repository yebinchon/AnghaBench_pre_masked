
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
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*,struct i915_power_well*) ;
 struct i915_power_well* FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_3,
      bool VAR_4)
{
 struct i915_power_domains *VAR_5 = &VAR_3->power_domains;
 struct i915_power_well *VAR_6;

 FUNC_2(VAR_3, VAR_0);


 FUNC_5(VAR_3, !FUNC_0(VAR_3));


 FUNC_8(&VAR_5->lock);

 VAR_6 = FUNC_7(VAR_3, VAR_1);
 FUNC_6(VAR_3, VAR_6);

 VAR_6 = FUNC_7(VAR_3, VAR_2);
 FUNC_6(VAR_3, VAR_6);

 FUNC_9(&VAR_5->lock);

 FUNC_3(VAR_3);

 FUNC_1(VAR_3);

 if (VAR_4 && VAR_3->csr.dmc_payload)
  FUNC_4(VAR_3);
}
