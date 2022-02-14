
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {int dummy; } ;
struct i915_active_request {int dummy; } ;


 struct i915_request* FUNC_0 (struct i915_active_request const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline struct i915_request *
FUNC_3(const struct i915_active_request *VAR_0)
{
 struct i915_request *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2();

 return VAR_1;
}
