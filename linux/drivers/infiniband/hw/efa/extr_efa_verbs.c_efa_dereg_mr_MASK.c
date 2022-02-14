
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_mr {int lkey; int device; } ;
struct TYPE_2__ {int lkey; } ;
struct efa_mr {int umem; TYPE_1__ ibmr; } ;
struct efa_dev {int edev; int ibdev; } ;
struct efa_com_dereg_mr_params {int l_key; } ;


 int FUNC_0 (int *,struct efa_com_dereg_mr_params*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct efa_mr*) ;
 struct efa_dev* FUNC_4 (int ) ;
 struct efa_mr* FUNC_5 (struct ib_mr*) ;

int FUNC_6(struct ib_mr *VAR_0, struct ib_udata *VAR_1)
{
 struct efa_dev *VAR_2 = FUNC_4(VAR_0->device);
 struct efa_com_dereg_mr_params VAR_3;
 struct efa_mr *VAR_4 = FUNC_5(VAR_0);
 int VAR_5;

 FUNC_2(&VAR_2->ibdev, "Deregister mr[%d]\n", VAR_0->lkey);

 VAR_3.l_key = VAR_4->ibmr.lkey;
 VAR_5 = FUNC_0(&VAR_2->edev, &VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_4->umem);
 FUNC_3(VAR_4);

 return 0;
}
