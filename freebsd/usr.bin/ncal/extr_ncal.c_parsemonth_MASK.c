
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; } ;


 int * FUNC_0 (char const*,char*,struct tm*) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5;
 struct tm VAR_6;

 VAR_3 = (int)FUNC_1(VAR_0, &VAR_5, 10);
 if (VAR_5 != VAR_0) {
  VAR_4 = *VAR_2;
  if (*VAR_5 == '\0') {
   ;
  } else if (*VAR_5 == 'f' || *VAR_5 == 'F') {
   if (VAR_3 <= *VAR_1)
    VAR_4++;
  } else if (*VAR_5 == 'p' || *VAR_5 == 'P') {
   if (VAR_3 >= *VAR_1)
    VAR_4--;
  } else
   return (1);
  if (VAR_3 < 1 || VAR_3 > 12)
   return 1;
  *VAR_1 = VAR_3;
  *VAR_2 = VAR_4;
  return (0);
 }
 if (FUNC_0(VAR_0, "%B", &VAR_6) != ((void*)0) || FUNC_0(VAR_0, "%b", &VAR_6) != ((void*)0)) {
  *VAR_1 = VAR_6.tm_mon + 1;
  return (0);
 }
 return (1);
}
