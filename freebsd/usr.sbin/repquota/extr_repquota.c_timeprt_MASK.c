
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int buf ;


 int FUNC_0 (char*,char*,long,...) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__*) ;

char *
FUNC_3(time_t VAR_0)
{
 time_t VAR_1, VAR_2;
 static char VAR_3[20];
 static time_t VAR_4;

 if (VAR_4 == 0)
  FUNC_2(&VAR_4);
 if (VAR_4 > VAR_0) {
  FUNC_1(VAR_3, "none", sizeof (VAR_3));
  return (VAR_3);
 }
 VAR_0 -= VAR_4;
 VAR_2 = (VAR_0 + 30) / 60;
 VAR_1 = (VAR_2 + 30) / 60;
 if (VAR_1 >= 36) {
  FUNC_0(VAR_3, "%lddays", (long)(VAR_1 + 12) / 24);
  return (VAR_3);
 }
 if (VAR_2 >= 60) {
  FUNC_0(VAR_3, "%2ld:%ld", (long)VAR_2 / 60,
      (long)VAR_2 % 60);
  return (VAR_3);
 }
 FUNC_0(VAR_3, "%2ld", (long)VAR_2);
 return (VAR_3);
}
