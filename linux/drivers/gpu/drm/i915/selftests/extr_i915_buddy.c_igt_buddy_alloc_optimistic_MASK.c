
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_buddy_mm {int const max_order; } ;
struct i915_buddy_block {int link; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_buddy_block*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct i915_buddy_block*) ;
 int VAR_2 ;
 struct i915_buddy_block* FUNC_4 (struct i915_buddy_mm*,int) ;
 int FUNC_5 (struct i915_buddy_mm*) ;
 int FUNC_6 (struct i915_buddy_mm*,int *) ;
 int FUNC_7 (struct i915_buddy_mm*,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(void *VAR_3)
{
 const int VAR_4 = 16;
 struct i915_buddy_block *VAR_5;
 struct i915_buddy_mm VAR_6;
 FUNC_2(VAR_2);
 int VAR_7;
 int VAR_8;






 VAR_8 = FUNC_7(&VAR_6,
         VAR_1 * ((1 << (VAR_4 + 1)) - 1),
         VAR_1);
 if (VAR_8) {
  FUNC_9("buddy_init failed(%d)\n", VAR_8);
  return VAR_8;
 }
 FUNC_0(VAR_6.max_order != VAR_4);

 for (VAR_7 = 0; VAR_7 <= VAR_4; VAR_7++) {
  VAR_5 = FUNC_4(&VAR_6, VAR_7);
  if (FUNC_1(VAR_5)) {
   FUNC_10("buddy_alloc hit -ENOMEM with order=%d\n",
    VAR_7);
   VAR_8 = FUNC_3(VAR_5);
   goto err;
  }

  FUNC_8(&VAR_5->link, &VAR_2);
 }


 VAR_5 = FUNC_4(&VAR_6, 0);
 if (!FUNC_1(VAR_5)) {
  FUNC_10("buddy_alloc unexpectedly succeeded, it should be full!");
  FUNC_8(&VAR_5->link, &VAR_2);
  VAR_8 = -VAR_0;
  goto err;
 }

err:
 FUNC_6(&VAR_6, &VAR_2);
 FUNC_5(&VAR_6);
 return VAR_8;
}
