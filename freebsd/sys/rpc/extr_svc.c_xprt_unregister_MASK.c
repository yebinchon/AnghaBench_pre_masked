
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sg_lock; } ;
struct TYPE_6__ {scalar_t__ xp_registered; TYPE_2__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCGROUP ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(SVCXPRT *VAR_1)
{
 SVCGROUP *VAR_2 = VAR_1->xp_group;

 FUNC_1(&VAR_2->sg_lock);
 if (VAR_1->xp_registered == VAR_0) {

  FUNC_2(&VAR_2->sg_lock);
  return;
 }
 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->sg_lock);

 FUNC_0(VAR_1);
}
