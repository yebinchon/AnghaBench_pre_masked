
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sg_lock; } ;
struct TYPE_5__ {TYPE_2__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCGROUP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(SVCXPRT *VAR_0)
{
 SVCGROUP *VAR_1 = VAR_0->xp_group;

 FUNC_0(&VAR_1->sg_lock);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->sg_lock);
}
