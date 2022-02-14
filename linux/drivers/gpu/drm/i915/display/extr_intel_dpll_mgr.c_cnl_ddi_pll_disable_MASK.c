
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_4,
    struct intel_shared_dpll *VAR_5)
{
 const enum intel_dpll_id VAR_6 = VAR_5->info->id;
 u32 VAR_7;
 VAR_7 = FUNC_2(FUNC_0(VAR_6));
 VAR_7 &= ~VAR_0;
 FUNC_3(FUNC_0(VAR_6), VAR_7);


 if (FUNC_4(VAR_4, FUNC_0(VAR_6), VAR_1, 5))
  FUNC_1("PLL %d locked\n", VAR_6);
 VAR_7 = FUNC_2(FUNC_0(VAR_6));
 VAR_7 &= ~VAR_2;
 FUNC_3(FUNC_0(VAR_6), VAR_7);


 if (FUNC_4(VAR_4, FUNC_0(VAR_6),
        VAR_3, 5))
  FUNC_1("PLL %d Power not disabled\n", VAR_6);
}
