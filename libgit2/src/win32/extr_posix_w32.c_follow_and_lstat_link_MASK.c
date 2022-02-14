
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int git_win32_path ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct stat*,int) ;

__attribute__((used)) static int FUNC_2(git_win32_path VAR_0, struct stat* VAR_1)
{
 git_win32_path VAR_2;

 if (FUNC_0(VAR_2, VAR_0) < 0)
  return -1;

 return FUNC_1(VAR_2, VAR_1, 0);
}
