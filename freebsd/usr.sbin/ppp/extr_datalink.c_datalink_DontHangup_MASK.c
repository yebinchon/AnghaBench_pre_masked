
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tries; } ;
struct datalink {int stayonline; scalar_t__ state; scalar_t__ reconnect_tries; TYPE_1__ dial; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct datalink *VAR_1)
{
  VAR_1->dial.tries = -1;
  VAR_1->reconnect_tries = 0;
  VAR_1->stayonline = VAR_1->state >= VAR_0 ? 1 : 0;
}
