
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_guc {int fw; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int platform; } ;
struct TYPE_3__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;

void FUNC_5(struct intel_guc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1)->i915;

 FUNC_4(&VAR_1->fw, VAR_0, FUNC_0(VAR_2),
          FUNC_1(VAR_2)->platform, FUNC_2(VAR_2));
}
