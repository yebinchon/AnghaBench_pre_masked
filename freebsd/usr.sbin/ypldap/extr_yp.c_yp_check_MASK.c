
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_req {int rq_xprt; } ;
struct sockaddr_in {int dummy; } ;


 struct sockaddr_in* FUNC_0 (int ) ;

int
FUNC_1(struct svc_req *VAR_0)
{
 struct sockaddr_in *VAR_1;

 VAR_1 = FUNC_0(VAR_0->rq_xprt);



 return (0);
}
