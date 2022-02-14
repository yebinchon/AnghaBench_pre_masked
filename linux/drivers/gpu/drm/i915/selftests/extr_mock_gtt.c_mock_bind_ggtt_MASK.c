
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_vma {int flags; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct i915_vma *VAR_2,
     enum i915_cache_level VAR_3,
     u32 VAR_4)
{
 VAR_2->flags |= VAR_0 | VAR_1;
 return 0;
}
