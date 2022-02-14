
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct intel_engine_cs {int dummy; } ;
struct i915_gem_engines {unsigned long num_engines; TYPE_1__** engines; int rcu; } ;
struct i915_gem_context {int engines; } ;
struct TYPE_4__ {struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct i915_gem_engines*) ;
 int FUNC_2 (struct i915_gem_engines*,unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i915_gem_context*) ;
 struct i915_gem_engines* FUNC_5 (struct i915_gem_context*) ;
 int FUNC_6 (struct i915_gem_context*) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (struct i915_gem_context*) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (struct i915_gem_context*,struct intel_engine_cs*) ;
 scalar_t__ FUNC_11 (struct intel_engine_cs*) ;
 TYPE_1__* FUNC_12 (struct i915_gem_context*,struct intel_engine_cs*) ;
 struct i915_gem_engines* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct i915_gem_engines*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct i915_gem_context *VAR_3,
    struct i915_gem_context *VAR_4)
{
 struct i915_gem_engines *VAR_5 = FUNC_5(VAR_4);
 struct i915_gem_engines *VAR_6;
 bool VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_13(FUNC_14(VAR_5, VAR_2, VAR_5->num_engines), VAR_1);
 if (!VAR_6)
  goto err_unlock;

 FUNC_9(&VAR_6->rcu);
 for (VAR_8 = 0; VAR_8 < VAR_5->num_engines; VAR_8++) {
  struct intel_engine_cs *VAR_9;

  if (!VAR_5->engines[VAR_8]) {
   VAR_6->engines[VAR_8] = ((void*)0);
   continue;
  }
  VAR_9 = VAR_5->engines[VAR_8]->engine;
  if (FUNC_11(VAR_9))
   VAR_6->engines[VAR_8] =
    FUNC_12(VAR_3, VAR_9);
  else
   VAR_6->engines[VAR_8] = FUNC_10(VAR_3, VAR_9);
  if (FUNC_0(VAR_6->engines[VAR_8])) {
   FUNC_2(VAR_6, VAR_8);
   goto err_unlock;
  }
 }
 VAR_6->num_engines = VAR_8;

 VAR_7 = FUNC_8(VAR_4);
 FUNC_7(VAR_4);

 FUNC_3(VAR_3->engines);
 FUNC_1(VAR_3->engines, VAR_6);
 if (VAR_7)
  FUNC_6(VAR_3);
 else
  FUNC_4(VAR_3);
 return 0;

err_unlock:
 FUNC_7(VAR_4);
 return -VAR_0;
}
