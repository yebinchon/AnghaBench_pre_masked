
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {int tc_mode; int tc_port_name; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum tc_port_mode { ____Placeholder_tc_port_mode } tc_port_mode ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_digital_port*,int) ;
 int FUNC_3 (struct intel_digital_port*) ;
 int FUNC_4 (struct intel_digital_port*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_digital_port *VAR_0,
         int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_8(VAR_0->base.base.dev);
 enum tc_port_mode VAR_3 = VAR_0->tc_mode;

 FUNC_5(VAR_2);
 FUNC_1(FUNC_6(VAR_2,
            FUNC_4(VAR_0)));

 FUNC_3(VAR_0);
 FUNC_2(VAR_0, VAR_1);

 FUNC_0("Port %s: TC port mode reset (%s -> %s)\n",
        VAR_0->tc_port_name,
        FUNC_7(VAR_3),
        FUNC_7(VAR_0->tc_mode));
}
