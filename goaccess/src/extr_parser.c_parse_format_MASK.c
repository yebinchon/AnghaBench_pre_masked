
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* log_format; } ;
typedef int GLogItem ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,char**,char*,char*) ;
 int FUNC_4 (int *,char**,char**) ;

__attribute__((used)) static int
FUNC_5 (GLogItem * VAR_1, char *VAR_2)
{
  char VAR_3[2 + 1] = { 0 };
  char *VAR_4 = VAR_0.log_format, *VAR_5 = ((void*)0);
  int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

  if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
    return 1;


  for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {

    if (*VAR_5 == '\\')
      continue;
    if (*VAR_5 == '%') {
      VAR_6++;
      continue;
    }
    if (*VAR_5 == '~' && VAR_6 == 0) {
      VAR_7++;
      continue;
    }

    if (VAR_7 && *VAR_5 != '\0') {
      if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0'))
        return 0;
      if (FUNC_4 (VAR_1, &VAR_2, &VAR_5) == 1)
        return 1;
      VAR_7 = 0;
    }

    else if (VAR_6 && *VAR_5 != '\0') {
      if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0'))
        return 0;

      FUNC_2 (VAR_3, 0, sizeof VAR_3);
      VAR_8 = FUNC_0 (VAR_3, VAR_5);

      if (FUNC_3 (VAR_1, &VAR_2, VAR_5, VAR_3) == 1)
        return 1;

      if (VAR_8)
        VAR_5++;
      VAR_6 = 0;
    } else if (VAR_6 && FUNC_1 (VAR_5[0])) {
      return 1;
    } else {
      VAR_2++;
    }
  }

  return 0;
}
