
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_7__ {int stat; } ;
struct TYPE_8__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_2__ nlm4_res ;
struct TYPE_9__ {int cookie; } ;
typedef TYPE_3__ nlm4_lockargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,struct svc_req*,int) ;
 int FUNC_1 (struct svc_req*) ;
 int FUNC_2 (char*,struct svc_req*) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;

void *
FUNC_4(nlm4_lockargs *VAR_5, struct svc_req *VAR_6)
{
 static nlm4_res VAR_7;

 if (VAR_4)
  FUNC_2("nlm4_lock_msg", VAR_6);

 VAR_7.cookie = VAR_5->cookie;
 VAR_7.stat.stat = FUNC_0(VAR_5, VAR_6, VAR_1 | VAR_0 | VAR_2);
 FUNC_3(VAR_3, &VAR_7, FUNC_1(VAR_6));

 return (((void*)0));
}
