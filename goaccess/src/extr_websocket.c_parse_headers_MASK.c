
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; } ;
typedef TYPE_1__ WSHeaders ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (WSHeaders * VAR_0)
{
  char *VAR_1 = ((void*)0);
  const char *VAR_2 = VAR_0->buf;
  const char *VAR_3 = VAR_2, *VAR_4 = ((void*)0);
  int VAR_5 = 0;

  while (VAR_3) {
    if ((VAR_4 = FUNC_4 (VAR_3, "\r\n")) != ((void*)0))
      VAR_5 = (VAR_4 - VAR_3);
    else
      VAR_5 = FUNC_3 (VAR_3);

    if (VAR_5 <= 0)
      return 1;

    VAR_1 = FUNC_6 (VAR_5 + 1);
    FUNC_1 (VAR_1, VAR_3, VAR_5);
    VAR_1[VAR_5] = '\0';

    if (FUNC_5 (VAR_1, VAR_0) == 1) {
      FUNC_0 (VAR_1);
      return 1;
    }

    FUNC_0 (VAR_1);
    VAR_3 = VAR_4 ? (VAR_4 + 2) : ((void*)0);

    if (FUNC_2 (VAR_4, "\r\n\r\n") == 0)
      break;
  }

  return 0;
}
