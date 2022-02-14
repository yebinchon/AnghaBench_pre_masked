
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u16 VAR_3;
 u8 VAR_4;

 VAR_3 = (VAR_1 - 1) / 2;
 if (VAR_1 & 0x1) {
  VAR_4 = VAR_0[VAR_3] & 0xf;
  VAR_0[VAR_3] = (VAR_2 << 4) | VAR_4;
 } else {
  VAR_4 = VAR_0[VAR_3] & 0xf0;
  VAR_0[VAR_3] = (VAR_2 & 0xf) | VAR_4;
 }
}
