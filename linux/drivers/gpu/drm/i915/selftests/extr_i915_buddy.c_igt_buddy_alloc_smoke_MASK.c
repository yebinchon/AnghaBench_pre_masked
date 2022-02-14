
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct i915_buddy_mm {int max_order; scalar_t__ size; } ;
struct i915_buddy_block {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i915_buddy_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_buddy_block*) ;
 int VAR_2 ;
 struct i915_buddy_block* FUNC_3 (struct i915_buddy_mm*,int) ;
 int FUNC_4 (struct i915_buddy_block*) ;
 scalar_t__ FUNC_5 (struct i915_buddy_mm*,struct i915_buddy_block*) ;
 int FUNC_6 (struct i915_buddy_mm*) ;
 int FUNC_7 (struct i915_buddy_mm*,int *) ;
 int FUNC_8 (struct i915_buddy_mm*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct i915_buddy_mm*,int *,scalar_t__,int) ;
 int FUNC_10 (struct i915_buddy_mm*) ;
 int FUNC_11 (scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,int,...) ;

__attribute__((used)) static int FUNC_15(void *VAR_3)
{
 struct i915_buddy_mm VAR_4;
 int VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 int VAR_8;

 FUNC_11(&VAR_7, &VAR_6);

 FUNC_14("buddy_init with size=%llx, chunk_size=%llx\n", VAR_7, VAR_6);

 VAR_8 = FUNC_8(&VAR_4, VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_13("buddy_init failed(%d)\n", VAR_8);
  return VAR_8;
 }

 for (VAR_5 = VAR_4.max_order; VAR_5 >= 0; VAR_5--) {
  struct i915_buddy_block *VAR_9;
  int VAR_10;
  FUNC_1(VAR_2);
  u64 VAR_11;

  VAR_8 = FUNC_10(&VAR_4);
  if (VAR_8) {
   FUNC_13("pre-mm check failed, abort\n");
   break;
  }

  FUNC_14("filling from max_order=%u\n", VAR_5);

  VAR_10 = VAR_5;
  VAR_11 = 0;

  do {
retry:
   VAR_9 = FUNC_3(&VAR_4, VAR_10);
   if (FUNC_0(VAR_9)) {
    VAR_8 = FUNC_2(VAR_9);
    if (VAR_8 == -VAR_1) {
     FUNC_14("buddy_alloc hit -ENOMEM with order=%d\n",
      VAR_10);
    } else {
     if (VAR_10--) {
      VAR_8 = 0;
      goto retry;
     }

     FUNC_13("buddy_alloc with order=%d failed(%d)\n",
            VAR_10, VAR_8);
    }

    break;
   }

   FUNC_12(&VAR_9->link, &VAR_2);

   if (FUNC_4(VAR_9) != VAR_10) {
    FUNC_13("buddy_alloc order mismatch\n");
    VAR_8 = -VAR_0;
    break;
   }

   VAR_11 += FUNC_5(&VAR_4, VAR_9);
  } while (VAR_11 < VAR_4.size);

  if (!VAR_8)
   VAR_8 = FUNC_9(&VAR_4, &VAR_2, VAR_11, 0);

  FUNC_7(&VAR_4, &VAR_2);

  if (!VAR_8) {
   VAR_8 = FUNC_10(&VAR_4);
   if (VAR_8)
    FUNC_13("post-mm check failed\n");
  }

  if (VAR_8)
   break;
 }

 if (VAR_8 == -VAR_1)
  VAR_8 = 0;

 FUNC_6(&VAR_4);

 return VAR_8;
}
