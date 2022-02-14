
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
struct TYPE_8__ {int alock; int cookie; } ;
typedef TYPE_3__ nlm4_cancargs ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int FUNC_1 (int *,int ) ;

nlm4_res *
FUNC_2(nlm4_cancargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm4_res VAR_4;

 if (VAR_1)
  FUNC_0("nlm4_cancel", VAR_3);


 VAR_4.cookie = VAR_2->cookie;





 VAR_4.stat.stat = FUNC_1(&VAR_2->alock, VAR_0);
 return (&VAR_4);
}
