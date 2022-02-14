
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_syncmap {int height; } ;


 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(const struct i915_syncmap *VAR_1, u64 VAR_2)
{
 return VAR_2 >> VAR_1->height >> VAR_0;
}
