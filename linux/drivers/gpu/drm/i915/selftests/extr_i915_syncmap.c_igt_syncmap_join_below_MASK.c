
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct i915_syncmap {int prefix; int height; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i915_syncmap*,int) ;
 int FUNC_2 (struct i915_syncmap**) ;
 scalar_t__ FUNC_3 (struct i915_syncmap**,unsigned int,int ) ;
 int FUNC_4 (struct i915_syncmap**,unsigned int,int ) ;
 int FUNC_5 (char*,unsigned int,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 struct i915_syncmap *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9 = -VAR_1;

 FUNC_2(&VAR_5);





 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for (VAR_7 = 64 - VAR_3; VAR_7 > 0; VAR_7 -= VAR_3) {
   u64 VAR_10 = VAR_6 * FUNC_0(VAR_7);

   VAR_9 = FUNC_4(&VAR_5, VAR_10, 0);
   if (VAR_9)
    goto out;

   if (VAR_5->height) {
    FUNC_5("Inserting context=%llx (order=%d, step=%d) did not return leaf (height=%d, prefix=%llx\n",
           VAR_10, VAR_7, VAR_6, VAR_5->height, VAR_5->prefix);
    VAR_9 = -VAR_0;
    goto out;
   }
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for (VAR_7 = VAR_3; VAR_7 < 64; VAR_7 += VAR_3) {
   u64 VAR_11 = VAR_6 * FUNC_0(VAR_7);

   if (!FUNC_3(&VAR_5, VAR_11, 0)) {
    FUNC_5("1: context %llx (order=%d, step=%d) not found\n",
           VAR_11, VAR_7, VAR_6);
    VAR_9 = -VAR_0;
    goto out;
   }

   for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++) {
    if (FUNC_3(&VAR_5, VAR_11 + VAR_8, 0)) {
     FUNC_5("1: context %llx (order=%d, step=%d) should not exist\n",
            VAR_11 + VAR_8, VAR_7, VAR_6);
     VAR_9 = -VAR_0;
     goto out;
    }
   }
  }
 }

 for (VAR_7 = VAR_3; VAR_7 < 64; VAR_7 += VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   u64 VAR_12 = VAR_6 * FUNC_0(VAR_7);

   if (!FUNC_3(&VAR_5, VAR_12, 0)) {
    FUNC_5("2: context %llx (order=%d, step=%d) not found\n",
           VAR_12, VAR_7, VAR_6);
    VAR_9 = -VAR_0;
    goto out;
   }
  }
 }

out:
 return FUNC_1(VAR_5, VAR_9);
}
