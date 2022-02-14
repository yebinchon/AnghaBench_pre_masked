
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_utf8_path ;
typedef int git_win32_path ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;

int FUNC_5(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 git_win32_path VAR_3, VAR_4;
 git_win32_utf8_path VAR_5;
 int VAR_6;
 if (FUNC_0(VAR_3, VAR_0) < 0 ||
  FUNC_1(VAR_4, VAR_3) < 0 ||
  (VAR_6 = FUNC_2(VAR_5, VAR_4)) < 0)
  return -1;

 VAR_2 = FUNC_4((size_t)VAR_6, VAR_2);
 FUNC_3(VAR_1, VAR_5, VAR_2);

 return (int)VAR_2;
}
