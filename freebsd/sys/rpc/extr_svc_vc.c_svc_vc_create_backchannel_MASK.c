
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cf_conn {int strm_stat; } ;
struct TYPE_4__ {int * xp_ops; int * xp_p2; struct cf_conn* xp_p1; int * xp_socket; int * xp_pool; int xp_lock; } ;
typedef TYPE_1__ SVCXPRT ;
typedef int SVCPOOL ;


 int VAR_0 ;
 struct cf_conn* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,char*) ;

SVCXPRT *
FUNC_3(SVCPOOL *VAR_2)
{
 SVCXPRT *VAR_3 = ((void*)0);
 struct cf_conn *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->strm_stat = VAR_0;

 VAR_3 = FUNC_1();
 FUNC_2(&VAR_3->xp_lock, "xprt->xp_lock");
 VAR_3->xp_pool = VAR_2;
 VAR_3->xp_socket = ((void*)0);
 VAR_3->xp_p1 = VAR_4;
 VAR_3->xp_p2 = ((void*)0);
 VAR_3->xp_ops = &VAR_1;
 return (VAR_3);
}
