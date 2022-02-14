
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int mutex; } ;
struct i915_request {int dummy; } ;
struct i915_active_request {int link; int request; } ;
struct i915_active {int count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct i915_active*,int ) ;
 int FUNC_4 (struct i915_active_request*,struct i915_request*) ;
 struct i915_active_request* FUNC_5 (struct i915_active*,struct intel_timeline*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i915_active*) ;
 int FUNC_9 (struct i915_active*) ;
 int FUNC_10 (struct i915_active_request*) ;
 scalar_t__ FUNC_11 (struct i915_active_request*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct i915_active_request*) ;

int FUNC_14(struct i915_active *VAR_1,
      struct intel_timeline *VAR_2,
      struct i915_request *VAR_3)
{
 struct i915_active_request *VAR_4;
 int VAR_5;

 FUNC_12(&VAR_2->mutex);


 VAR_5 = FUNC_8(VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (FUNC_11(VAR_4)) {





  FUNC_3(VAR_1, FUNC_13(VAR_4));
  FUNC_2(VAR_4->request, ((void*)0));
  FUNC_1(&VAR_4->link);
 } else {
  if (!FUNC_10(VAR_4))
   FUNC_6(&VAR_1->count);
 }
 FUNC_0(!FUNC_7(&VAR_1->count));
 FUNC_4(VAR_4, VAR_3);

out:
 FUNC_9(VAR_1);
 return VAR_5;
}
