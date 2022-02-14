
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int DP; int dpcd; scalar_t__ link_mst; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct intel_digital_port* FUNC_5 (struct intel_dp*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct intel_dp *VAR_8)
{
 struct intel_digital_port *VAR_9 = FUNC_5(VAR_8);
 struct drm_i915_private *VAR_10 =
  FUNC_8(VAR_9->base.base.dev);
 enum port VAR_11 = VAR_9->base.port;
 u32 VAR_12;
 bool VAR_13 = 0;

 if (FUNC_2(FUNC_1(VAR_11)) & VAR_1) {
  VAR_12 = FUNC_2(FUNC_0(VAR_11));
  if (VAR_12 & VAR_0) {
   VAR_12 &= ~VAR_0;
   FUNC_3(FUNC_0(VAR_11), VAR_12);
   VAR_13 = 1;
  }

  VAR_12 = FUNC_2(FUNC_1(VAR_11));
  VAR_12 &= ~(VAR_1 | VAR_3);
  VAR_12 |= VAR_4;
  FUNC_3(FUNC_1(VAR_11), VAR_12);
  FUNC_4(FUNC_1(VAR_11));

  if (VAR_13)
   FUNC_7(VAR_10, VAR_11);
 }

 VAR_12 = VAR_1 |
       VAR_4 | VAR_7;
 if (VAR_8->link_mst)
  VAR_12 |= VAR_5;
 else {
  VAR_12 |= VAR_6;
  if (FUNC_6(VAR_8->dpcd))
   VAR_12 |= VAR_2;
 }
 FUNC_3(FUNC_1(VAR_11), VAR_12);
 FUNC_4(FUNC_1(VAR_11));

 VAR_8->DP |= VAR_0;
 FUNC_3(FUNC_0(VAR_11), VAR_8->DP);
 FUNC_4(FUNC_0(VAR_11));

 FUNC_9(600);
}
