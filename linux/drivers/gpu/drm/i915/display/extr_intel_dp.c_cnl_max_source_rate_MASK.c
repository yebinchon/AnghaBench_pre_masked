
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct intel_dp *VAR_5)
{
 struct intel_digital_port *VAR_6 = FUNC_2(VAR_5);
 struct drm_i915_private *VAR_7 = FUNC_3(VAR_6->base.base.dev);
 enum port VAR_8 = VAR_6->base.port;

 u32 VAR_9 = FUNC_0(VAR_0) & VAR_4;


 if (VAR_9 == VAR_3)
  return 540000;


 if (FUNC_1(VAR_7))
  return 810000;


 if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
  return 540000;

 return 810000;
}
