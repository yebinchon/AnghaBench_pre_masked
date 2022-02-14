
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(char *VAR_2, int VAR_3)
{
  int VAR_4;

  VAR_4 = 0;
  while (*VAR_2) {
    if (*VAR_2 == '\\') {
      if (VAR_3 & VAR_1) {
        FUNC_1(VAR_2, VAR_2 + 1, FUNC_2(VAR_2));
        if (!*VAR_2)
          break;
      } else
        VAR_2++;
    } else if (*VAR_2 == '"') {
      FUNC_1(VAR_2, VAR_2 + 1, FUNC_2(VAR_2));
      VAR_4 = !VAR_4;
      continue;
    } else if (!VAR_4 && (FUNC_0(*VAR_2) ||
                             (*VAR_2 == '#' && !(VAR_3 & VAR_0))))
      return VAR_2;
    VAR_2++;
  }

  return VAR_4 ? ((void*)0) : VAR_2;
}
