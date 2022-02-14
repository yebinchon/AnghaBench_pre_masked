
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sg_xlist; int sg_lock; } ;
struct TYPE_6__ {scalar_t__ xp_registered; TYPE_2__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCGROUP ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(SVCXPRT *VAR_4)
{
 SVCGROUP *VAR_5 = VAR_4->xp_group;

 FUNC_2(&VAR_5->sg_lock, VAR_1);
 FUNC_0(VAR_4->xp_registered == VAR_2,
     ("xprt_unregister_locked: not registered"));
 FUNC_3(VAR_4);
 FUNC_1(&VAR_5->sg_xlist, VAR_4, VAR_3);
 VAR_4->xp_registered = VAR_0;
}
