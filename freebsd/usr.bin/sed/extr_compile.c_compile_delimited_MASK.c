
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,char*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_2(char *VAR_2, char *VAR_3, int VAR_4)
{
 char VAR_5;

 VAR_5 = *VAR_2++;
 if (VAR_5 == '\0')
  return (((void*)0));
 else if (VAR_5 == '\\')
  FUNC_1(1, "%lu: %s: \\ can not be used as a string delimiter",
    VAR_1, VAR_0);
 else if (VAR_5 == '\n')
  FUNC_1(1, "%lu: %s: newline can not be used as a string delimiter",
    VAR_1, VAR_0);
 while (*VAR_2) {
  if (*VAR_2 == '[' && *VAR_2 != VAR_5) {
   if ((VAR_3 = FUNC_0(&VAR_2, VAR_3)) == ((void*)0))
    FUNC_1(1, "%lu: %s: unbalanced brackets ([])", VAR_1, VAR_0);
   continue;
  } else if (*VAR_2 == '\\' && VAR_2[1] == '[') {
   *VAR_3++ = *VAR_2++;
  } else if (*VAR_2 == '\\' && VAR_2[1] == VAR_5)
   VAR_2++;
  else if (*VAR_2 == '\\' && VAR_2[1] == 'n') {
   *VAR_3++ = '\n';
   VAR_2 += 2;
   continue;
  } else if (*VAR_2 == '\\' && VAR_2[1] == '\\') {
   if (VAR_4)
    VAR_2++;
   else
    *VAR_3++ = *VAR_2++;
  } else if (*VAR_2 == VAR_5) {
   *VAR_3 = '\0';
   return (VAR_2 + 1);
  }
  *VAR_3++ = *VAR_2++;
 }
 return (((void*)0));
}
