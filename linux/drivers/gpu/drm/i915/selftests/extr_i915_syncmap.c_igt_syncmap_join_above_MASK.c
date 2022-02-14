
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_syncmap {int bitmap; int height; struct i915_syncmap* parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (struct i915_syncmap*,int ) ;
 struct i915_syncmap** FUNC_2 (struct i915_syncmap*) ;
 int FUNC_3 (struct i915_syncmap**,int ,int ) ;
 int FUNC_4 (struct i915_syncmap*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i915_syncmap**) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct i915_syncmap *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 FUNC_6(&VAR_3);
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 64; VAR_5 += VAR_1) {
   u64 VAR_7 = FUNC_0(VAR_5);
   struct i915_syncmap *VAR_8;

   VAR_6 = FUNC_3(&VAR_3, VAR_7, 0);
   if (VAR_6)
    goto out;

   VAR_8 = VAR_3->parent;
   if (!VAR_8)
    continue;

   if (!VAR_8->height) {
    FUNC_7("Parent with no height!\n");
    VAR_6 = -VAR_0;
    goto out;
   }

   if (FUNC_5(VAR_8->bitmap) != 2) {
    FUNC_7("Join does not have 2 children: %x (%d)\n",
           VAR_8->bitmap, FUNC_5(VAR_8->bitmap));
    VAR_6 = -VAR_0;
    goto out;
   }

   if (FUNC_2(VAR_8)[FUNC_1(VAR_8, VAR_7)] != VAR_3) {
    FUNC_7("Leaf misplaced in parent!\n");
    VAR_6 = -VAR_0;
    goto out;
   }
  }
 }
out:
 return FUNC_4(VAR_3, VAR_6);
}
