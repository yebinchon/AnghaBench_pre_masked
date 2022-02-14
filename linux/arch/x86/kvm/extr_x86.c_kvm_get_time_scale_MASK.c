
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
typedef scalar_t__ s8 ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_0, uint64_t VAR_1,
          s8 *VAR_2, u32 *VAR_3)
{
 uint64_t VAR_4;
 int32_t VAR_5 = 0;
 uint64_t VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_1;
 VAR_4 = VAR_0;
 while (VAR_6 > VAR_4*2 || VAR_6 & 0xffffffff00000000ULL) {
  VAR_6 >>= 1;
  VAR_5--;
 }

 VAR_7 = (uint32_t)VAR_6;
 while (VAR_7 <= VAR_4 || VAR_4 & 0xffffffff00000000ULL) {
  if (VAR_4 & 0xffffffff00000000ULL || VAR_7 & 0x80000000)
   VAR_4 >>= 1;
  else
   VAR_7 <<= 1;
  VAR_5++;
 }

 *VAR_2 = VAR_5;
 *VAR_3 = FUNC_0(VAR_4, VAR_7);
}
