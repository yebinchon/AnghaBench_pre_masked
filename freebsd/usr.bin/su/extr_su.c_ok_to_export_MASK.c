
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 static const char *VAR_1[] = {
  "SHELL", "LOGNAME", "MAIL", "CDPATH",
  "IFS", "PATH", ((void*)0)
 };
 const char **VAR_2;
 size_t VAR_3;

 if (FUNC_1(VAR_0) > 1024 || FUNC_0(VAR_0, '=') == ((void*)0))
  return 0;
 if (FUNC_2(VAR_0, "LD_", 3) == 0)
  return 0;
 for (VAR_2 = VAR_1; *VAR_2 != ((void*)0); VAR_2++) {
  VAR_3 = FUNC_1(*VAR_2);
  if (VAR_0[VAR_3] == '=' && FUNC_2(VAR_0, *VAR_2, VAR_3) == 0)
   return 0;
 }
 return 1;
}
