
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {int tc_legacy_port; int tc_phy_fia; scalar_t__ tc_link_refcount; int tc_lock; int tc_port_name; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,char*,int,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

void FUNC_7(struct intel_digital_port *VAR_1, bool VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_1->base.base.dev);
 enum port VAR_4 = VAR_1->base.port;
 enum tc_port VAR_5 = FUNC_1(VAR_3, VAR_4);

 if (FUNC_0(VAR_5 == VAR_0))
  return;

 FUNC_4(VAR_1->tc_port_name, sizeof(VAR_1->tc_port_name),
   "%c/TC#%d", FUNC_3(VAR_4), VAR_5 + 1);

 FUNC_2(&VAR_1->tc_lock);
 VAR_1->tc_legacy_port = VAR_2;
 VAR_1->tc_link_refcount = 0;
 VAR_1->tc_phy_fia = FUNC_5(VAR_3, VAR_5);
}
