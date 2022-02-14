
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_qp_table {int qp_table; int irrl_table; int trrl_table; int sccc_table; } ;
struct hns_roce_qp {unsigned long qpn; } ;
struct TYPE_2__ {scalar_t__ trrl_entry_sz; scalar_t__ sccc_entry_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; struct hns_roce_qp_table qp_table; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,unsigned long,struct hns_roce_qp*) ;
 int FUNC_2 (struct hns_roce_dev*,int *,unsigned long) ;
 int FUNC_3 (struct hns_roce_dev*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_1, unsigned long VAR_2,
        struct hns_roce_qp *VAR_3)
{
 struct hns_roce_qp_table *VAR_4 = &VAR_1->qp_table;
 struct device *VAR_5 = VAR_1->dev;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_3->qpn = VAR_2;


 VAR_6 = FUNC_2(VAR_1, &VAR_4->qp_table, VAR_3->qpn);
 if (VAR_6) {
  FUNC_0(VAR_5, "QPC table get failed\n");
  goto err_out;
 }


 VAR_6 = FUNC_2(VAR_1, &VAR_4->irrl_table, VAR_3->qpn);
 if (VAR_6) {
  FUNC_0(VAR_5, "IRRL table get failed\n");
  goto err_put_qp;
 }

 if (VAR_1->caps.trrl_entry_sz) {

  VAR_6 = FUNC_2(VAR_1, &VAR_4->trrl_table,
      VAR_3->qpn);
  if (VAR_6) {
   FUNC_0(VAR_5, "TRRL table get failed\n");
   goto err_put_irrl;
  }
 }

 if (VAR_1->caps.sccc_entry_sz) {

  VAR_6 = FUNC_2(VAR_1, &VAR_4->sccc_table,
      VAR_3->qpn);
  if (VAR_6) {
   FUNC_0(VAR_5, "SCC CTX table get failed\n");
   goto err_put_trrl;
  }
 }

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto err_put_sccc;

 return 0;

err_put_sccc:
 if (VAR_1->caps.sccc_entry_sz)
  FUNC_3(VAR_1, &VAR_4->sccc_table,
       VAR_3->qpn);

err_put_trrl:
 if (VAR_1->caps.trrl_entry_sz)
  FUNC_3(VAR_1, &VAR_4->trrl_table, VAR_3->qpn);

err_put_irrl:
 FUNC_3(VAR_1, &VAR_4->irrl_table, VAR_3->qpn);

err_put_qp:
 FUNC_3(VAR_1, &VAR_4->qp_table, VAR_3->qpn);

err_out:
 return VAR_6;
}
