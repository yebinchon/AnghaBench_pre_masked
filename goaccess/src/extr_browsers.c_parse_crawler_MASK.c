
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_1, char *VAR_2, char *VAR_3)
{
  char *VAR_4 = ((void*)0);
  int VAR_5 = 0;

  while (VAR_2 != VAR_1) {
    VAR_2--;
    if (*VAR_2 == ' ' || *VAR_2 == '+') {
      VAR_5 = 1;
      break;
    }
  }


  if (VAR_2 == VAR_1)
    return ((void*)0);


  if (VAR_5)
    VAR_2++;

  if ((VAR_4 = FUNC_0 (VAR_2, "; ")))
    *VAR_4 = '\0';

  if (*VAR_2 == '\0')
    return ((void*)0);

  FUNC_2 (VAR_3, "Crawlers", VAR_0);

  return FUNC_1 (VAR_2);
}
