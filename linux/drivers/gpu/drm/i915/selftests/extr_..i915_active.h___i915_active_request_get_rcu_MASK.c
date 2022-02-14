
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {int dummy; } ;
struct i915_active_request {int request; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 struct i915_request* FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (int ) ;
 struct i915_request* FUNC_5 (int ) ;
 struct i915_request* FUNC_6 (struct i915_request*) ;

__attribute__((used)) static inline struct i915_request *
FUNC_7(const struct i915_active_request *VAR_0)
{
 do {
  struct i915_request *VAR_1;

  VAR_1 = FUNC_5(VAR_0->request);
  if (!VAR_1 || FUNC_1(VAR_1))
   return ((void*)0);
  FUNC_0();

  VAR_1 = FUNC_2(VAR_1);
  if (!VAR_1 || VAR_1 == FUNC_4(VAR_0->request))
   return FUNC_6(VAR_1);

  FUNC_3(VAR_1);
 } while (1);
}
