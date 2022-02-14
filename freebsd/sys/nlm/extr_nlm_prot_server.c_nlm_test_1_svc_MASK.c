
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm_testargs {int alock; int exclusive; int cookie; } ;
struct TYPE_11__ {int holder; } ;
struct TYPE_12__ {TYPE_1__ nlm_testrply_u; int stat; } ;
struct TYPE_15__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_5__ nlm_testres ;
struct TYPE_13__ {int holder; } ;
struct TYPE_14__ {TYPE_3__ nlm4_testrply_u; int stat; } ;
struct TYPE_16__ {TYPE_4__ stat; int cookie; } ;
typedef TYPE_6__ nlm4_testres ;
struct TYPE_17__ {int alock; int exclusive; int cookie; } ;
typedef TYPE_7__ nlm4_testargs ;
typedef scalar_t__ bool_t ;


 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_6__*,struct svc_req*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

bool_t
FUNC_4(struct nlm_testargs *VAR_1, nlm_testres *VAR_2, struct svc_req *VAR_3)
{
 bool_t VAR_4;
 nlm4_testargs VAR_5;
 nlm4_testres VAR_6;

 VAR_5 = VAR_1->cookie;
 VAR_5 = VAR_1->exclusive;
 FUNC_1(&VAR_5, &VAR_1->alock);

 VAR_4 = FUNC_0(&VAR_5, &VAR_6, VAR_3);
 if (VAR_4) {
  VAR_2->cookie = VAR_6;
  VAR_2->stat.stat = FUNC_3(VAR_6);
  if (VAR_2->stat.stat == VAR_0)
   FUNC_2(
    &VAR_2->stat.nlm_testrply_u.holder,
    &VAR_6);
 }

 return (VAR_4);
}
