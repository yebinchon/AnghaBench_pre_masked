
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_6__ {int stat; } ;
struct TYPE_7__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_2__ nlm4_res ;
struct TYPE_8__ {int cookie; } ;
typedef TYPE_3__ nlm4_lockargs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int VAR_1 ;

nlm4_res *
FUNC_1(nlm4_lockargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm4_res VAR_4;

 if (VAR_0)
  FUNC_0("nlm4_nm_lock", VAR_3);


 VAR_4.cookie = VAR_2->cookie;
 VAR_4.stat.stat = VAR_1;
 return (&VAR_4);
}
