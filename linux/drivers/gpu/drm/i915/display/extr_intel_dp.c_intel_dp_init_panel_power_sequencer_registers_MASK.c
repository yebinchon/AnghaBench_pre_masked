
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pps_registers {int pp_ctrl; int pp_div; int pp_off; int pp_on; } ;
struct edp_power_seq {int t1_t3; int t8; int t9; int t10; int t11_t12; } ;
struct intel_dp {struct edp_power_seq pps_delays; } ;
struct drm_i915_private {int rawclk_freq; int pps_mutex; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,char*) ;
 TYPE_2__* FUNC_12 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_13 (struct intel_dp*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct intel_dp*,struct pps_registers*) ;
 int FUNC_16 (struct intel_dp*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct intel_dp *VAR_12,
           bool VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_13(VAR_12);
 u32 VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18 = VAR_14->rawclk_freq / 1000;
 struct pps_registers VAR_19;
 enum port VAR_20 = FUNC_12(VAR_12)->base.port;
 const struct edp_power_seq *VAR_21 = &VAR_12->pps_delays;

 FUNC_17(&VAR_14->pps_mutex);

 FUNC_15(VAR_12, &VAR_19);
 if (VAR_13) {
  u32 VAR_22 = FUNC_16(VAR_12);

  FUNC_11(VAR_22 & VAR_9, "Panel power already on\n");

  if (VAR_22 & VAR_1)
   FUNC_1("VDD already on, disabling first\n");

  VAR_22 &= ~VAR_1;

  FUNC_5(VAR_19.pp_ctrl, VAR_22);
 }

 VAR_15 = FUNC_10(VAR_10, VAR_21->t1_t3) |
  FUNC_10(VAR_3, VAR_21->t8);
 VAR_16 = FUNC_10(VAR_2, VAR_21->t9) |
  FUNC_10(VAR_8, VAR_21->t10);



 if (FUNC_7(VAR_14) || FUNC_6(VAR_14)) {
  VAR_17 = FUNC_9(VAR_20);
 } else if (FUNC_3(VAR_14) || FUNC_2(VAR_14)) {
  switch (VAR_20) {
  case 130:
   VAR_17 = VAR_4;
   break;
  case 129:
   VAR_17 = VAR_5;
   break;
  case 128:
   VAR_17 = VAR_6;
   break;
  default:
   FUNC_8(VAR_20);
   break;
  }
 }

 VAR_15 |= VAR_17;

 FUNC_5(VAR_19.pp_on, VAR_15);
 FUNC_5(VAR_19.pp_off, VAR_16);




 if (FUNC_14(VAR_19.pp_div)) {
  FUNC_5(VAR_19.pp_div,
      FUNC_10(VAR_11, (100 * VAR_18) / 2 - 1) |
      FUNC_10(VAR_7, FUNC_0(VAR_21->t11_t12, 1000)));
 } else {
  u32 VAR_23;

  VAR_23 = FUNC_4(VAR_19.pp_ctrl);
  VAR_23 &= ~VAR_0;
  VAR_23 |= FUNC_10(VAR_0, FUNC_0(VAR_21->t11_t12, 1000));
  FUNC_5(VAR_19.pp_ctrl, VAR_23);
 }

 FUNC_1("panel power sequencer register settings: PP_ON %#x, PP_OFF %#x, PP_DIV %#x\n",
        FUNC_4(VAR_19.pp_on),
        FUNC_4(VAR_19.pp_off),
        FUNC_14(VAR_19.pp_div) ?
        FUNC_4(VAR_19.pp_div) :
        (FUNC_4(VAR_19.pp_ctrl) & VAR_0));
}
