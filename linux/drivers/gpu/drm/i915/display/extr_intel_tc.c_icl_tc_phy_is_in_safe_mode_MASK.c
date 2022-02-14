
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


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_digital_port *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_5(VAR_0->base.base.dev);
 enum tc_port VAR_2 = FUNC_3(VAR_1, VAR_0->base.port);
 struct intel_uncore *VAR_3 = &VAR_1->uncore;
 u32 VAR_4;

 VAR_4 = FUNC_4(VAR_3,
    FUNC_2(VAR_0->tc_phy_fia));
 if (VAR_4 == 0xffffffff) {
  FUNC_1("Port %s: PHY in TCCOLD, assume safe mode\n",
         VAR_0->tc_port_name);
  return 1;
 }

 return !(VAR_4 & FUNC_0(VAR_2));
}
