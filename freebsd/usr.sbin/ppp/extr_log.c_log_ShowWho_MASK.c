
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int from; int type; } ;
struct prompt {int active; TYPE_1__ src; struct prompt* next; } ;
struct cmdargs {struct prompt* prompt; } ;


 int FUNC_0 (struct prompt*,char*,...) ;
 struct prompt* VAR_0 ;

int
FUNC_1(struct cmdargs const *VAR_1)
{
  struct prompt *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
    FUNC_0(VAR_1->prompt, "%s (%s)", VAR_2->src.type, VAR_2->src.from);
    if (VAR_2 == VAR_1->prompt)
      FUNC_0(VAR_1->prompt, " *");
    if (!VAR_2->active)
      FUNC_0(VAR_1->prompt, " ^Z");
    FUNC_0(VAR_1->prompt, "\n");
  }

  return 0;
}
