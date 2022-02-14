
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ppgtt {int pd; } ;
struct i915_address_space {int top; int i915; } ;


 int FUNC_0 (struct i915_address_space*,int ,int ,int ) ;
 int FUNC_1 (struct i915_address_space*) ;
 int FUNC_2 (struct i915_address_space*) ;
 int FUNC_3 (struct i915_ppgtt*,int) ;
 struct i915_ppgtt* FUNC_4 (struct i915_address_space*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct i915_address_space *VAR_0)
{
 struct i915_ppgtt *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_5(VAR_0->i915))
  FUNC_3(VAR_1, 0);

 FUNC_0(VAR_0, VAR_1->pd, FUNC_2(VAR_0), VAR_0->top);
 FUNC_1(VAR_0);
}
