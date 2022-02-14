
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_buddy_mm {int chunk_size; } ;
struct i915_buddy_block {int dummy; } ;


 int FUNC_0 (struct i915_buddy_block*) ;

__attribute__((used)) static inline u64
FUNC_1(struct i915_buddy_mm *VAR_0,
        struct i915_buddy_block *VAR_1)
{
 return VAR_0->chunk_size << FUNC_0(VAR_1);
}
