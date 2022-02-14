
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 static const char *VAR_1[] = {
  "SHELL", "HOME", "LOGNAME", "MAIL", "CDPATH",
  "IFS", "PATH", ((void*)0)
 };
 char *VAR_2;
 const char **VAR_3;
 size_t VAR_4;

 if (FUNC_2(VAR_0) > 1024 || (VAR_2 = FUNC_1(VAR_0, '=')) == ((void*)0))
  return (0);
 if (FUNC_3(VAR_0, "LD_", 3) == 0)
  return (0);
 for (VAR_3 = VAR_1; *VAR_3 != ((void*)0); VAR_3++) {
  VAR_4 = FUNC_2(*VAR_3);
  if (VAR_0[VAR_4] == '=' && FUNC_3(VAR_0, *VAR_3, VAR_4) == 0)
   return (0);
 }
 *VAR_2 = '\0';
 (void)FUNC_0(VAR_0, VAR_2 + 1, 1);
 *VAR_2 = '=';
 return (1);
}
