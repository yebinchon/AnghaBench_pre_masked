
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* alias; } ;
struct TYPE_3__ {struct i915_address_space vm; } ;


 scalar_t__ FUNC_0 (struct i915_address_space*) ;
 TYPE_2__* FUNC_1 (struct i915_address_space*) ;

__attribute__((used)) static struct i915_address_space *FUNC_2(struct intel_context *VAR_0)
{
 struct i915_address_space *VAR_1;

 VAR_1 = VAR_0->vm;
 if (FUNC_0(VAR_1))
  VAR_1 = &FUNC_1(VAR_1)->alias->vm;

 return VAR_1;
}
