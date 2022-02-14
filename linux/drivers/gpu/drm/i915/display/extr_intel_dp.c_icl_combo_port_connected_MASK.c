
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_1,
         struct intel_digital_port *VAR_2)
{
 enum port VAR_3 = VAR_2->base.port;

 return FUNC_0(VAR_0) & FUNC_1(VAR_3);
}
