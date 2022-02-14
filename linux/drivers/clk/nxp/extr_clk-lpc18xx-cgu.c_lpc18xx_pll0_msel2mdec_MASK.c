
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
 u32 VAR_2, VAR_3 = 0x4000;

 switch (VAR_1) {
 case 0: return 0;
 case 1: return 0x18003;
 case 2: return 0x10003;
 default:
  for (VAR_2 = VAR_1; VAR_2 <= VAR_0; VAR_2++)
   VAR_3 = ((VAR_3 ^ VAR_3 >> 1) & 1) << 14 | (VAR_3 >> 1 & 0xffff);
  return VAR_3;
 }
}
