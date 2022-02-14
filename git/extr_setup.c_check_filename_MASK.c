
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,struct stat*) ;
 char* FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;

int FUNC_7(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 struct stat VAR_4;

 if (FUNC_6(VAR_2, ":/", &VAR_2)) {
  if (!*VAR_2)
   return 1;
  VAR_1 = ((void*)0);
 } else if (FUNC_6(VAR_2, ":!", &VAR_2) ||
     FUNC_6(VAR_2, ":^", &VAR_2)) {
  if (!*VAR_2)
   return 1;
 }

 if (VAR_1)
  VAR_2 = VAR_3 = FUNC_5(VAR_1, VAR_2);

 if (!FUNC_4(VAR_2, &VAR_4)) {
  FUNC_2(VAR_3);
  return 1;
 }
 if (FUNC_3(VAR_0)) {
  FUNC_2(VAR_3);
  return 0;
 }
 FUNC_1(FUNC_0("failed to stat '%s'"), VAR_2);
}
