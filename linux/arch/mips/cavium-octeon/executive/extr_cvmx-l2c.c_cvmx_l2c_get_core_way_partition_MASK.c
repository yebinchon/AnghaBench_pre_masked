
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

int FUNC_4(uint32_t VAR_5)
{
 uint32_t VAR_6;


 if (VAR_5 >= FUNC_2())
  return -1;

 if (FUNC_1(VAR_4))
  return FUNC_3(FUNC_0(VAR_5)) & 0xffff;





 VAR_6 = (VAR_5 & 0x3) * 8;






 switch (VAR_5 & 0xC) {
 case 0x0:
  return (FUNC_3(VAR_0) & (0xFF << VAR_6)) >> VAR_6;
 case 0x4:
  return (FUNC_3(VAR_1) & (0xFF << VAR_6)) >> VAR_6;
 case 0x8:
  return (FUNC_3(VAR_2) & (0xFF << VAR_6)) >> VAR_6;
 case 0xC:
  return (FUNC_3(VAR_3) & (0xFF << VAR_6)) >> VAR_6;
 }
 return 0;
}
