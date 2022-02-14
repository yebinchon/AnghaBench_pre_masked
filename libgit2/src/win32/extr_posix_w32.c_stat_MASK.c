
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int git_win32_path ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int ,struct stat*,int) ;

int FUNC_4(const char* VAR_0, struct stat* VAR_1)
{
 git_win32_path VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_2, VAR_0)) < 0 ||
  FUNC_3(VAR_2, VAR_1, 0) < 0)
  return -1;



 if (FUNC_0(VAR_1->st_mode))
  return FUNC_1(VAR_2, VAR_1);

 return 0;
}
