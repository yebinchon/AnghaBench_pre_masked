
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uc {int dummy; } ;
struct intel_huc {int fw; } ;
struct intel_gt {struct drm_i915_private* i915; struct intel_uc uc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int platform; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 struct intel_gt* FUNC_2 (struct intel_huc*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (struct intel_uc*) ;

void FUNC_5(struct intel_huc *VAR_1)
{
 struct intel_gt *VAR_2 = FUNC_2(VAR_1);
 struct intel_uc *VAR_3 = &VAR_2->uc;
 struct drm_i915_private *VAR_4 = VAR_2->i915;

 FUNC_3(&VAR_1->fw, VAR_0,
          FUNC_4(VAR_3),
          FUNC_0(VAR_4)->platform, FUNC_1(VAR_4));
}
