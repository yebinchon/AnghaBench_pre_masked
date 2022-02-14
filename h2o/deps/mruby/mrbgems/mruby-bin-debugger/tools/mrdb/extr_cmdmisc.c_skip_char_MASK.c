
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static mrb_bool
FUNC_0(char **VAR_2, char VAR_3)
{
  if (*VAR_2 != ((void*)0) && **VAR_2 == VAR_3) {
    ++*VAR_2;
    return VAR_1;
  }
  return VAR_0;
}
