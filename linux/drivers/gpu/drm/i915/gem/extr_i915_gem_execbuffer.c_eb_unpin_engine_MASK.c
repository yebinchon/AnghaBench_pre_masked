
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int mutex; } ;
struct intel_context {struct intel_timeline* timeline; } ;
struct i915_execbuffer {struct intel_context* context; } ;


 int FUNC_0 (struct i915_execbuffer*,struct intel_context*) ;
 int FUNC_1 (struct intel_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_execbuffer *VAR_0)
{
 struct intel_context *VAR_1 = VAR_0->context;
 struct intel_timeline *VAR_2 = VAR_1->timeline;

 FUNC_2(&VAR_2->mutex);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_2->mutex);

 FUNC_0(VAR_0, VAR_1);
}
