
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0, int *VAR_1, struct stat *VAR_2)
{
 *VAR_1 = FUNC_2(VAR_0);
 if (*VAR_1 < 0)
  return 0;
 if (FUNC_1(*VAR_1, VAR_2)) {
  FUNC_0(*VAR_1);
  return 0;
 }
 return 1;
}
