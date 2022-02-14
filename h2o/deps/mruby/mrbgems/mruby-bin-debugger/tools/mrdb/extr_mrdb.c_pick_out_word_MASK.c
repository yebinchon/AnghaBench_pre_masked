
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static char*
FUNC_4(mrb_state *VAR_0, char **VAR_1)
{
  char *VAR_2;

  for (VAR_2=*VAR_1; FUNC_0(*VAR_2); VAR_2++) ;
  if (*VAR_2 == '\0') {
    return ((void*)0);
  }

  if (*VAR_2 == '\"' || *VAR_2 == '\'') {
    *VAR_1 = FUNC_1(VAR_2+1, *VAR_2);
    if (*VAR_1) (*VAR_1)++;
  }
  else {
    *VAR_1 = FUNC_3(VAR_2, " \t");
  }

  if (!*VAR_1) {
    *VAR_1 = VAR_2 + FUNC_2(VAR_2);
  }

  if (**VAR_1 != '\0') {
    **VAR_1 = '\0';
    (*VAR_1)++;
  }

  return VAR_2;
}
