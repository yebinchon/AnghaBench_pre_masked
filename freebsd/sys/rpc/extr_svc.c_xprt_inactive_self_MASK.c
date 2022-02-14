
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xp_active; int * xp_thread; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(SVCXPRT *VAR_1)
{

 FUNC_0(VAR_1->xp_thread != ((void*)0),
     ("xprt_inactive_self(%p) with NULL xp_thread", VAR_1));
 VAR_1->xp_active = VAR_0;
}
