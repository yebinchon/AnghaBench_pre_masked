
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


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct svc_req*) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int *,struct nlm4_lock*) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 int FUNC_4 (struct nlm4_lock*,int ) ;

void *
FUNC_5(nlm_unlockargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm_res VAR_4;
 struct nlm4_lock VAR_5;

 FUNC_2(&VAR_2->alock, &VAR_5);

 if (VAR_1)
  FUNC_1("nlm_unlock_msg", VAR_3);

 VAR_4.stat.stat = FUNC_4(&VAR_5, 0);
 VAR_4.cookie = VAR_2->cookie;

 FUNC_3(VAR_0, &VAR_4, FUNC_0(VAR_3));
 return (((void*)0));
}
