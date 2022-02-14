
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_dp {int dpcd; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;





 int VAR_16 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_17 ;
 struct intel_digital_port* FUNC_7 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct intel_dp *VAR_18,
    u32 *VAR_19,
    u8 VAR_20)
{
 struct drm_i915_private *VAR_21 = FUNC_8(VAR_18);
 struct intel_digital_port *VAR_22 = FUNC_7(VAR_18);
 enum port VAR_23 = VAR_22->base.port;
 u8 VAR_24 = FUNC_9(VAR_18->dpcd);

 if (VAR_20 & VAR_24)
  FUNC_1("Using DP training pattern TPS%d\n",
         VAR_20 & VAR_24);

 if (FUNC_2(VAR_21)) {
  u32 VAR_25 = FUNC_4(FUNC_0(VAR_23));

  if (VAR_20 & VAR_0)
   VAR_25 |= VAR_15;
  else
   VAR_25 &= ~VAR_15;

  VAR_25 &= ~VAR_9;
  switch (VAR_20 & VAR_24) {
  case 128:
   VAR_25 |= VAR_10;

   break;
  case 132:
   VAR_25 |= VAR_11;
   break;
  case 131:
   VAR_25 |= VAR_12;
   break;
  case 130:
   VAR_25 |= VAR_13;
   break;
  case 129:
   VAR_25 |= VAR_14;
   break;
  }
  FUNC_5(FUNC_0(VAR_23), VAR_25);

 } else if ((FUNC_6(VAR_21) && VAR_23 == VAR_17) ||
     (FUNC_3(VAR_21) && VAR_23 != VAR_17)) {
  *VAR_19 &= ~VAR_2;

  switch (VAR_20 & VAR_16) {
  case 128:
   *VAR_19 |= VAR_4;
   break;
  case 132:
   *VAR_19 |= VAR_6;
   break;
  case 131:
   *VAR_19 |= VAR_8;
   break;
  case 130:
   FUNC_1("TPS3 not supported, using TPS2 instead\n");
   *VAR_19 |= VAR_8;
   break;
  }

 } else {
  *VAR_19 &= ~VAR_1;

  switch (VAR_20 & VAR_16) {
  case 128:
   *VAR_19 |= VAR_3;
   break;
  case 132:
   *VAR_19 |= VAR_5;
   break;
  case 131:
   *VAR_19 |= VAR_7;
   break;
  case 130:
   FUNC_1("TPS3 not supported, using TPS2 instead\n");
   *VAR_19 |= VAR_7;
   break;
  }
 }
}
