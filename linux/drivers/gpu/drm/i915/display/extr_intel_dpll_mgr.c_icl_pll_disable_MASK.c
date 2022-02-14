
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_4,
       struct intel_shared_dpll *VAR_5,
       i915_reg_t VAR_6)
{
 u32 VAR_7;
 VAR_7 = FUNC_1(VAR_6);
 VAR_7 &= ~VAR_0;
 FUNC_2(VAR_6, VAR_7);


 if (FUNC_3(VAR_4, VAR_6, VAR_1, 1))
  FUNC_0("PLL %d locked\n", VAR_5->info->id);



 VAR_7 = FUNC_1(VAR_6);
 VAR_7 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_7);





 if (FUNC_3(VAR_4, VAR_6, VAR_3, 1))
  FUNC_0("PLL %d Power not disabled\n", VAR_5->info->id);
}
