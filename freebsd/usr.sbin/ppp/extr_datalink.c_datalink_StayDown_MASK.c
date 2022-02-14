
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tries; } ;
struct datalink {scalar_t__ stayonline; scalar_t__ reconnect_tries; TYPE_1__ dial; } ;



void
FUNC_0(struct datalink *VAR_0)
{
  VAR_0->dial.tries = -1;
  VAR_0->reconnect_tries = 0;
  VAR_0->stayonline = 0;
}
