
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event {int ev_flags; int ev_pri; TYPE_1__* ev_base; } ;
struct TYPE_2__ {int nactivequeues; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*) ;

int
FUNC_1(struct event *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_1->ev_flags & VAR_0)
  return (-1);
 if (VAR_2 < 0 || VAR_2 >= VAR_1->ev_base->nactivequeues)
  return (-1);

 VAR_1->ev_pri = VAR_2;

 return (0);
}
