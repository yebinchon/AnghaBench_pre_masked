
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_0)
{
 u32 VAR_1;

 if (VAR_0 < 0x69)
  return 0;

 if (VAR_0 == 0xc1 || VAR_0 == 0x6c || VAR_0 == 0x7c)
  return 0;






 VAR_1 = FUNC_0(0x80000001);
 VAR_1 = (VAR_1 >> 9) & 0x1f;


 if ((VAR_0 == 0x6f || VAR_0 == 0x7f) &&
     (VAR_1 == 0x7 || VAR_1 == 0x9 || VAR_1 == 0xc))
  return 0;


 if (VAR_0 == 0x6b &&
     (VAR_1 == 0xb || VAR_1 == 0xc))
  return 0;

 return 1;
}
