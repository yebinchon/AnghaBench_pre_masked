
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int mrb_bool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static mrb_bool
FUNC_2(char **VAR_2, uint16_t *VAR_3)
{
  char *VAR_4;
  int VAR_5;

  if (*VAR_2 == ((void*)0) || **VAR_2 == '\0') {
    return VAR_0;
  }

  for (VAR_4 = *VAR_2; *VAR_4 != '\0' && FUNC_0(*VAR_4); VAR_4++) ;

  if (VAR_4 != *VAR_2 && (VAR_5 = FUNC_1(*VAR_2)) >= 0) {
    *VAR_3 = (uint16_t)VAR_5;
    *VAR_2 = VAR_4;
    return VAR_1;
  }
  return VAR_0;
}
