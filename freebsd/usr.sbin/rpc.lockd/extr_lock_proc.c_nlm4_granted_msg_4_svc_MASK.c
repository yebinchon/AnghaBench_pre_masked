
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_8__ {int svid; } ;
struct TYPE_9__ {int cookie; TYPE_2__ alock; } ;
typedef TYPE_3__ nlm4_testargs ;
struct TYPE_7__ {int stat; } ;
struct TYPE_10__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_4__ nlm4_res ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct svc_req*) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int ) ;
 int FUNC_2 (char*,struct svc_req*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;

void *
FUNC_4(nlm4_testargs *VAR_5, struct svc_req *VAR_6)
{
 static nlm4_res VAR_7;

 if (VAR_2)
  FUNC_2("nlm4_granted_msg", VAR_6);

 VAR_7.cookie = VAR_5->cookie;
 VAR_7.stat.stat = FUNC_1(VAR_5->alock.svid, &VAR_5->cookie,
  VAR_4, ((void*)0), VAR_1) == 0 ?
  VAR_4 : VAR_3;
 FUNC_3(VAR_0, &VAR_7, FUNC_0(VAR_6));
 return (((void*)0));
}
