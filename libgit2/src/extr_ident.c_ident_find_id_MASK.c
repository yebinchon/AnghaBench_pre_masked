
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,char,size_t) ;

__attribute__((used)) static int FUNC_1(
 const char **VAR_1, const char **VAR_2, const char *VAR_3, size_t VAR_4)
{
 const char *VAR_5 = VAR_3 + VAR_4, *VAR_6 = ((void*)0);

 while (VAR_4 > 3 && (VAR_6 = FUNC_0(VAR_3, '$', VAR_4)) != ((void*)0)) {
  size_t VAR_7 = (size_t)(VAR_5 - VAR_6) - 1;
  if (VAR_7 < 3)
   return VAR_0;

  VAR_3 = VAR_6 + 1;
  VAR_4 = VAR_7;

  if (VAR_3[0] == 'I' && VAR_3[1] == 'd')
   break;
 }

 if (VAR_4 < 3 || !VAR_6)
  return VAR_0;
 *VAR_1 = VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3 + 2, '$', VAR_4 - 2)) == ((void*)0))
  return VAR_0;

 *VAR_2 = VAR_6 + 1;
 return 0;
}
