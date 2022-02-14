
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sg_active; int sg_lock; } ;
struct TYPE_5__ {scalar_t__ xp_active; int * xp_thread; TYPE_2__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCGROUP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

void
FUNC_2(SVCXPRT *VAR_3)
{
 SVCGROUP *VAR_4 = VAR_3->xp_group;

 FUNC_1(&VAR_4->sg_lock, VAR_1);
 if (VAR_3->xp_active) {
  if (VAR_3->xp_thread == ((void*)0))
   FUNC_0(&VAR_4->sg_active, VAR_3, VAR_2);
  VAR_3->xp_active = VAR_0;
 }
}
