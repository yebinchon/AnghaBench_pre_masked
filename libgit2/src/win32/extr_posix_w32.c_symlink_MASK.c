
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_path ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,char const*) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

int FUNC_4(const char *VAR_3, const char *VAR_4)
{
 git_win32_path VAR_5, VAR_6;
 DWORD VAR_7;

 if (FUNC_2(VAR_6, VAR_4) < 0 ||
     FUNC_1(VAR_5, VAR_0, VAR_3) < 0)
  return -1;

 VAR_7 = VAR_1;
 if (FUNC_3(VAR_3, VAR_4))
  VAR_7 |= VAR_2;

 if (!FUNC_0(VAR_6, VAR_5, VAR_7))
  return -1;

 return 0;
}
