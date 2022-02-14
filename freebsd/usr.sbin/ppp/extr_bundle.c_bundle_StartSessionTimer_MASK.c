
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int time_t ;
struct TYPE_9__ {char* name; unsigned int load; struct bundle* arg; int func; } ;
struct TYPE_8__ {unsigned int done; TYPE_4__ timer; } ;
struct TYPE_7__ {unsigned int sessiontime; } ;
struct TYPE_6__ {int open; } ;
struct bundle {TYPE_3__ session; TYPE_2__ radius; TYPE_1__ phys_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

void
FUNC_3(struct bundle *VAR_4, unsigned VAR_5)
{
  FUNC_2(&VAR_4->session.timer);
  if ((VAR_4->phys_type.open & (VAR_1|VAR_0)) !=
      VAR_4->phys_type.open && VAR_4->radius.sessiontime) {
    time_t VAR_6 = FUNC_0(((void*)0));

    if (VAR_5 == 0)
      VAR_5 = VAR_4->radius.sessiontime;

    VAR_4->session.timer.func = VAR_3;
    VAR_4->session.timer.name = "session";
    VAR_4->session.timer.load = VAR_5 * VAR_2;
    VAR_4->session.timer.arg = VAR_4;
    FUNC_1(&VAR_4->session.timer);
    VAR_4->session.done = VAR_6 + VAR_5;
  }
}
