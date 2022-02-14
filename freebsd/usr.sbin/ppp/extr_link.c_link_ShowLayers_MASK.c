
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {int nlayers; TYPE_1__** layer; } ;
struct cmdargs {int prompt; } ;
struct TYPE_2__ {int name; } ;


 struct link* FUNC_0 (struct cmdargs const*) ;
 int FUNC_1 (int ,char*,...) ;

int
FUNC_2(struct cmdargs const *VAR_0)
{
  struct link *VAR_1 = FUNC_0(VAR_0);
  int VAR_2;

  for (VAR_2 = VAR_1->nlayers; VAR_2; VAR_2--)
    FUNC_1(VAR_0->prompt, "%s%s", VAR_2 == VAR_1->nlayers ? "" : ", ",
                  VAR_1->layer[VAR_2 - 1]->name);
  if (VAR_1->nlayers)
    FUNC_1(VAR_0->prompt, "\n");

  return 0;
}
