
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

int FUNC_2(const char *VAR_1, struct stat *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2) == 0)
  return 0;

 return FUNC_0(VAR_0, VAR_1, "stat");
}
