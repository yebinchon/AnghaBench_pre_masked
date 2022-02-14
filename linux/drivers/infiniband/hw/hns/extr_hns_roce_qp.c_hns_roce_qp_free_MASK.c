
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_qp_table {int irrl_table; int trrl_table; } ;
struct TYPE_3__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {int qpn; TYPE_1__ ibqp; int free; int refcount; } ;
struct TYPE_4__ {scalar_t__ trrl_entry_sz; } ;
struct hns_roce_dev {TYPE_2__ caps; struct hns_roce_qp_table qp_table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hns_roce_dev *VAR_1, struct hns_roce_qp *VAR_2)
{
 struct hns_roce_qp_table *VAR_3 = &VAR_1->qp_table;

 if (FUNC_0(&VAR_2->refcount))
  FUNC_1(&VAR_2->free);
 FUNC_3(&VAR_2->free);

 if ((VAR_2->ibqp.qp_type) != VAR_0) {
  if (VAR_1->caps.trrl_entry_sz)
   FUNC_2(VAR_1, &VAR_3->trrl_table,
        VAR_2->qpn);
  FUNC_2(VAR_1, &VAR_3->irrl_table, VAR_2->qpn);
 }
}
