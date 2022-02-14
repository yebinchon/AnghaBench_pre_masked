
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* address; scalar_t__ len; scalar_t__ class; } ;
struct peerid {char* authname; TYPE_1__ enddisc; } ;



void
FUNC_0(struct peerid *VAR_0)
{
  VAR_0->enddisc.class = 0;
  *VAR_0->enddisc.address = '\0';
  VAR_0->enddisc.len = 0;
  *VAR_0->authname = '\0';
}
