
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef enum mmu_prefetch_mode { ____Placeholder_mmu_prefetch_mode } mmu_prefetch_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static u32 FUNC_2(enum mmu_prefetch_mode VAR_6,
      u8 VAR_7, u8 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_6 != VAR_2) {
  VAR_10 |= VAR_0;

  if (VAR_6 == VAR_3) {
   VAR_10 |= VAR_1;
   VAR_10 |= FUNC_0(VAR_7);
  }

  if (VAR_9 == VAR_5 || VAR_9 == VAR_4) {
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    VAR_10 |= FUNC_1(VAR_11);
  }
 }

 return VAR_10;
}
