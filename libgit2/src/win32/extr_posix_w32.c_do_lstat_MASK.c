
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int git_win32_path ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct stat*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, struct stat *VAR_1, bool VAR_2)
{
 git_win32_path VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3, VAR_0)) < 0)
  return -1;

 FUNC_1(VAR_3, VAR_4);

 return FUNC_2(VAR_3, VAR_1, VAR_2);
}
