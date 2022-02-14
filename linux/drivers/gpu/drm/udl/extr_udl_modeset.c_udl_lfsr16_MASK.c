
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0)
{
 u32 VAR_1 = 0xFFFF;

 while (VAR_0--) {
  VAR_1 = ((VAR_1 << 1) |
   (((VAR_1 >> 15) ^ (VAR_1 >> 4) ^ (VAR_1 >> 2) ^ (VAR_1 >> 1)) & 1))
   & 0xFFFF;
 }

 return (u16) VAR_1;
}
