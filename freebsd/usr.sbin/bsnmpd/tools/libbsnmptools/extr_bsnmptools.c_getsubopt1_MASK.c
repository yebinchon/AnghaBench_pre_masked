
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int * FUNC_0 (char const* const,char) ;
 scalar_t__ FUNC_1 (char*,char const* const) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, const char *const *VAR_1, char **VAR_2, char **VAR_3)
{
 static const char *const VAR_4 = ",\t ";
 u_int VAR_5;
 char *VAR_6;

 *VAR_3 = ((void*)0);


 for (VAR_6 = *VAR_0; *VAR_6 != '\0'; VAR_6++)
  if (FUNC_0(VAR_4, *VAR_6) == ((void*)0))
   break;
 if (*VAR_6 == '\0') {
  *VAR_0 = VAR_6;
  return (-1);
 }
 *VAR_3 = VAR_6;


 while (*++VAR_6 != '\0')
  if (FUNC_0(VAR_4, *VAR_6) != ((void*)0) || *VAR_6 == '=')
   break;

 if (*VAR_6 != '\0') {
  if (*VAR_6 == '=') {
   *VAR_6++ = '\0';
   *VAR_2 = VAR_6;
   while (*VAR_6 != '\0' && FUNC_0(VAR_4, *VAR_6) == ((void*)0))
    VAR_6++;
   if (*VAR_6 != '\0')
    *VAR_6++ = '\0';
  } else
   *VAR_6++ = '\0';
 }

 *VAR_0 = VAR_6;

 for (VAR_5 = 0; *VAR_1 != ((void*)0); VAR_1++, VAR_5++)
  if (FUNC_1(*VAR_3, *VAR_1) == 0)
   return (VAR_5);
 return (-1);
}
