
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0, u8 VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 VAR_4 = VAR_2 ^ (VAR_3 & 1);
 VAR_4 ^= VAR_2 >> 1;
 VAR_4 ^= VAR_2 >> 2;
 VAR_4 ^= VAR_2 >> 4;
 VAR_4 ^= VAR_2 >> 5;
 VAR_4 ^= VAR_2 >> 7;
 VAR_4 ^= VAR_2 >> 11;
 VAR_4 ^= VAR_2 >> 15;
 VAR_5 = (VAR_2 << 1) ^ VAR_3;
 VAR_5 = (VAR_5 & ~1) | (VAR_4 & 1);

 return (u16)VAR_5;
}
