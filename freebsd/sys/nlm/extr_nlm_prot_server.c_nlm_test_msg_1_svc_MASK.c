
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xdrproc_t ;
struct svc_req {int dummy; } ;
struct nlm_testargs {int alock; int exclusive; int cookie; } ;
struct TYPE_12__ {int holder; } ;
struct TYPE_13__ {scalar_t__ stat; TYPE_1__ nlm_testrply_u; } ;
struct TYPE_16__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_5__ nlm_testres ;
struct TYPE_14__ {int holder; } ;
struct TYPE_15__ {TYPE_3__ nlm4_testrply_u; int stat; } ;
struct TYPE_17__ {TYPE_4__ stat; int cookie; } ;
typedef TYPE_6__ nlm4_testres ;
struct TYPE_18__ {int alock; int exclusive; int cookie; } ;
typedef TYPE_7__ nlm4_testargs ;
typedef int bool_t ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_6__*,struct svc_req*,int **) ;
 int FUNC_5 (TYPE_5__*,char*,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,TYPE_5__*) ;
 scalar_t__ VAR_3 ;

bool_t
FUNC_7(struct nlm_testargs *VAR_4, void *VAR_5, struct svc_req *VAR_6)
{
 nlm4_testargs VAR_7;
 nlm4_testres VAR_8;
 nlm_testres VAR_9;
 CLIENT *VAR_10;
 char VAR_11;

 VAR_7 = VAR_4->cookie;
 VAR_7 = VAR_4->exclusive;
 FUNC_1(&VAR_7, &VAR_4->alock);

 if (FUNC_4(&VAR_7, &VAR_8, VAR_6, &VAR_10))
  return (VAR_0);

 VAR_9.cookie = VAR_8;
 VAR_9.stat.stat = FUNC_3(VAR_8);
 if (VAR_9.stat.stat == VAR_1)
  FUNC_2(
   &VAR_9.stat.nlm_testrply_u.holder,
   &VAR_8);

 if (VAR_10) {
  FUNC_5(&VAR_9, &VAR_11, VAR_10, ((void*)0), VAR_2);
  FUNC_0(VAR_10);
 }
 FUNC_6((xdrproc_t) VAR_3, &VAR_9);

 return (VAR_0);
}
