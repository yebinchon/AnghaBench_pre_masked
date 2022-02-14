
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ignore_ip_idx; char** ignore_ips; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,char*) ;
 char* FUNC_4 (char*) ;

int
FUNC_5 (const char *VAR_1)
{
  char *VAR_2 = ((void*)0), *VAR_3, *VAR_4;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0.ignore_ip_idx; ++VAR_5) {
    VAR_3 = ((void*)0);
    if (VAR_0.ignore_ips[VAR_5] == ((void*)0) || *VAR_0.ignore_ips[VAR_5] == '\0')
      continue;

    VAR_2 = FUNC_4 (VAR_0.ignore_ips[VAR_5]);

    if ((VAR_4 = FUNC_1 (VAR_2, '-')) != ((void*)0)) {
      *VAR_4 = '\0';
      VAR_3 = VAR_4 + 1;
    }


    if (VAR_3 == ((void*)0) && VAR_2) {
      if (FUNC_2 (VAR_1, VAR_2) == 0) {
        FUNC_0 (VAR_2);
        return 1;
      }
    }

    else if (VAR_2 && VAR_3) {
      if (FUNC_3 (VAR_1, VAR_2, VAR_3)) {
        FUNC_0 (VAR_2);
        return 1;
      }
    }
    FUNC_0 (VAR_2);
  }

  return 0;
}
