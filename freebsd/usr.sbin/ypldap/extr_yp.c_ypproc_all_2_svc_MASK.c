
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ypresp_all {int dummy; } ;
typedef struct ypresp_all ypresp_all ;
struct TYPE_3__ {int domain; } ;
typedef TYPE_1__ ypreq_nokey ;
struct ypresp_val {int dummy; } ;
struct svc_req {int rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ypresp_val*) ;

ypresp_all *
FUNC_2(ypreq_nokey *VAR_1, struct svc_req *VAR_2)
{
 static struct ypresp_all VAR_3;

 if (FUNC_1(VAR_1->domain, (struct ypresp_val *)&VAR_3) == -1)
  return (&VAR_3);

 FUNC_0(VAR_2->rq_xprt, VAR_0);
 return (((void*)0));
}
