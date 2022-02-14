
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_overlay {void (* flip_complete ) (struct intel_overlay*) ;int last_flip; int context; } ;
struct i915_request {int timeline; } ;


 struct i915_request* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (int *,int ,struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (int ) ;

__attribute__((used)) static struct i915_request *
FUNC_5(struct intel_overlay *VAR_0, void (*VAR_1)(struct intel_overlay *))
{
 struct i915_request *VAR_2;
 int VAR_3;

 VAR_0->flip_complete = VAR_1;

 VAR_2 = FUNC_4(VAR_0->context);
 if (FUNC_1(VAR_2))
  return VAR_2;

 VAR_3 = FUNC_2(&VAR_0->last_flip, VAR_2->timeline, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return FUNC_0(VAR_3);
 }

 return VAR_2;
}
