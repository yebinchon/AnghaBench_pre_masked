
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* name; } ;
struct TYPE_6__ {void* name; } ;
struct TYPE_5__ {void* name; } ;
struct TYPE_7__ {TYPE_4__ StoppedTimer; TYPE_2__ OpenTimer; TYPE_1__ FsmTimer; int * fn; } ;
struct ccp {TYPE_3__ fsm; } ;


 int VAR_0 ;
 void** VAR_1 ;

void
FUNC_0(struct ccp *VAR_2)
{
  VAR_2->fsm.fn = &VAR_0;
  VAR_2->fsm.FsmTimer.name = VAR_1[0];
  VAR_2->fsm.OpenTimer.name = VAR_1[1];
  VAR_2->fsm.StoppedTimer.name = VAR_1[2];
}
