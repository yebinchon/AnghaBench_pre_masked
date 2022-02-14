
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter {int rule; int name; } ;
struct cmdargs {int argc; int argn; int prompt; TYPE_2__* bundle; int * argv; } ;
struct TYPE_3__ {struct filter alive; struct filter dial; struct filter out; struct filter in; } ;
struct TYPE_4__ {TYPE_1__ filter; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct cmdargs const *VAR_0)
{
  if (VAR_0->argc > VAR_0->argn+1)
    return -1;

  if (VAR_0->argc == VAR_0->argn+1) {
    struct filter *VAR_1;

    if (!FUNC_2(VAR_0->argv[VAR_0->argn], "in"))
      VAR_1 = &VAR_0->bundle->filter.in;
    else if (!FUNC_2(VAR_0->argv[VAR_0->argn], "out"))
      VAR_1 = &VAR_0->bundle->filter.out;
    else if (!FUNC_2(VAR_0->argv[VAR_0->argn], "dial"))
      VAR_1 = &VAR_0->bundle->filter.dial;
    else if (!FUNC_2(VAR_0->argv[VAR_0->argn], "alive"))
      VAR_1 = &VAR_0->bundle->filter.alive;
    else
      return -1;
    FUNC_0(VAR_1->rule, VAR_0->prompt);
  } else {
    struct filter *VAR_2[4];
    int VAR_3;

    VAR_2[0] = &VAR_0->bundle->filter.in;
    VAR_2[1] = &VAR_0->bundle->filter.out;
    VAR_2[2] = &VAR_0->bundle->filter.dial;
    VAR_2[3] = &VAR_0->bundle->filter.alive;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
      if (VAR_3)
        FUNC_1(VAR_0->prompt, "\n");
      FUNC_1(VAR_0->prompt, "%s:\n", VAR_2[VAR_3]->name);
      FUNC_0(VAR_2[VAR_3]->rule, VAR_0->prompt);
    }
  }

  return 0;
}
