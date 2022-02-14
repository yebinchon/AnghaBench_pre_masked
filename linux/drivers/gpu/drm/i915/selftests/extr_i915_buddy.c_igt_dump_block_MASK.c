
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_buddy_mm {int dummy; } ;
struct i915_buddy_block {int dummy; } ;


 int FUNC_0 (struct i915_buddy_mm*,struct i915_buddy_block*,int) ;
 struct i915_buddy_block* FUNC_1 (struct i915_buddy_block*) ;

__attribute__((used)) static void FUNC_2(struct i915_buddy_mm *VAR_0,
      struct i915_buddy_block *VAR_1)
{
 struct i915_buddy_block *VAR_2;

 FUNC_0(VAR_0, VAR_1, 0);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_2, 1);
}
