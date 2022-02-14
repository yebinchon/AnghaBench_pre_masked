
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsm {int dummy; } ;
struct TYPE_5__ {size_t algorithm; int * state; } ;
struct ccp {TYPE_2__ out; } ;
struct TYPE_4__ {int (* Reset ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ o; } ;


 TYPE_3__** VAR_0 ;
 struct ccp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct fsm *VAR_1)
{

  struct ccp *VAR_2 = FUNC_0(VAR_1);
  if (VAR_2->out.state == ((void*)0))
    return 1;
  return (*VAR_0[VAR_2->out.algorithm]->o.Reset)(VAR_2->out.state);
}
