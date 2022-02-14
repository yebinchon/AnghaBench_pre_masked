
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sg_lock; int sg_xlist; } ;
struct TYPE_8__ {int sp_groupcount; TYPE_3__* sp_groups; int sp_nextgroup; } ;
struct TYPE_7__ {int xp_active; int xp_registered; TYPE_3__* xp_group; TYPE_2__* xp_pool; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCPOOL ;
typedef TYPE_3__ SVCGROUP ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

void
FUNC_5(SVCXPRT *VAR_3)
{
 SVCPOOL *VAR_4 = VAR_3->xp_pool;
 SVCGROUP *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);
 VAR_6 = FUNC_2(&VAR_4->sp_nextgroup, 1) % VAR_4->sp_groupcount;
 VAR_3->xp_group = VAR_5 = &VAR_4->sp_groups[VAR_6];
 FUNC_3(&VAR_5->sg_lock);
 VAR_3->xp_registered = VAR_1;
 VAR_3->xp_active = VAR_0;
 FUNC_1(&VAR_5->sg_xlist, VAR_3, VAR_2);
 FUNC_4(&VAR_5->sg_lock);
}
