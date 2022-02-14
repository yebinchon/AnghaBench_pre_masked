
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, size_t VAR_1, const char *VAR_2,
    const char **VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2);
 const char *VAR_5 = VAR_0;

 while (VAR_5 && VAR_5 < VAR_0 + VAR_1) {
  const char *VAR_6 = FUNC_1(VAR_5, '\n');

  if ((VAR_0 + VAR_1 <= VAR_6) || VAR_5 == VAR_6)
   return ((void*)0);
  if (VAR_5 + VAR_4 < VAR_6 &&
      !FUNC_0(VAR_5, VAR_2, VAR_4) && VAR_5[VAR_4] == ' ') {
   int VAR_7 = VAR_4 + 1;
   if (VAR_3)
    *VAR_3 = *VAR_6 ? VAR_6 + 1 : VAR_6;
   return FUNC_3(VAR_5 + VAR_7, (VAR_6 - VAR_5) - VAR_7);
  }
  VAR_5 = *VAR_6 ? VAR_6 + 1 : ((void*)0);
 }
 return ((void*)0);
}
