
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int time_t ;
struct TYPE_11__ {char* name; unsigned int load; struct bundle* arg; int func; } ;
struct TYPE_10__ {unsigned int done; TYPE_5__ timer; } ;
struct TYPE_8__ {unsigned int timeout; unsigned int min_timeout; } ;
struct TYPE_9__ {TYPE_2__ idle; } ;
struct TYPE_7__ {int open; } ;
struct bundle {unsigned int upat; TYPE_4__ idle; TYPE_3__ cfg; TYPE_1__ phys_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;

void
FUNC_3(struct bundle *VAR_4, unsigned VAR_5)
{
  FUNC_2(&VAR_4->idle.timer);
  if ((VAR_4->phys_type.open & (VAR_1|VAR_0)) !=
      VAR_4->phys_type.open && VAR_4->cfg.idle.timeout) {
    time_t VAR_6 = FUNC_0(((void*)0));

    if (VAR_5 == 0)
      VAR_5 = VAR_4->cfg.idle.timeout;


    if (VAR_4->cfg.idle.min_timeout > VAR_5 && VAR_4->upat) {
      unsigned VAR_7 = VAR_6 - VAR_4->upat;

      if (VAR_4->cfg.idle.min_timeout > VAR_7 &&
          VAR_4->cfg.idle.min_timeout - VAR_7 > (long long)VAR_5)

        VAR_5 = VAR_4->cfg.idle.min_timeout - VAR_7;
    }
    VAR_4->idle.timer.func = VAR_3;
    VAR_4->idle.timer.name = "idle";
    VAR_4->idle.timer.load = VAR_5 * VAR_2;
    VAR_4->idle.timer.arg = VAR_4;
    FUNC_1(&VAR_4->idle.timer);
    VAR_4->idle.done = VAR_6 + VAR_5;
  }
}
