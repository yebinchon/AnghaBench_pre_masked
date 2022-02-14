
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {int bitmap; } ;


 int FUNC_0 (unsigned int) ;
 struct i915_syncmap** FUNC_1 (struct i915_syncmap*) ;

__attribute__((used)) static inline void FUNC_2(struct i915_syncmap *VAR_0,
        unsigned int VAR_1,
        struct i915_syncmap *VAR_2)
{
 VAR_0->bitmap |= FUNC_0(VAR_1);
 FUNC_1(VAR_0)[VAR_1] = VAR_2;
}
