
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 static const unsigned int VAR_3 = 0x80001B;
 u32 VAR_4;
 u32 VAR_5;

 VAR_5 = (VAR_2 << 8) | VAR_1;
 VAR_4 = ((*VAR_0 << 1) ^ VAR_5);

 if (VAR_4 & 0x1000000)
  VAR_4 ^= VAR_3;

 *VAR_0 = VAR_4;
}
