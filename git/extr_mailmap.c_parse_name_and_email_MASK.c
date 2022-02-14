
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char **VAR_1,
      char **VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 *VAR_1 = *VAR_2 = ((void*)0);

 if ((VAR_4 = FUNC_1(VAR_0, '<')) == ((void*)0))
  return ((void*)0);
 if ((VAR_5 = FUNC_1(VAR_4+1, '>')) == ((void*)0))
  return ((void*)0);
 if (!VAR_3 && (VAR_4+1 == VAR_5))
  return ((void*)0);


 VAR_6 = VAR_0;
 while (FUNC_0(*VAR_6) && VAR_6 < VAR_4)
  ++VAR_6;
 VAR_7 = VAR_4-1;
 while (VAR_7 > VAR_6 && FUNC_0(*VAR_7))
  --VAR_7;

 *VAR_1 = (VAR_6 <= VAR_7 ? VAR_6 : ((void*)0));
 *VAR_2 = VAR_4+1;
 *(VAR_7+1) = '\0';
 *VAR_5++ = '\0';

 return (*VAR_5 == '\0' ? ((void*)0) : VAR_5);
}
