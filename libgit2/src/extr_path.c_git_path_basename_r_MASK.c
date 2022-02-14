
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (char const*) ;

int FUNC_2(git_buf *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 int VAR_4, VAR_5;


 if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
  VAR_3 = ".";
  VAR_4 = 1;
  goto Exit;
 }


 VAR_2 = VAR_1 + FUNC_1(VAR_1) - 1;
 while (VAR_2 > VAR_1 && *VAR_2 == '/')
  VAR_2--;


 if (VAR_2 == VAR_1 && *VAR_2 == '/') {
  VAR_3 = "/";
  VAR_4 = 1;
  goto Exit;
 }


 VAR_3 = VAR_2;
 while (VAR_3 > VAR_1 && *(VAR_3 - 1) != '/')
  VAR_3--;


 VAR_4 = (int)(VAR_2 - VAR_3 + 1);

Exit:
 VAR_5 = VAR_4;

 if (VAR_0 != ((void*)0) && FUNC_0(VAR_0, VAR_3, VAR_4) < 0)
  return -1;

 return VAR_5;
}
