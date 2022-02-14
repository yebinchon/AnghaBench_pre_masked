
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_syncmap {int bitmap; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct i915_syncmap*,int ) ;
 int * FUNC_2 (struct i915_syncmap*) ;

__attribute__((used)) static inline void FUNC_3(struct i915_syncmap *VAR_0, u64 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_0, VAR_1);

 VAR_0->bitmap |= FUNC_0(VAR_3);
 FUNC_2(VAR_0)[VAR_3] = VAR_2;
}
