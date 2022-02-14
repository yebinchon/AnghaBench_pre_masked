
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u32 FUNC_0(u16 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = VAR_0 >> 5, VAR_6 = VAR_0 & 0x1f;

 return (VAR_5 << 25) | (VAR_1 << 20) | (VAR_2 << 15) | (VAR_3 << 12) |
  (VAR_6 << 7) | VAR_4;
}
