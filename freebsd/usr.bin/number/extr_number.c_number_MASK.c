
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 switch (VAR_3) {
 case 3:
  if (*VAR_2 != '0') {
   VAR_5 = 1;
   (void)FUNC_0("%s hundred", VAR_0[*VAR_2 - '0']);
  }
  ++VAR_2;

 case 2:
  VAR_4 = (VAR_2[1] - '0') + (VAR_2[0] - '0') * 10;
  if (VAR_4) {
   if (VAR_5)
    (void)FUNC_0(" ");
   if (VAR_4 < 20)
    (void)FUNC_0("%s", VAR_0[VAR_4]);
   else {
    (void)FUNC_0("%s", VAR_1[VAR_4 / 10]);
    if (VAR_4 % 10)
     (void)FUNC_0("-%s", VAR_0[VAR_4 % 10]);
   }
   VAR_5 = 1;
  }
  break;
 case 1:
  if (*VAR_2 != '0') {
   VAR_5 = 1;
   (void)FUNC_0("%s", VAR_0[*VAR_2 - '0']);
  }
 }
 return (VAR_5);
}
