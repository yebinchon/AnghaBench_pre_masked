
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int cfgcr0; int cfgcr1; } ;
struct TYPE_6__ {TYPE_2__ hw_state; } ;
struct intel_shared_dpll {TYPE_3__ state; TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;
 int FUNC_3 (char*,int const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_5,
          struct intel_shared_dpll *VAR_6)
{
 const enum intel_dpll_id VAR_7 = VAR_6->info->id;
 u32 VAR_8;


 VAR_8 = FUNC_4(FUNC_2(VAR_7));
 VAR_8 |= VAR_3;
 FUNC_5(FUNC_2(VAR_7), VAR_8);


 if (FUNC_7(VAR_5, FUNC_2(VAR_7),
      VAR_4, 5))
  FUNC_3("PLL %d Power not enabled\n", VAR_7);





 VAR_8 = VAR_6->state.hw_state.cfgcr0;
 FUNC_5(FUNC_0(VAR_7), VAR_8);


 FUNC_6(FUNC_0(VAR_7));



 if (VAR_6->state.hw_state.cfgcr0 & VAR_0) {
  VAR_8 = VAR_6->state.hw_state.cfgcr1;
  FUNC_5(FUNC_1(VAR_7), VAR_8);

  FUNC_6(FUNC_1(VAR_7));
 }
 VAR_8 = FUNC_4(FUNC_2(VAR_7));
 VAR_8 |= VAR_1;
 FUNC_5(FUNC_2(VAR_7), VAR_8);


 if (FUNC_7(VAR_5, FUNC_2(VAR_7), VAR_2, 5))
  FUNC_3("PLL %d not locked\n", VAR_7);
}
