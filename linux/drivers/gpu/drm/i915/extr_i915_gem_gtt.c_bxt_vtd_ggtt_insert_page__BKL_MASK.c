
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct insert_page {int member_3; int member_2; int member_1; struct i915_address_space* member_0; } ;
struct i915_address_space {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct insert_page*,int *) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_1,
       dma_addr_t VAR_2,
       u64 VAR_3,
       enum i915_cache_level VAR_4,
       u32 VAR_5)
{
 struct insert_page VAR_6 = { VAR_1, VAR_2, VAR_3, VAR_4 };

 FUNC_0(VAR_0, &VAR_6, ((void*)0));
}
