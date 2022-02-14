
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_address_space {int top; int * scratch; } ;


 int FUNC_0 (struct i915_address_space*,int ) ;
 int FUNC_1 (struct i915_address_space*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_address_space *VAR_0)
{
 int VAR_1;

 if (!FUNC_3(&VAR_0->scratch[0]))
  return;

 for (VAR_1 = 1; VAR_1 <= VAR_0->top; VAR_1++) {
  if (!FUNC_3(&VAR_0->scratch[VAR_1]))
   break;
  FUNC_0(VAR_0, FUNC_2(&VAR_0->scratch[VAR_1]));
 }

 FUNC_1(VAR_0);
}
