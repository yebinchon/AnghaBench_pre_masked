
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int FUNC_0 (char*,char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static char *
FUNC_4(mrb_state *VAR_0, char *VAR_1, const char *VAR_2)
{
  size_t VAR_3;
  size_t VAR_4;
  char *VAR_5;
  char *VAR_6;

  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = FUNC_2(VAR_2);
  VAR_5 = (char*)FUNC_1(VAR_0, VAR_3 + VAR_4 + 1);
  FUNC_0(VAR_5, VAR_1, VAR_3 + 1);
  if (*VAR_2) {
    if ((VAR_6 = FUNC_3(VAR_5, '.')) == ((void*)0))
      VAR_6 = VAR_5 + VAR_3;
    FUNC_0(VAR_6, VAR_2, VAR_4 + 1);
  }

  return VAR_5;
}
