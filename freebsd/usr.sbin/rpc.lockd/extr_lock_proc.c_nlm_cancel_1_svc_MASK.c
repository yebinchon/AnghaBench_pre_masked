
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm4_lock {int dummy; } ;
struct TYPE_6__ {int stat; } ;
struct TYPE_7__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_2__ nlm_res ;
struct TYPE_8__ {int cookie; int alock; } ;
typedef TYPE_3__ nlm_cancargs ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int FUNC_1 (int *,struct nlm4_lock*) ;
 int FUNC_2 (struct nlm4_lock*,int ) ;

nlm_res *
FUNC_3(nlm_cancargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm_res VAR_4;
 struct nlm4_lock VAR_5;

 FUNC_1(&VAR_2->alock, &VAR_5);

 if (VAR_1)
  FUNC_0("nlm_cancel", VAR_3);


 VAR_4.cookie = VAR_2->cookie;





 VAR_4.stat.stat = FUNC_2(&VAR_5, VAR_0);
 return (&VAR_4);
}
