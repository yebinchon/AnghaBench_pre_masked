
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;
struct i915_address_space {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_address_space*) ;
 struct i915_address_space* FUNC_2 (struct intel_context*) ;

__attribute__((used)) static int FUNC_3(struct intel_context *VAR_0)
{
 struct i915_address_space *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  VAR_2 = FUNC_0(FUNC_1((VAR_1)));

 return VAR_2;
}
