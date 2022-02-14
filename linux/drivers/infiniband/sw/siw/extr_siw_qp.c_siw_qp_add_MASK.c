
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_qp {TYPE_1__* ib_qp; int qp_num; struct siw_device* sdev; int ref; } ;
struct siw_device {int qp_xa; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct siw_qp*,char*) ;
 int FUNC_2 (int *,int *,struct siw_qp*,int ,int ) ;
 int VAR_1 ;

int FUNC_3(struct siw_device *VAR_2, struct siw_qp *VAR_3)
{
 int VAR_4 = FUNC_2(&VAR_2->qp_xa, &VAR_3->ib_qp->qp_num, VAR_3, VAR_1,
     VAR_0);

 if (!VAR_4) {
  FUNC_0(&VAR_3->ref);
  VAR_3->sdev = VAR_2;
  VAR_3->qp_num = VAR_3->ib_qp->qp_num;
  FUNC_1(VAR_3, "new QP\n");
 }
 return VAR_4;
}
