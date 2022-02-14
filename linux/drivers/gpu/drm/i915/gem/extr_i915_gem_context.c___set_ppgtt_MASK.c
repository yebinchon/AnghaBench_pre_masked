
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i915_gem_context*,int ,struct i915_address_space*) ;
 struct i915_address_space* FUNC_2 (struct i915_address_space*) ;
 scalar_t__ FUNC_3 (struct i915_address_space*) ;

__attribute__((used)) static struct i915_address_space *
FUNC_4(struct i915_gem_context *VAR_1, struct i915_address_space *VAR_2)
{
 struct i915_address_space *VAR_3 = VAR_1->vm;

 FUNC_0(VAR_3 && FUNC_3(VAR_2) != FUNC_3(VAR_3));

 VAR_1->vm = FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2);

 return VAR_3;
}
