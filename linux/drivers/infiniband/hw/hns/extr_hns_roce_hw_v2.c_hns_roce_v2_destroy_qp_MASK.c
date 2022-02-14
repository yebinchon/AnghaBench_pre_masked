
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_qp {int device; } ;
struct TYPE_2__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {TYPE_1__ ibqp; int qpn; } ;
struct hns_roce_dev {int ib_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_qp*,struct ib_udata*) ;
 struct hns_roce_qp* FUNC_1 (struct hns_roce_qp*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (struct hns_roce_qp*) ;
 struct hns_roce_dev* FUNC_4 (int ) ;
 struct hns_roce_qp* FUNC_5 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_6(struct ib_qp *VAR_1, struct ib_udata *VAR_2)
{
 struct hns_roce_dev *VAR_3 = FUNC_4(VAR_1->device);
 struct hns_roce_qp *VAR_4 = FUNC_5(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_2(&VAR_3->ib_dev, "Destroy qp 0x%06lx failed(%d)\n",
     VAR_4->qpn, VAR_5);
  return VAR_5;
 }

 if (VAR_4->ibqp.qp_type == VAR_0)
  FUNC_3(FUNC_1(VAR_4));
 else
  FUNC_3(VAR_4);

 return 0;
}
