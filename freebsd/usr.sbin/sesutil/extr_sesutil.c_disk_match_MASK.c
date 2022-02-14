
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3;

 VAR_3 = VAR_0;
 while ((VAR_3 = FUNC_0(VAR_3, VAR_1)) != ((void*)0)) {
  if (VAR_3[VAR_2] == '\0' || VAR_3[VAR_2] == ',') {
   return (1);
  }
  VAR_3++;
 }

 return (0);
}
