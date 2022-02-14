
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int ebb0; int pll0; int pll1; int pll2; int pll3; int pll6; int pll8; int pll9; int pll10; int ebb4; int pcsdw12; } ;
struct TYPE_6__ {TYPE_2__ hw_state; } ;
struct intel_shared_dpll {TYPE_3__ state; TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int VAR_0 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct drm_i915_private*,int,int*,int*) ;
 scalar_t__ FUNC_14 (int,int) ;

__attribute__((used)) static void FUNC_15(struct drm_i915_private *VAR_23,
    struct intel_shared_dpll *VAR_24)
{
 u32 VAR_25;
 enum port VAR_26 = (enum port)VAR_24->info->id;
 enum dpio_phy VAR_27;
 enum dpio_channel VAR_28;

 FUNC_13(VAR_23, VAR_26, &VAR_27, &VAR_28);


 VAR_25 = FUNC_9(FUNC_5(VAR_26));
 VAR_25 |= VAR_21;
 FUNC_10(FUNC_5(VAR_26), VAR_25);

 if (FUNC_11(VAR_23)) {
  VAR_25 = FUNC_9(FUNC_5(VAR_26));
  VAR_25 |= VAR_17;
  FUNC_10(FUNC_5(VAR_26), VAR_25);

  if (FUNC_14((FUNC_9(FUNC_5(VAR_26)) &
     VAR_18), 200))
   FUNC_8("Power state not set for PLL:%d\n", VAR_26);
 }


 VAR_25 = FUNC_9(FUNC_4(VAR_27, VAR_28));
 VAR_25 &= ~VAR_3;
 FUNC_10(FUNC_4(VAR_27, VAR_28), VAR_25);


 VAR_25 = FUNC_9(FUNC_3(VAR_27, VAR_28));
 VAR_25 &= ~(VAR_15 | VAR_16);
 VAR_25 |= VAR_24->state.hw_state.ebb0;
 FUNC_10(FUNC_3(VAR_27, VAR_28), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 0));
 VAR_25 &= ~VAR_13;
 VAR_25 |= VAR_24->state.hw_state.pll0;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 0), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 1));
 VAR_25 &= ~VAR_14;
 VAR_25 |= VAR_24->state.hw_state.pll1;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 1), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 2));
 VAR_25 &= ~VAR_12;
 VAR_25 |= VAR_24->state.hw_state.pll2;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 2), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 3));
 VAR_25 &= ~VAR_11;
 VAR_25 |= VAR_24->state.hw_state.pll3;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 3), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 6));
 VAR_25 &= ~VAR_19;
 VAR_25 &= ~VAR_8;
 VAR_25 &= ~VAR_7;
 VAR_25 |= VAR_24->state.hw_state.pll6;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 6), VAR_25);


 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 8));
 VAR_25 &= ~VAR_22;
 VAR_25 |= VAR_24->state.hw_state.pll8;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 8), VAR_25);

 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 9));
 VAR_25 &= ~VAR_10;
 VAR_25 |= VAR_24->state.hw_state.pll9;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 9), VAR_25);

 VAR_25 = FUNC_9(FUNC_2(VAR_27, VAR_28, 10));
 VAR_25 &= ~VAR_5;
 VAR_25 &= ~VAR_4;
 VAR_25 |= VAR_24->state.hw_state.pll10;
 FUNC_10(FUNC_2(VAR_27, VAR_28, 10), VAR_25);


 VAR_25 = FUNC_9(FUNC_4(VAR_27, VAR_28));
 VAR_25 |= VAR_20;
 FUNC_10(FUNC_4(VAR_27, VAR_28), VAR_25);
 VAR_25 &= ~VAR_3;
 VAR_25 |= VAR_24->state.hw_state.ebb4;
 FUNC_10(FUNC_4(VAR_27, VAR_28), VAR_25);


 VAR_25 = FUNC_9(FUNC_5(VAR_26));
 VAR_25 |= VAR_6;
 FUNC_10(FUNC_5(VAR_26), VAR_25);
 FUNC_12(FUNC_5(VAR_26));

 if (FUNC_14((FUNC_9(FUNC_5(VAR_26)) & VAR_9),
   200))
  FUNC_8("PLL %d not locked\n", VAR_26);

 if (FUNC_11(VAR_23)) {
  VAR_25 = FUNC_9(FUNC_7(VAR_27, VAR_28));
  VAR_25 |= VAR_0;
  FUNC_10(FUNC_6(VAR_27, VAR_28), VAR_25);
 }





 VAR_25 = FUNC_9(FUNC_1(VAR_27, VAR_28));
 VAR_25 &= ~VAR_2;
 VAR_25 &= ~VAR_1;
 VAR_25 |= VAR_24->state.hw_state.pcsdw12;
 FUNC_10(FUNC_0(VAR_27, VAR_28), VAR_25);
}
