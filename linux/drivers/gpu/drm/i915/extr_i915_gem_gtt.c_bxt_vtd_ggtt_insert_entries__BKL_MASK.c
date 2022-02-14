
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct insert_entries {int member_2; int member_3; struct i915_vma* member_1; struct i915_address_space* member_0; } ;
struct i915_vma {int dummy; } ;
struct i915_address_space {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 int VAR_0 ;
 int FUNC_0 (int ,struct insert_entries*,int *) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_1,
          struct i915_vma *VAR_2,
          enum i915_cache_level VAR_3,
          u32 VAR_4)
{
 struct insert_entries VAR_5 = { VAR_1, VAR_2, VAR_3, VAR_4 };

 FUNC_0(VAR_0, &VAR_5, ((void*)0));
}
