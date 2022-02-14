
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ieee754dp {int bits; } ;


 scalar_t__ FUNC_0 (union ieee754dp) ;
 int FUNC_1 (union ieee754dp) ;
 int FUNC_2 (union ieee754dp) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;






 int FUNC_4 (union ieee754dp) ;
 int FUNC_5 (char*,...) ;

union ieee754dp FUNC_6(char *VAR_2, union ieee754dp VAR_3)
{
 int VAR_4;

 FUNC_5("%s", VAR_2);
 FUNC_5("<%08x,%08x>\n", (unsigned) (VAR_3.bits >> 32),
        (unsigned) VAR_3.bits);
 FUNC_5("\t=");
 switch (FUNC_4(VAR_3)) {
 case 130:
 case 129:
  FUNC_5("Nan %c", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  break;
 case 132:
  FUNC_5("%cInfinity", FUNC_2(VAR_3) ? '-' : '+');
  break;
 case 128:
  FUNC_5("%cZero", FUNC_2(VAR_3) ? '-' : '+');
  break;
 case 133:
  FUNC_5("%c0.", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  FUNC_5("e%d", FUNC_0(VAR_3) - VAR_0);
  break;
 case 131:
  FUNC_5("%c1.", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  FUNC_5("e%d", FUNC_0(VAR_3) - VAR_0);
  break;
 default:
  FUNC_5("Illegal/Unknown IEEE754 value class");
 }
 FUNC_5("\n");
 return VAR_3;
}
