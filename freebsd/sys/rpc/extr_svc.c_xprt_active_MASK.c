
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sg_lock; int sg_active; } ;
struct TYPE_6__ {int xp_pool; int * xp_thread; scalar_t__ xp_active; int xp_registered; TYPE_2__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCGROUP ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(SVCXPRT *VAR_2)
{
 SVCGROUP *VAR_3 = VAR_2->xp_group;

 FUNC_1(&VAR_3->sg_lock);

 if (!VAR_2->xp_registered) {



  FUNC_2(&VAR_3->sg_lock);
  return;
 }

 if (!VAR_2->xp_active) {
  VAR_2->xp_active = VAR_0;
  if (VAR_2->xp_thread == ((void*)0)) {
   if (!FUNC_3(VAR_2->xp_pool) ||
       !FUNC_4(VAR_2))
    FUNC_0(&VAR_3->sg_active, VAR_2,
        VAR_1);
  }
 }

 FUNC_2(&VAR_3->sg_lock);
}
