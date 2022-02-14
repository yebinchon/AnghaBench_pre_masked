
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdargs {int argc; int argn; char** argv; TYPE_1__* prompt; } ;
struct TYPE_2__ {int logmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int *) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

int
FUNC_9(struct cmdargs const *VAR_3)
{
  int VAR_4, VAR_5, VAR_6, VAR_7;
  char const *const *VAR_8, *VAR_9;

  VAR_6 = VAR_3->argc - VAR_3->argn;
  VAR_8 = VAR_3->argv + VAR_3->argn;
  VAR_5 = 0;

  if (VAR_6 == 0 || FUNC_8(VAR_8[0], "local"))
    VAR_7 = 0;
  else {
    if (VAR_3->prompt == ((void*)0)) {
      FUNC_7(VAR_2, "set log local: Only available on the"
                 " command line\n");
      return 1;
    }
    VAR_6--;
    VAR_8++;
    VAR_7 = 1;
  }

  if (VAR_6 == 0 || (VAR_8[0][0] != '+' && VAR_8[0][0] != '-')) {
    if (VAR_7)
      FUNC_2(&VAR_3->prompt->logmask);
    else
      FUNC_1();
  }

  while (VAR_6--) {
    VAR_9 = **VAR_8 == '+' || **VAR_8 == '-' ? *VAR_8 + 1 : *VAR_8;

    if (FUNC_8(VAR_9, "all") == 0) {
        if (**VAR_8 == '-') {
          if (VAR_7)
            for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
              FUNC_3(VAR_4, &VAR_3->prompt->logmask);
          else
            for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
              FUNC_0(VAR_4);
        } else if (VAR_7)
          for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
            FUNC_5(VAR_4, &VAR_3->prompt->logmask);
        else
          for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
            FUNC_4(VAR_4);
        VAR_8++;
        continue;
    }
    for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
      if (FUNC_8(VAR_9, FUNC_6(VAR_4)) == 0) {
 if (**VAR_8 == '-') {
          if (VAR_7)
            FUNC_3(VAR_4, &VAR_3->prompt->logmask);
          else
     FUNC_0(VAR_4);
 } else if (VAR_7)
          FUNC_5(VAR_4, &VAR_3->prompt->logmask);
        else
          FUNC_4(VAR_4);
 break;
      }
    if (VAR_4 > VAR_0) {
      FUNC_7(VAR_2, "%s: Invalid log value\n", VAR_9);
      VAR_5 = -1;
    }
    VAR_8++;
  }
  return VAR_5;
}
