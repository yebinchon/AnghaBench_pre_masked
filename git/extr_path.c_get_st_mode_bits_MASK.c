
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int *VAR_1)
{
 struct stat VAR_2;
 if (FUNC_0(VAR_0, &VAR_2) < 0)
  return -1;
 *VAR_1 = VAR_2.st_mode;
 return 0;
}
