
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int name; struct intel_context* kernel_context; } ;
struct intel_context {int active; } ;
struct i915_gem_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_context*) ;
 int FUNC_1 (struct intel_context*) ;
 int FUNC_2 (struct intel_context*,struct intel_context*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct intel_context* FUNC_4 (struct i915_gem_context*,struct intel_engine_cs*) ;
 int FUNC_5 (struct intel_context*) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct intel_engine_cs *VAR_1,
     struct i915_gem_context *VAR_2)
{
 struct intel_context *VAR_3, *VAR_4;
 int VAR_5;
 int VAR_6;
 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_1(VAR_3);
  goto err_remote;
 }

 for (VAR_5 = 0; VAR_5 <= 2; VAR_5++) {
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6)
   break;

  VAR_6 = FUNC_2(VAR_1->kernel_context, VAR_4);
  if (VAR_6)
   break;

  if (FUNC_3(&VAR_4->active)) {
   FUNC_6("remote context is not active; expected idle-barrier (%s pass %d)\n",
          VAR_1->name, VAR_5);
   VAR_6 = -VAR_0;
   break;
  }
 }

 FUNC_5(VAR_3);
err_remote:
 FUNC_5(VAR_4);
 return VAR_6;
}
