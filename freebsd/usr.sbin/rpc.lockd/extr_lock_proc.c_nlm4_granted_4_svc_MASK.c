
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
struct TYPE_10__ {int cookie; TYPE_1__ stat; } ;
typedef TYPE_4__ nlm4_res ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *,int ) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int VAR_2 ;
 int VAR_3 ;

nlm4_res *
FUNC_2(nlm4_testargs *VAR_4, struct svc_req *VAR_5)
{
 static nlm4_res VAR_6;

 if (VAR_1)
  FUNC_1("nlm4_granted", VAR_5);

 VAR_6.stat.stat = FUNC_0(VAR_4->alock.svid, &VAR_4->cookie,
  VAR_3, ((void*)0), VAR_0) == 0 ?
  VAR_3 : VAR_2;


 VAR_6.cookie = VAR_4->cookie;

 return (&VAR_6);
}
