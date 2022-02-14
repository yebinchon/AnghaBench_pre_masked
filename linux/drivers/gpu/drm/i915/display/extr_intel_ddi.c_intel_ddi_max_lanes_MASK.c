
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {int saved_port_bits; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct intel_digital_port*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct intel_digital_port *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_3->base.base.dev);
 enum port VAR_5 = VAR_3->base.port;
 int VAR_6 = 4;

 if (FUNC_3(VAR_4) >= 11)
  return VAR_6;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_2) {
  if (FUNC_2(FUNC_0(VAR_1)) & VAR_0)
   VAR_6 = VAR_5 == VAR_1 ? 4 : 0;
  else

   VAR_6 = 2;
 }






 if (FUNC_4(VAR_3)) {
  FUNC_1("Forcing DDI_A_4_LANES for port A\n");
  VAR_3->saved_port_bits |= VAR_0;
  VAR_6 = 4;
 }

 return VAR_6;
}
