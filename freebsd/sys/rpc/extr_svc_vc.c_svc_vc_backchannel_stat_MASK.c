
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cf_conn {int * mreq; } ;
typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
struct TYPE_3__ {scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum xprt_stat
FUNC_0(SVCXPRT *VAR_2)
{
 struct cf_conn *VAR_3;

 VAR_3 = (struct cf_conn *)(VAR_2->xp_p1);

 if (VAR_3->mreq != ((void*)0))
  return (VAR_1);

 return (VAR_0);
}
