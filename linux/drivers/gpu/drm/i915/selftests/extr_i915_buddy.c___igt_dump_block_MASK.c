
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_buddy_mm {int dummy; } ;
struct i915_buddy_block {int parent; int header; } ;


 int FUNC_0 (struct i915_buddy_block*) ;
 int FUNC_1 (struct i915_buddy_block*) ;
 int FUNC_2 (struct i915_buddy_mm*,struct i915_buddy_block*) ;
 int FUNC_3 (struct i915_buddy_block*) ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct i915_buddy_mm *VAR_0,
        struct i915_buddy_block *VAR_1,
        bool VAR_2)
{
 FUNC_4("block info: header=%llx, state=%u, order=%d, offset=%llx size=%llx root=%s buddy=%s\n",
        VAR_1->header,
        FUNC_3(VAR_1),
        FUNC_1(VAR_1),
        FUNC_0(VAR_1),
        FUNC_2(VAR_0, VAR_1),
        FUNC_5(!VAR_1->parent),
        FUNC_5(VAR_2));
}
