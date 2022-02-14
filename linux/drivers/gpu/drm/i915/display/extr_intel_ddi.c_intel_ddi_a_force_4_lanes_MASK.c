
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {scalar_t__ port; TYPE_1__ base; } ;
struct intel_digital_port {int saved_port_bits; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct intel_digital_port *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.base.dev);

 if (VAR_3->base.port != VAR_1)
  return 0;

 if (VAR_3->saved_port_bits & VAR_0)
  return 0;




 if (FUNC_1(VAR_4))
  return 1;






 if (FUNC_0(VAR_4) &&
     !FUNC_2(VAR_4, VAR_2))
  return 1;

 return 0;
}
