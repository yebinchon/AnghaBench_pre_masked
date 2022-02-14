
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_address_space {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct i915_address_space *VAR_4,
      dma_addr_t VAR_5,
      u64 VAR_6,
      enum i915_cache_level VAR_7,
      u32 VAR_8)
{
 unsigned int VAR_9 = (VAR_7 == VAR_2) ?
  VAR_1 : VAR_0;

 FUNC_0(VAR_5, VAR_6 >> VAR_3, VAR_9);
}
