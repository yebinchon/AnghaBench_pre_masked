
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int FUNC_0 (char*,char,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (char*,char const*) ;
 int * FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 char* FUNC_6 (char const*,char) ;

char*
FUNC_7(mrb_state *VAR_0, const char *VAR_1, const char *VAR_2)
{
  size_t VAR_3;
  const char *VAR_4;
  char *VAR_5;

  if (VAR_1 == ((void*)0)) {
    return ((void*)0);
  }

  if ((VAR_4 = FUNC_6(VAR_1, '.')) != ((void*)0) && FUNC_3(VAR_4, '/') == ((void*)0)) {
    VAR_3 = VAR_4 - VAR_1;
  }
  else {
    VAR_3 = FUNC_4(VAR_1);
  }

  VAR_5 = (char*)FUNC_1(VAR_0, VAR_3 + FUNC_4(VAR_2) + 1);
  FUNC_0(VAR_5, '\0', VAR_3 + FUNC_4(VAR_2) + 1);
  FUNC_5(VAR_5, VAR_1, VAR_3);
  FUNC_2(VAR_5, VAR_2);

  return VAR_5;
}
