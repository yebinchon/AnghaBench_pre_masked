
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct svc_req {int dummy; } ;
struct nlm_cancargs {int alock; int exclusive; int block; int cookie; } ;
typedef int nlm_res ;
typedef int nlm4_res ;
struct TYPE_3__ {int alock; int exclusive; int block; int cookie; } ;
typedef TYPE_1__ nlm4_cancargs ;
typedef int bool_t ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,struct svc_req*,int **) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_2 ;

bool_t
FUNC_6(struct nlm_cancargs *VAR_3, void *VAR_4, struct svc_req *VAR_5)
{
 nlm4_cancargs VAR_6;
 nlm4_res VAR_7;
 nlm_res VAR_8;
 CLIENT *VAR_9;
 char VAR_10;

 VAR_6 = VAR_3->cookie;
 VAR_6 = VAR_3->block;
 VAR_6 = VAR_3->exclusive;
 FUNC_2(&VAR_6, &VAR_3->alock);

 if (FUNC_4(&VAR_6, &VAR_7, VAR_5, &VAR_9))
  return (VAR_0);

 FUNC_3(&VAR_8, &VAR_7);

 if (VAR_9) {
  FUNC_1(&VAR_8, &VAR_10, VAR_9, ((void*)0), VAR_1);
  FUNC_0(VAR_9);
 }
 FUNC_5((xdrproc_t) VAR_2, &VAR_8);

 return (VAR_0);
}
