
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct svc_req*) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int *,struct nlm4_lock*) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 int FUNC_4 (struct nlm4_lock*,int ) ;

void *
FUNC_5(nlm_cancargs *VAR_3, struct svc_req *VAR_4)
{
 static nlm_res VAR_5;
 struct nlm4_lock VAR_6;

 FUNC_2(&VAR_3->alock, &VAR_6);

 if (VAR_2)
  FUNC_1("nlm_cancel_msg", VAR_4);

 VAR_5.cookie = VAR_3->cookie;




 VAR_5.stat.stat = FUNC_4(&VAR_6, VAR_0);
 FUNC_3(VAR_1, &VAR_5, FUNC_0(VAR_4));
 return (((void*)0));
}
