
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int flush_work; } ;
struct intel_guc_log {TYPE_1__ relay; } ;
struct intel_guc {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_guc_log*) ;
 int FUNC_3 (struct intel_guc_log*) ;
 int FUNC_4 (struct intel_guc_log*) ;
 TYPE_2__* FUNC_5 (struct intel_guc*) ;
 int FUNC_6 (struct intel_guc_log*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 struct intel_guc* FUNC_8 (struct intel_guc_log*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct intel_guc_log *VAR_0)
{
 struct intel_guc *VAR_1 = FUNC_8(VAR_0);
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1)->i915;

 FUNC_2(VAR_0);
 FUNC_7(VAR_2);

 FUNC_1(&VAR_0->relay.flush_work);

 FUNC_9(&VAR_0->relay.lock);
 FUNC_0(!FUNC_6(VAR_0));
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_10(&VAR_0->relay.lock);
}
