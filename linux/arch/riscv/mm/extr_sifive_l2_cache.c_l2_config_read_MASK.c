
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2 + VAR_0);
 VAR_4 = VAR_3 & 0xFF;
 FUNC_0("L2CACHE: No. of Banks in the cache: %d\n", VAR_4);
 VAR_4 = (VAR_3 & 0xFF00) >> 8;
 FUNC_0("L2CACHE: No. of ways per bank: %d\n", VAR_4);
 VAR_4 = (VAR_3 & 0xFF0000) >> 16;
 FUNC_0("L2CACHE: Sets per bank: %llu\n", (uint64_t)1 << VAR_4);
 VAR_4 = (VAR_3 & 0xFF000000) >> 24;
 FUNC_0("L2CACHE: Bytes per cache block: %llu\n", (uint64_t)1 << VAR_4);

 VAR_3 = FUNC_1(VAR_2 + VAR_1);
 FUNC_0("L2CACHE: Index of the largest way enabled: %d\n", VAR_3);
}
