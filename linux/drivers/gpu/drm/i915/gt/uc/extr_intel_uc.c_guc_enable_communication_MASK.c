
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc {int (* handler ) (struct intel_guc*) ;int send; int ct; } ;
struct drm_i915_private {int irq_lock; } ;
struct TYPE_2__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (struct intel_guc*) ;
 TYPE_1__* FUNC_6 (struct intel_guc*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (struct intel_guc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct intel_guc *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2)->i915;
 int VAR_4;

 FUNC_1(FUNC_2(VAR_2));

 VAR_4 = FUNC_7(VAR_3, -VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_8(&VAR_2->ct);
 if (VAR_4)
  return VAR_4;

 VAR_2->send = VAR_1;
 VAR_2->handler = FUNC_9;


 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 FUNC_3(VAR_2);


 FUNC_10(&VAR_3->irq_lock);
 FUNC_9(VAR_2);
 FUNC_11(&VAR_3->irq_lock);

 FUNC_0("GuC communication enabled\n");

 return 0;
}
