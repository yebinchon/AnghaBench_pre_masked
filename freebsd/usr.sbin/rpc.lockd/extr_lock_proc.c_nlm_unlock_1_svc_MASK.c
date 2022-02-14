
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm4_lock {int dummy; } ;
struct TYPE_7__ {int cookie; int alock; } ;
typedef TYPE_2__ nlm_unlockargs ;
struct TYPE_6__ {int stat; } ;
struct TYPE_8__ {int cookie; TYPE_1__ stat; } ;
typedef TYPE_3__ nlm_res ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int FUNC_1 (int *,struct nlm4_lock*) ;
 int FUNC_2 (struct nlm4_lock*,int ) ;

nlm_res *
FUNC_3(nlm_unlockargs *VAR_1, struct svc_req *VAR_2)
{
 static nlm_res VAR_3;
 struct nlm4_lock VAR_4;

 FUNC_1(&VAR_1->alock, &VAR_4);

 if (VAR_0)
  FUNC_0("nlm_unlock", VAR_2);

 VAR_3.stat.stat = FUNC_2(&VAR_4, 0);
 VAR_3.cookie = VAR_1->cookie;

 return (&VAR_3);
}
