
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter {int rule; } ;
struct cmdargs {int argc; int argn; int * argv; TYPE_2__* bundle; } ;
struct TYPE_3__ {struct filter alive; struct filter dial; struct filter out; struct filter in; } ;
struct TYPE_4__ {int ncp; TYPE_1__ filter; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct cmdargs const *VAR_1)
{
  struct filter *VAR_2;

  if (VAR_1->argc < VAR_1->argn+2)
    return -1;

  if (!FUNC_2(VAR_1->argv[VAR_1->argn], "in"))
    VAR_2 = &VAR_1->bundle->filter.in;
  else if (!FUNC_2(VAR_1->argv[VAR_1->argn], "out"))
    VAR_2 = &VAR_1->bundle->filter.out;
  else if (!FUNC_2(VAR_1->argv[VAR_1->argn], "dial"))
    VAR_2 = &VAR_1->bundle->filter.dial;
  else if (!FUNC_2(VAR_1->argv[VAR_1->argn], "alive"))
    VAR_2 = &VAR_1->bundle->filter.alive;
  else {
    FUNC_1(VAR_0, "filter_Set: %s: Invalid filter name.\n",
              VAR_1->argv[VAR_1->argn]);
    return -1;
  }

  FUNC_0(&VAR_1->bundle->ncp, VAR_1->argc - VAR_1->argn - 1,
        VAR_1->argv + VAR_1->argn + 1, VAR_2->rule);
  return 0;
}
