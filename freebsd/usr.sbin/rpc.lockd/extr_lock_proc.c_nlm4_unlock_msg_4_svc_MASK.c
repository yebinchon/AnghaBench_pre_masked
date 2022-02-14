
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_7__ {int cookie; int alock; } ;
typedef TYPE_2__ nlm4_unlockargs ;
struct TYPE_6__ {int stat; } ;
struct TYPE_8__ {int cookie; TYPE_1__ stat; } ;
typedef TYPE_3__ nlm4_res ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct svc_req*) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int ) ;

void *
FUNC_4(nlm4_unlockargs *VAR_3, struct svc_req *VAR_4)
{
 static nlm4_res VAR_5;

 if (VAR_2)
  FUNC_1("nlm4_unlock_msg", VAR_4);

 VAR_5.stat.stat = FUNC_3(&VAR_3->alock, VAR_0);
 VAR_5.cookie = VAR_3->cookie;

 FUNC_2(VAR_1, &VAR_5, FUNC_0(VAR_4));
 return (((void*)0));
}
