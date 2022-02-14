
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

const char *FUNC_2(void)
{
 u16 VAR_0 = FUNC_0();
 u16 VAR_1 = FUNC_1();

 switch (VAR_0) {
 case 135:
  return "TI AR7 (TNETD7100)";
 case 134:
  return "TI AR7 (TNETD7200)";
 case 133:
  return "TI AR7 (TNETD7300)";
 case 132:
  switch (VAR_1) {
  case 131:
   return "TI AR7 (TNETV1050)";
  case 130:
   return "TI AR7 (TNETV1055)";
  case 129:
   return "TI AR7 (TNETV1056)";
  case 128:
   return "TI AR7 (TNETV1060)";
  }

 default:
  return "TI AR7 (unknown)";
 }
}
