
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int gen8_pte_t ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef int dma_addr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u64 FUNC_1(dma_addr_t VAR_6,
      enum i915_cache_level VAR_7,
      u32 VAR_8)
{
 gen8_pte_t VAR_9 = VAR_6 | VAR_4 | VAR_5;

 if (FUNC_0(VAR_8 & VAR_3))
  VAR_9 &= ~VAR_5;

 switch (VAR_7) {
 case 129:
  VAR_9 |= VAR_2;
  break;
 case 128:
  VAR_9 |= VAR_1;
  break;
 default:
  VAR_9 |= VAR_0;
  break;
 }

 return VAR_9;
}
