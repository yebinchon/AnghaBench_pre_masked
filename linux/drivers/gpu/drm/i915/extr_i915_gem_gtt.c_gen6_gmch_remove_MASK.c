
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ggtt {int gsm; } ;
struct i915_address_space {int dummy; } ;


 int FUNC_0 (struct i915_address_space*) ;
 struct i915_ggtt* FUNC_1 (struct i915_address_space*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i915_address_space *VAR_0)
{
 struct i915_ggtt *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->gsm);
 FUNC_0(VAR_0);
}
