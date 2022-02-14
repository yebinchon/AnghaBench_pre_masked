
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsm {scalar_t__ state; scalar_t__ open_mode; } ;
struct cmdargs {int argc; int argn; char** argv; TYPE_1__* cx; int bundle; } ;
struct TYPE_5__ {struct fsm fsm; } ;
struct TYPE_6__ {TYPE_2__ ccp; } ;
struct TYPE_4__ {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 TYPE_3__* FUNC_1 (struct cmdargs const*) ;
 int FUNC_2 (struct fsm*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_4)
{
  if (VAR_4->argc == VAR_4->argn)
    FUNC_0(VAR_4->bundle, VAR_4->cx ? VAR_4->cx->name : ((void*)0), VAR_1);
  else if (VAR_4->argc == VAR_4->argn + 1) {
    if (!FUNC_3(VAR_4->argv[VAR_4->argn], "lcp"))
      FUNC_0(VAR_4->bundle, VAR_4->cx ? VAR_4->cx->name : ((void*)0), VAR_0);
    else if (!FUNC_3(VAR_4->argv[VAR_4->argn], "ccp") ||
             !FUNC_3(VAR_4->argv[VAR_4->argn], "ccp!")) {
      struct fsm *VAR_5;

      VAR_5 = &FUNC_1(VAR_4)->ccp.fsm;
      if (VAR_5->state == VAR_3) {
        FUNC_2(VAR_5);
        if (VAR_4->argv[VAR_4->argn][3] == '!')
          VAR_5->open_mode = 0;
        else
          VAR_5->open_mode = VAR_2;
      }
    } else
      return -1;
  } else
    return -1;

  return 0;
}
