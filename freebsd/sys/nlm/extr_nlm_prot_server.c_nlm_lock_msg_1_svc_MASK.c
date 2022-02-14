
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct svc_req {int dummy; } ;
struct nlm_lockargs {int state; int reclaim; int alock; int exclusive; int block; int cookie; } ;
typedef int nlm_res ;
typedef int nlm4_res ;
struct TYPE_3__ {int state; int reclaim; int alock; int exclusive; int block; int cookie; } ;
typedef TYPE_1__ nlm4_lockargs ;
typedef int bool_t ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,struct svc_req*,int ,int **) ;
 int FUNC_4 (int *,char*,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_3 ;

bool_t
FUNC_6(struct nlm_lockargs *VAR_4, void *VAR_5, struct svc_req *VAR_6)
{
 nlm4_lockargs VAR_7;
 nlm4_res VAR_8;
 nlm_res VAR_9;
 CLIENT *VAR_10;
 char VAR_11;

 VAR_7 = VAR_4->cookie;
 VAR_7 = VAR_4->block;
 VAR_7 = VAR_4->exclusive;
 FUNC_1(&VAR_7, &VAR_4->alock);
 VAR_7 = VAR_4->reclaim;
 VAR_7 = VAR_4->state;

 if (FUNC_3(&VAR_7, &VAR_8, VAR_6, VAR_1, &VAR_10))
  return (VAR_0);

 FUNC_2(&VAR_9, &VAR_8);

 if (VAR_10) {
  FUNC_4(&VAR_9, &VAR_11, VAR_10, ((void*)0), VAR_2);
  FUNC_0(VAR_10);
 }
 FUNC_5((xdrproc_t) VAR_3, &VAR_9);

 return (VAR_0);
}
