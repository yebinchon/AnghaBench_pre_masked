
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_5__ {int sequence; int stat; int cookie; } ;
typedef TYPE_1__ nlm_shareres ;
struct TYPE_6__ {int cookie; } ;
typedef TYPE_2__ nlm_shareargs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int VAR_1 ;

nlm_shareres *
FUNC_1(nlm_shareargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm_shareres VAR_4;

 if (VAR_0)
  FUNC_0("nlm_share", VAR_3);

 VAR_4.cookie = VAR_2->cookie;
 VAR_4.stat = VAR_1;
 VAR_4.sequence = 1234356;
 return (&VAR_4);
}
