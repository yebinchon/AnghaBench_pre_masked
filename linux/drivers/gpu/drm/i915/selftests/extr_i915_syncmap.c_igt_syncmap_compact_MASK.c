
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct i915_syncmap {unsigned int height; int bitmap; struct i915_syncmap* parent; int prefix; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct i915_syncmap** FUNC_2 (struct i915_syncmap*) ;
 int FUNC_3 (struct i915_syncmap**) ;
 int FUNC_4 (struct i915_syncmap*,int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (struct i915_syncmap**) ;
 int FUNC_7 (struct i915_syncmap**,unsigned int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(void *VAR_4)
{
 struct i915_syncmap *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = -VAR_1;

 FUNC_6(&VAR_5);
 for (VAR_7 = VAR_3; VAR_7 < 64; VAR_7 += VAR_3) {
  VAR_8 = FUNC_3(&VAR_5);
  if (VAR_8)
   goto out;


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   u64 VAR_9 = VAR_6 * FUNC_1(VAR_7) + VAR_6;

   VAR_8 = FUNC_7(&VAR_5, VAR_9, 0);
   if (VAR_8)
    goto out;

   if (VAR_5->height) {
    FUNC_10("Inserting context=%llx (order=%d, idx=%d) did not return leaf (height=%d, prefix=%llx\n",
           VAR_9, VAR_7, VAR_6,
           VAR_5->height, VAR_5->prefix);
    VAR_8 = -VAR_0;
    goto out;
   }
  }

  VAR_5 = VAR_5->parent;
  if (VAR_5->parent) {
   FUNC_10("Parent (join) of last leaf was not the sync!\n");
   VAR_8 = -VAR_0;
   goto out;
  }

  if (VAR_5->height != VAR_7) {
   FUNC_10("Join does not have the expected height, found %d, expected %d\n",
          VAR_5->height, VAR_7);
   VAR_8 = -VAR_0;
   goto out;
  }

  if (VAR_5->bitmap != FUNC_0(VAR_2) - 1) {
   FUNC_10("Join is not full!, found %x (%d) expected %lx (%d)\n",
          VAR_5->bitmap, FUNC_5(VAR_5->bitmap),
          FUNC_0(VAR_2) - 1, VAR_2);
   VAR_8 = -VAR_0;
   goto out;
  }


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   struct i915_syncmap *VAR_10 = FUNC_2(VAR_5)[VAR_6];

   if (VAR_10->height) {
    FUNC_10("Child %d is a not leaf!\n", VAR_6);
    VAR_8 = -VAR_0;
    goto out;
   }

   if (VAR_10->parent != VAR_5) {
    FUNC_10("Child %d is not attached to us!\n",
           VAR_6);
    VAR_8 = -VAR_0;
    goto out;
   }

   if (!FUNC_9(VAR_10->bitmap)) {
    FUNC_10("Child %d holds more than one id, found %x (%d)\n",
           VAR_6, VAR_10->bitmap, FUNC_5(VAR_10->bitmap));
    VAR_8 = -VAR_0;
    goto out;
   }

   if (VAR_10->bitmap != FUNC_0(VAR_6)) {
    FUNC_10("Child %d has wrong seqno idx, found %d, expected %d\n",
           VAR_6, FUNC_8(VAR_10->bitmap), VAR_6);
    VAR_8 = -VAR_0;
    goto out;
   }
  }
 }
out:
 return FUNC_4(VAR_5, VAR_8);
}
