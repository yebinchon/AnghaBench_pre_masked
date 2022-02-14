
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int aux; } ;
struct TYPE_2__ {int enabled; scalar_t__ psr2_enabled; int lock; } ;
struct drm_i915_private {TYPE_1__ psr; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct intel_dp *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_5);
 i915_reg_t VAR_7;
 u32 VAR_8;

 FUNC_6(&VAR_6->psr.lock);

 if (!VAR_6->psr.enabled)
  return;

 FUNC_0("Disabling PSR%s\n",
        VAR_6->psr.psr2_enabled ? "2" : "1");

 FUNC_5(VAR_6);

 if (VAR_6->psr.psr2_enabled) {
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
 } else {
  VAR_7 = VAR_3;
  VAR_8 = VAR_4;
 }


 if (FUNC_4(VAR_6, VAR_7,
        VAR_8, 2000))
  FUNC_1("Timed out waiting PSR idle state\n");


 FUNC_3(&VAR_5->aux, VAR_0, 0);

 VAR_6->psr.enabled = 0;
}
