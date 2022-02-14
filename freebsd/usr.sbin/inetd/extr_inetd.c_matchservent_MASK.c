
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {char* s_name; char** s_aliases; } ;


 struct servent* FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char **VAR_3, *VAR_4;
 struct servent *VAR_5;

 if (FUNC_1(VAR_2, "unix") == 0) {
  if ((VAR_4 = FUNC_2(VAR_0, '/')) != ((void*)0))
   VAR_0 = VAR_4 + 1;
  if ((VAR_4 = FUNC_2(VAR_1, '/')) != ((void*)0))
   VAR_1 = VAR_4 + 1;
 }
 if (FUNC_1(VAR_0, VAR_1) == 0)
  return(1);
 if ((VAR_5 = FUNC_0(VAR_0, VAR_2)) != ((void*)0)) {
  if (FUNC_1(VAR_1, VAR_5->s_name) == 0)
   return(1);
  for (VAR_3 = VAR_5->s_aliases; *VAR_3; VAR_3++)
   if (FUNC_1(VAR_1, *VAR_3) == 0)
    return(1);
 }
 return(0);
}
