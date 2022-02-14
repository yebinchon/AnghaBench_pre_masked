
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(u8 *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = 0;
 u16 VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 while (VAR_2 < VAR_1) {
  VAR_4 |= (u32)FUNC_0(*(__be16 *)(VAR_0));
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   VAR_4 <<= 1;
   if (VAR_5 != 0)
    VAR_4 ^= 0x80050000UL;
   VAR_5 = VAR_4 & 0x80000000UL;
  }
  VAR_2++;
  VAR_0 += (sizeof(u16));
 }
 return (u16)(VAR_4 >> 16);
}
