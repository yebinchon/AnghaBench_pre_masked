
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_digital_port *VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_5(VAR_13->base.base.dev);
 enum port VAR_15 = VAR_13->base.port;
 enum tc_port VAR_16 = FUNC_4(VAR_14, VAR_15);
 u32 VAR_17;
 int VAR_18;

 if (VAR_16 == VAR_12)
  return;

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_0(FUNC_2(VAR_18, VAR_15));
  VAR_17 &= ~(VAR_3 |
    VAR_4 |
    VAR_0 |
    VAR_1 |
    VAR_2);
  FUNC_1(FUNC_2(VAR_18, VAR_15), VAR_17);
 }

 VAR_17 = FUNC_0(FUNC_3(VAR_16));
 VAR_17 &= ~(VAR_11 |
   VAR_9 |
   VAR_6 |
   VAR_8 |
   VAR_10 |
   VAR_5 |
   VAR_7);
 FUNC_1(FUNC_3(VAR_16), VAR_17);
}
