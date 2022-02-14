
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int saveFBC_CONTROL; int saveDSPARB; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_2)
{

 if (FUNC_2(VAR_2) <= 4)
  FUNC_1(VAR_0, VAR_2->regfile.saveDSPARB);


 FUNC_5(VAR_2);


 if (FUNC_0(VAR_2) && FUNC_2(VAR_2) <= 4 && !FUNC_3(VAR_2))
  FUNC_1(VAR_1, VAR_2->regfile.saveFBC_CONTROL);

 FUNC_4(VAR_2);
}
