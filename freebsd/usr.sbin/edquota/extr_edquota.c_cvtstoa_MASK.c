
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 int FUNC_0 (char*,char*,int ,char*) ;

char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[20];

 if (VAR_0 % (24 * 60 * 60) == 0) {
  VAR_0 /= 24 * 60 * 60;
  FUNC_0(VAR_1, "%ju day%s", (uintmax_t)VAR_0,
      VAR_0 == 1 ? "" : "s");
 } else if (VAR_0 % (60 * 60) == 0) {
  VAR_0 /= 60 * 60;
  FUNC_0(VAR_1, "%ju hour%s", (uintmax_t)VAR_0,
      VAR_0 == 1 ? "" : "s");
 } else if (VAR_0 % 60 == 0) {
  VAR_0 /= 60;
  FUNC_0(VAR_1, "%ju minute%s", (uintmax_t)VAR_0,
      VAR_0 == 1 ? "" : "s");
 } else
  FUNC_0(VAR_1, "%ju second%s", (uintmax_t)VAR_0,
      VAR_0 == 1 ? "" : "s");
 return (VAR_1);
}
