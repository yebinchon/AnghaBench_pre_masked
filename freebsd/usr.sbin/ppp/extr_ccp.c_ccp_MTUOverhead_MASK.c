
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t algorithm; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct ccp {TYPE_3__ out; TYPE_1__ fsm; } ;
struct TYPE_6__ {int MTUOverhead; } ;
struct TYPE_8__ {TYPE_2__ o; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__** VAR_1 ;

int
FUNC_0(struct ccp *VAR_2)
{
  if (VAR_2->fsm.state == VAR_0 && VAR_2->out.algorithm >= 0)
    return VAR_1[VAR_2->out.algorithm]->o.MTUOverhead;

  return 0;
}
