
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
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct svc_req*) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int) ;

void *
FUNC_4(nlm4_cancargs *VAR_4, struct svc_req *VAR_5)
{
 static nlm4_res VAR_6;

 if (VAR_3)
  FUNC_1("nlm4_cancel_msg", VAR_5);

 VAR_6.cookie = VAR_4->cookie;




 VAR_6.stat.stat = FUNC_3(&VAR_4->alock, VAR_0 | VAR_1);
 FUNC_2(VAR_2, &VAR_6, FUNC_0(VAR_5));
 return (((void*)0));
}
