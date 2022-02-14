
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_path ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (int ,char const*) ;

int FUNC_4(const char *VAR_3, bool VAR_4)
{
 git_win32_path VAR_5;
 DWORD VAR_6, VAR_7;

 if (FUNC_3(VAR_5, VAR_3) < 0)
  return -1;

 VAR_6 = FUNC_0(VAR_5);


 if (VAR_6 == VAR_2)
  return -1;

 if (VAR_4)
  VAR_7 = VAR_6 | VAR_0;
 else
  VAR_7 = VAR_6 & ~VAR_0;

 if (VAR_6 != VAR_7 && !FUNC_1(VAR_5, VAR_7)) {
  FUNC_2(VAR_1, "failed to %s hidden bit for '%s'",
   VAR_4 ? "set" : "unset", VAR_3);
  return -1;
 }

 return 0;
}
