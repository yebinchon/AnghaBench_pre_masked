
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int load; } ;
struct TYPE_9__ {int interval; TYPE_4__ timer; } ;
struct TYPE_11__ {TYPE_3__ alive; } ;
struct TYPE_7__ {int throughput; } ;
struct TYPE_8__ {TYPE_1__ ipcp; } ;
struct bundle {TYPE_6__ radius; TYPE_2__ ncp; int links; int radacct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int *,int ,int ,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
  struct bundle *VAR_3 = (struct bundle *)VAR_2;

  FUNC_2(&VAR_3->radius.alive.timer);
  VAR_3->radius.alive.timer.load = VAR_3->radius.alive.interval * VAR_1;
  if (VAR_3->radius.alive.timer.load) {
    FUNC_0(&VAR_3->radius, &VAR_3->radacct,
                   VAR_3->links, VAR_0, &VAR_3->ncp.ipcp.throughput);
    FUNC_1(&VAR_3->radius.alive.timer);
  }
}
