
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, const char *VAR_1)
{

  char *VAR_2;
  int VAR_3;

  VAR_2 = VAR_0;
  VAR_3 = FUNC_2(VAR_1);

  while ((VAR_2 = FUNC_3(VAR_2, VAR_1)) != ((void*)0))
    if ((VAR_2 != VAR_0 && FUNC_0(VAR_2[-1])) || FUNC_0(VAR_2[VAR_3]))
      VAR_2++;
    else if (VAR_2 != VAR_0 && VAR_2[-1] == '\\')
      FUNC_1(VAR_2 - 1, VAR_2, FUNC_2(VAR_2) + 1);
    else
      break;

  return VAR_2;
}
