
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ ubig ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char**,int ) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_3, char *VAR_4[])
{
 ubig VAR_5;
 ubig VAR_6;
 int VAR_7;
 char *VAR_8;

 FUNC_0();
 if (FUNC_1() < 0)
  FUNC_2(1, "cap_enter");

 while ((VAR_7 = FUNC_4(VAR_3, VAR_4, "h")) != -1)
  switch (VAR_7) {
  case 'h':
   VAR_1++;
   break;
  case '?':
  default:
   FUNC_8();
  }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 VAR_5 = 0;
 VAR_6 = (uint64_t)(-1);







 switch (VAR_3) {
 case 2:

  if (VAR_4[0][0] == '-' || VAR_4[1][0] == '-')
   FUNC_3(1, "negative numbers aren't permitted.");

  VAR_0 = 0;
  VAR_5 = FUNC_7(VAR_4[0], &VAR_8, 0);
  if (VAR_0)
   FUNC_2(1, "%s", VAR_4[0]);
  if (*VAR_8 != '\0')
   FUNC_3(1, "%s: illegal numeric format.", VAR_4[0]);

  VAR_0 = 0;
  VAR_6 = FUNC_7(VAR_4[1], &VAR_8, 0);
  if (VAR_0)
   FUNC_2(1, "%s", VAR_4[1]);
  if (*VAR_8 != '\0')
   FUNC_3(1, "%s: illegal numeric format.", VAR_4[1]);
  break;
 case 1:

  if (VAR_4[0][0] == '-')
   FUNC_3(1, "negative numbers aren't permitted.");

  VAR_0 = 0;
  VAR_5 = FUNC_7(VAR_4[0], &VAR_8, 0);
  if (VAR_0)
   FUNC_2(1, "%s", VAR_4[0]);
  if (*VAR_8 != '\0')
   FUNC_3(1, "%s: illegal numeric format.", VAR_4[0]);
  break;
 case 0:
  VAR_5 = FUNC_6();
  break;
 default:
  FUNC_8();
 }

 if (VAR_5 > VAR_6)
  FUNC_3(1, "start value must be less than stop value.");
 FUNC_5(VAR_5, VAR_6);
 return (0);
}
