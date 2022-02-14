
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int used; } ;
struct hisi_qp {int qp_id; TYPE_3__ qp_status; TYPE_2__* qm; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct hisi_qp *VAR_1)
{
 struct device *VAR_2 = &VAR_1->qm->pdev->dev;
 int VAR_3 = 0;


 if (FUNC_5(VAR_0, &VAR_1->qp_status.flags))
  return 0;

 while (FUNC_0(&VAR_1->qp_status.used)) {
  VAR_3++;
  FUNC_3(20);
  if (VAR_3 == 10) {
   FUNC_2(VAR_2, "Cannot drain out data for stopping, Force to stop!\n");
   return 0;
  }
 }

 FUNC_4(VAR_0, &VAR_1->qp_status.flags);

 FUNC_1(VAR_2, "stop queue %u!", VAR_1->qp_id);

 return 0;
}
