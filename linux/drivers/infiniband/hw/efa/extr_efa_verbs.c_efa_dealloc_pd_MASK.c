
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct efa_pd {int pdn; } ;
struct efa_dev {int ibdev; } ;


 int FUNC_0 (struct efa_dev*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct efa_dev* FUNC_2 (int ) ;
 struct efa_pd* FUNC_3 (struct ib_pd*) ;

void FUNC_4(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct efa_dev *VAR_2 = FUNC_2(VAR_0->device);
 struct efa_pd *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->ibdev, "Dealloc pd[%d]\n", VAR_3->pdn);
 FUNC_0(VAR_2, VAR_3->pdn);
}
