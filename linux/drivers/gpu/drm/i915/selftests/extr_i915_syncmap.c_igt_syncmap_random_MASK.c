
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct i915_syncmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct i915_syncmap*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i915_syncmap**) ;
 int FUNC_6 (struct i915_syncmap**,int ,scalar_t__) ;
 int FUNC_7 (struct i915_syncmap**,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (char*,unsigned long,unsigned long) ;
 int FUNC_9 (char*,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int,unsigned long) ;

__attribute__((used)) static int FUNC_13(void *VAR_6)
{
 FUNC_0(VAR_5);
 FUNC_1(VAR_3);
 struct i915_syncmap *VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_5(&VAR_7);







 VAR_8 = 0;
 VAR_9 = VAR_4 + VAR_1/100 + 1;
 do {
  u64 VAR_13 = FUNC_4(&VAR_5);

  VAR_12 = FUNC_7(&VAR_7, VAR_13, 0);
  if (VAR_12)
   goto out;

  VAR_8++;
 } while (!FUNC_12(VAR_4, VAR_9));
 VAR_11 = 0;

 VAR_9 = 0;
 do {
  FUNC_0(VAR_2);
  u32 VAR_14 = VAR_11;
  bool VAR_15;

  VAR_11 = FUNC_10(&VAR_5);
  VAR_15 = FUNC_11(VAR_14, VAR_11);

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   u64 VAR_16 = FUNC_4(&VAR_2);

   if (FUNC_6(&VAR_7, VAR_16, VAR_11) != VAR_15) {
    FUNC_9("context=%llu, last=%u this=%u did not match expectation (%d)\n",
           VAR_16, VAR_14, VAR_11, VAR_15);
    VAR_12 = -VAR_0;
    goto out;
   }

   VAR_12 = FUNC_7(&VAR_7, VAR_16, VAR_11);
   if (VAR_12)
    goto out;
  }

  VAR_9++;
 } while (!FUNC_2(VAR_3, ((void*)0)));
 FUNC_8("Completed %lu passes, each of %lu contexts\n", VAR_9, VAR_8);
out:
 return FUNC_3(VAR_7, VAR_12);
}
