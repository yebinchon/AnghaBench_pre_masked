
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transid; int status; } ;
typedef TYPE_1__ yppushresp_xfr ;
struct svc_req {int dummy; } ;


 int FUNC_0 (int ,int ) ;

void *
FUNC_1(yppushresp_xfr *VAR_0, struct svc_req *VAR_1)
{
 static char * VAR_2;
 FUNC_0(VAR_0->status, VAR_0->transid);
 return((void *) &VAR_2);
}
