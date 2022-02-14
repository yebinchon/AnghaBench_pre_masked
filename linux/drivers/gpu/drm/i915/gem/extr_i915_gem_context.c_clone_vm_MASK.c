
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int vm; } ;
struct i915_address_space {int ref; } ;


 struct i915_address_space* FUNC_0 (int ) ;
 int FUNC_1 (struct i915_gem_context*,struct i915_address_space*) ;
 int FUNC_2 (struct i915_address_space*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct i915_gem_context *VAR_0,
      struct i915_gem_context *VAR_1)
{
 struct i915_address_space *VAR_2;

 FUNC_4();
 do {
  VAR_2 = FUNC_0(VAR_1->vm);
  if (!VAR_2)
   break;

  if (!FUNC_3(&VAR_2->ref))
   continue;
  if (VAR_2 == FUNC_0(VAR_1->vm))
   break;

  FUNC_2(VAR_2);
 } while (1);
 FUNC_5();

 if (VAR_2) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_2);
 }

 return 0;
}
