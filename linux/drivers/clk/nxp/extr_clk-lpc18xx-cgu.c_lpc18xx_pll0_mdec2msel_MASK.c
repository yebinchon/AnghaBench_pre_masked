
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 0x18003: return 1;
 case 0x10003: return 2;
 default:
  for (VAR_2 = VAR_0 + 1; VAR_1 != 0x4000 && VAR_2 > 0; VAR_2--)
   VAR_1 = ((VAR_1 ^ VAR_1 >> 14) & 1) | (VAR_1 << 1 & 0x7fff);
  return VAR_2;
 }
}
