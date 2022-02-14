
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int load; struct bundle* arg; int (* func ) (struct bundle*) ;} ;
struct TYPE_7__ {int interval; TYPE_1__ timer; } ;
struct TYPE_6__ {scalar_t__* file; } ;
struct TYPE_8__ {TYPE_3__ alive; TYPE_2__ cfg; } ;
struct bundle {TYPE_4__ radius; } ;


 int VAR_0 ;
 int FUNC_0 (struct bundle*) ;

void
FUNC_1(struct bundle *VAR_1)
{
  if (*VAR_1->radius.cfg.file && VAR_1->radius.alive.interval) {
    VAR_1->radius.alive.timer.func = FUNC_0;
    VAR_1->radius.alive.timer.name = "radius alive";
    VAR_1->radius.alive.timer.load = VAR_1->radius.alive.interval * VAR_0;
    VAR_1->radius.alive.timer.arg = VAR_1;
    FUNC_0(VAR_1);
  }
}
