
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct datalink {int state; TYPE_4__* physical; int peer; } ;
struct TYPE_6__ {int fsm; } ;
struct TYPE_5__ {int fsm; } ;
struct TYPE_7__ {TYPE_2__ lcp; TYPE_1__ ccp; } ;
struct TYPE_8__ {TYPE_3__ link; } ;






 int VAR_0 ;
 int FUNC_0 (struct datalink*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct datalink *VAR_1, int VAR_2)
{

  switch (VAR_1->state) {
    case 128:
      FUNC_2(&VAR_1->peer);
      FUNC_1(&VAR_1->physical->link.ccp.fsm);


    case 130:
    case 131:
    case 129:
      FUNC_1(&VAR_1->physical->link.lcp.fsm);
      if (VAR_1->state == VAR_0)
        return;


    default:
      FUNC_0(VAR_1, VAR_2);
  }
}
