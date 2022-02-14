
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xp_refs; int * xp_p3; } ;
typedef int SVCXPRT_EXT ;
typedef TYPE_1__ SVCXPRT ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

SVCXPRT *
FUNC_2(void)
{
 SVCXPRT *VAR_0;
 SVCXPRT_EXT *VAR_1;

 VAR_0 = FUNC_0(sizeof(SVCXPRT));
 VAR_1 = FUNC_0(sizeof(SVCXPRT_EXT));
 VAR_0->xp_p3 = VAR_1;
 FUNC_1(&VAR_0->xp_refs, 1);

 return (VAR_0);
}
