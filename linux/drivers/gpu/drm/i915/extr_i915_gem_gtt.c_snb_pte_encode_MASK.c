
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int gen6_pte_t ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int) ;

__attribute__((used)) static u64 FUNC_2(dma_addr_t VAR_3,
     enum i915_cache_level VAR_4,
     u32 VAR_5)
{
 gen6_pte_t VAR_6 = VAR_2;
 VAR_6 |= FUNC_0(VAR_3);

 switch (VAR_4) {
 case 130:
 case 129:
  VAR_6 |= VAR_0;
  break;
 case 128:
  VAR_6 |= VAR_1;
  break;
 default:
  FUNC_1(VAR_4);
 }

 return VAR_6;
}
