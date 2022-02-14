
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {int tc_lock; int tc_lock_wakeref; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;

void FUNC_4(struct intel_digital_port *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.base.dev);
 intel_wakeref_t VAR_3 = FUNC_0(&VAR_1->tc_lock_wakeref);

 FUNC_2(&VAR_1->tc_lock);

 FUNC_1(VAR_2, VAR_0,
          VAR_3);
}
