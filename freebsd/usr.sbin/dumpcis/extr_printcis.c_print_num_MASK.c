
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, const char *VAR_1, u_char *VAR_2, int VAR_3)
{
 switch (VAR_0) {
 case 0:
 case 0x10:
  return 0;
 case 1:
 case 0x11:
  FUNC_1(VAR_1, *VAR_2 + VAR_3);
  return 1;
 case 2:
 case 0x12:
  FUNC_1(VAR_1, FUNC_2(VAR_2) + VAR_3);
  return 2;
 case 0x13:
  FUNC_1(VAR_1, FUNC_3(VAR_2) + VAR_3);
  return 3;
 case 3:
 case 0x14:
  FUNC_1(VAR_1, FUNC_4(VAR_2) + VAR_3);
  return 4;
 }
 FUNC_0(1, "print_num(0x%x): Illegal arguments", VAR_0);

}
