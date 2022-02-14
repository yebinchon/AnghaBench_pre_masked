
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmdargs {int argc; int argn; char** argv; TYPE_3__* cx; } ;
struct TYPE_4__ {int timeout; int inc; int maxinc; int next_timeout; int max; } ;
struct TYPE_5__ {TYPE_1__ dial; } ;
struct TYPE_6__ {TYPE_2__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int
FUNC_6(struct cmdargs const *VAR_2)
{
  const char *VAR_3, *VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;

  if (VAR_2->argc == VAR_2->argn+1 || VAR_2->argc == VAR_2->argn+2) {
    if (FUNC_5(VAR_2->argv[VAR_2->argn], "random", 6) == 0 &&
 (VAR_2->argv[VAR_2->argn][6] == '\0' || VAR_2->argv[VAR_2->argn][6] == '.')) {
      VAR_2->cx->cfg.dial.timeout = -1;
      FUNC_2();
    } else {
      VAR_5 = FUNC_0(VAR_2->argv[VAR_2->argn]);

      if (VAR_5 >= 0)
 VAR_2->cx->cfg.dial.timeout = VAR_5;
      else {
 FUNC_1(VAR_1, "Invalid redial timeout\n");
 return -1;
      }
    }

    VAR_3 = FUNC_4(VAR_2->argv[VAR_2->argn], '+');
    if (VAR_3) {
      VAR_6 = FUNC_0(++VAR_3);
      VAR_4 = VAR_3;
      if (VAR_6 >= 0)
        VAR_2->cx->cfg.dial.inc = VAR_6;
      else {
        FUNC_1(VAR_1, "Invalid timeout increment\n");
        return -1;
      }
      VAR_3 = FUNC_4(VAR_3, '-');
      if (VAR_3) {
        VAR_7 = FUNC_0(++VAR_3);
        if (VAR_7 >= 0)
          VAR_2->cx->cfg.dial.maxinc = VAR_7;
        else {
          FUNC_1(VAR_1, "Invalid maximum timeout increments\n");
          return -1;
        }
      } else {

        VAR_2->cx->cfg.dial.maxinc = 10;
        VAR_3 = VAR_4;
      }
    } else {

      VAR_2->cx->cfg.dial.inc = 0;
      VAR_2->cx->cfg.dial.maxinc = 10;
      VAR_3 = VAR_2->argv[VAR_2->argn];
    }

    VAR_3 = FUNC_4(VAR_3, '.');
    if (VAR_3) {
      if (FUNC_3(++VAR_3, "random") == 0) {
 VAR_2->cx->cfg.dial.next_timeout = -1;
 FUNC_2();
      } else {
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 >= 0)
   VAR_2->cx->cfg.dial.next_timeout = VAR_5;
 else {
   FUNC_1(VAR_1, "Invalid next redial timeout\n");
   return -1;
 }
      }
    } else

      VAR_2->cx->cfg.dial.next_timeout = VAR_0;

    if (VAR_2->argc == VAR_2->argn+2) {
      VAR_8 = FUNC_0(VAR_2->argv[VAR_2->argn+1]);

      if (VAR_8 >= 0) {
 VAR_2->cx->cfg.dial.max = VAR_8;
      } else {
 FUNC_1(VAR_1, "Invalid retry value\n");
 return 1;
      }
    }
    return 0;
  }

  return -1;
}
