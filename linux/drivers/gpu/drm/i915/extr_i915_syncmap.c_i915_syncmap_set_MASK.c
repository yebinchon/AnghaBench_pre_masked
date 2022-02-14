
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_syncmap {scalar_t__ prefix; } ;


 scalar_t__ FUNC_0 (struct i915_syncmap*,int ) ;
 int FUNC_1 (struct i915_syncmap**,int ,int ) ;
 int FUNC_2 (struct i915_syncmap*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct i915_syncmap **VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct i915_syncmap *VAR_3 = *VAR_0;





 if (FUNC_3(VAR_3 && FUNC_0(VAR_3, VAR_1) == VAR_3->prefix)) {
  FUNC_2(VAR_3, VAR_1, VAR_2);
  return 0;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
