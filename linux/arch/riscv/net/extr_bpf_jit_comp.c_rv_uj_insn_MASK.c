
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u8 VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_0 & 0x80000) | ((VAR_0 & 0x3ff) << 9) |
       ((VAR_0 & 0x400) >> 2) | ((VAR_0 & 0x7f800) >> 11);

 return (VAR_3 << 12) | (VAR_1 << 7) | VAR_2;
}
