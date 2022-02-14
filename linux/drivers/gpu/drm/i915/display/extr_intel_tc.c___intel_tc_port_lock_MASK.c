
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {int tc_lock_wakeref; int tc_link_refcount; int tc_lock; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (struct intel_digital_port*,int) ;
 int FUNC_4 (int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_digital_port *VAR_1,
     int VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_1->base.base.dev);
 intel_wakeref_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);

 FUNC_4(&VAR_1->tc_lock);

 if (!VAR_1->tc_link_refcount &&
     FUNC_2(VAR_1))
  FUNC_3(VAR_1, VAR_2);

 FUNC_0(VAR_1->tc_lock_wakeref);
 VAR_1->tc_lock_wakeref = VAR_4;
}
