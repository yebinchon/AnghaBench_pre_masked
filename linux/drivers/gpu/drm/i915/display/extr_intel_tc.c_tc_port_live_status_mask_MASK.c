
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {int tc_port_name; int tc_phy_fia; TYPE_2__ base; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct intel_uncore*,int ) ;
 int FUNC_10 (struct intel_digital_port*,int) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static u32 FUNC_12(struct intel_digital_port *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_11(VAR_4->base.base.dev);
 enum tc_port VAR_6 = FUNC_8(VAR_5, VAR_4->base.port);
 struct intel_uncore *VAR_7 = &VAR_5->uncore;
 u32 VAR_8 = 0;
 u32 VAR_9;

 VAR_9 = FUNC_9(VAR_7,
    FUNC_2(VAR_4->tc_phy_fia));

 if (VAR_9 == 0xffffffff) {
  FUNC_1("Port %s: PHY in TCCOLD, nothing connected\n",
         VAR_4->tc_port_name);
  return VAR_8;
 }

 if (VAR_9 & FUNC_4(VAR_6))
  VAR_8 |= FUNC_0(VAR_3);
 if (VAR_9 & FUNC_5(VAR_6))
  VAR_8 |= FUNC_0(VAR_1);

 if (FUNC_9(VAR_7, VAR_0) & FUNC_3(VAR_6))
  VAR_8 |= FUNC_0(VAR_2);


 if (!FUNC_6(FUNC_7(VAR_8) > 1))
  FUNC_10(VAR_4, VAR_8);

 return VAR_8;
}
