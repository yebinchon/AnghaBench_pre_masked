
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (char**,char*,long,...) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static char *
FUNC_4(int64_t VAR_0)
{
 time_t VAR_1, VAR_2;
 char *VAR_3;
 static time_t VAR_4;

 if (VAR_4 == 0)
  FUNC_3(&VAR_4);
 if (VAR_4 > VAR_0) {
  if ((VAR_3 = FUNC_2("none")) == ((void*)0))
   FUNC_1(1, "strdup() failed in timeprt()");
  return (VAR_3);
 }
 VAR_0 -= VAR_4;
 VAR_2 = (VAR_0 + 30) / 60;
 VAR_1 = (VAR_2 + 30) / 60;
 if (VAR_1 >= 36) {
  if (FUNC_0(&VAR_3, "%lddays", ((long)VAR_1 + 12) / 24) < 0)
   FUNC_1(1, "asprintf() failed in timeprt(1)");
  return (VAR_3);
 }
 if (VAR_2 >= 60) {
  if (FUNC_0(&VAR_3, "%2ld:%ld", (long)VAR_2 / 60,
      (long)VAR_2 % 60) < 0)
   FUNC_1(1, "asprintf() failed in timeprt(2)");
  return (VAR_3);
 }
 if (FUNC_0(&VAR_3, "%2ld", (long)VAR_2) < 0)
  FUNC_1(1, "asprintf() failed in timeprt(3)");
 return (VAR_3);
}
