
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static char*
FUNC_4(mrb_state *VAR_0, const char *VAR_1)
{
  size_t VAR_2;
  const char *VAR_3;
  char *VAR_4;

  if (VAR_1 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_3 = FUNC_3(VAR_1, '/');
  VAR_2 = VAR_3 != ((void*)0) ? (size_t)(VAR_3 - VAR_1) : FUNC_1(VAR_1);

  VAR_4 = (char*)FUNC_0(VAR_0, VAR_2 + 1);
  FUNC_2(VAR_4, VAR_1, VAR_2);
  VAR_4[VAR_2] = '\0';

  return VAR_4;
}
