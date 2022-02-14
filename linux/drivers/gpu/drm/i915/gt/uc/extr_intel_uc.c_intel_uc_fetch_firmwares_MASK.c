
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fw; } ;
struct TYPE_4__ {int fw; } ;
struct intel_uc {TYPE_2__ huc; TYPE_1__ guc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_6__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int *,struct drm_i915_private*) ;
 int FUNC_1 (struct intel_uc*) ;
 scalar_t__ FUNC_2 (struct intel_uc*) ;
 TYPE_3__* FUNC_3 (struct intel_uc*) ;

void FUNC_4(struct intel_uc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_3(VAR_0)->i915;
 int VAR_2;

 if (!FUNC_1(VAR_0))
  return;

 VAR_2 = FUNC_0(&VAR_0->guc.fw, VAR_1);
 if (VAR_2)
  return;

 if (FUNC_2(VAR_0))
  FUNC_0(&VAR_0->huc.fw, VAR_1);
}
