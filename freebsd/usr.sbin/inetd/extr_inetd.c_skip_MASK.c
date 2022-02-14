
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static char *
FUNC_3(char **VAR_1)
{
 char *VAR_2 = *VAR_1;
 char *VAR_3;
 char VAR_4 = '\0';

again:
 while (*VAR_2 == ' ' || *VAR_2 == '\t')
  VAR_2++;
 if (*VAR_2 == '\0') {
  int VAR_5;

  VAR_5 = FUNC_0(VAR_0);
  (void) FUNC_2(VAR_5, VAR_0);
  if (VAR_5 == ' ' || VAR_5 == '\t')
   if ((VAR_2 = FUNC_1(VAR_0)))
    goto again;
  *VAR_1 = (char *)0;
  return ((char *)0);
 }
 if (*VAR_2 == '"' || *VAR_2 == '\'')
  VAR_4 = *VAR_2++;
 VAR_3 = VAR_2;
 if (VAR_4)
  while (*VAR_2 && *VAR_2 != VAR_4)
   VAR_2++;
 else
  while (*VAR_2 && *VAR_2 != ' ' && *VAR_2 != '\t')
   VAR_2++;
 if (*VAR_2 != '\0')
  *VAR_2++ = '\0';
 *VAR_1 = VAR_2;
 return (VAR_3);
}
