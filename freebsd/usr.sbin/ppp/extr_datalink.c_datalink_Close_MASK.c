
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct datalink {int state; TYPE_2__* physical; int peer; } ;
struct TYPE_7__ {int fsm; } ;
struct TYPE_5__ {int fsm; } ;
struct TYPE_8__ {TYPE_3__ lcp; TYPE_1__ ccp; } ;
struct TYPE_6__ {TYPE_4__ link; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct datalink*) ;
 int FUNC_1 (struct datalink*,int) ;
 int FUNC_2 (struct datalink*) ;
 int FUNC_3 (struct datalink*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct datalink *VAR_2, int VAR_3)
{

  switch (VAR_2->state) {
    case 128:
      FUNC_6(&VAR_2->peer);
      FUNC_4(&VAR_2->physical->link.ccp.fsm);


    case 130:
    case 131:
    case 129:
      FUNC_0(VAR_2);
      if (VAR_3 == VAR_0)
        FUNC_2(VAR_2);
      else if (VAR_3 == VAR_1)
        FUNC_3(VAR_2);
      FUNC_5(&VAR_2->physical->link.lcp.fsm);
      break;

    default:
      FUNC_1(VAR_2, VAR_3);
  }
}
