
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {int tsq; int tpq; } ;
struct TYPE_2__ {int qpc_timer_bt_num; int cqc_timer_bt_num; } ;
struct hns_roce_dev {int qpc_timer_table; int cqc_timer_table; int dev; TYPE_1__ caps; struct hns_roce_v2_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (struct hns_roce_dev*,int ) ;
 int FUNC_3 (struct hns_roce_dev*,int *,int) ;
 int FUNC_4 (struct hns_roce_dev*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_dev *VAR_2)
{
 struct hns_roce_v2_priv *VAR_3 = VAR_2->priv;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;


 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "TSQ init failed, ret = %d.\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "TPQ init failed, ret = %d.\n", VAR_6);
  goto err_tpq_init_failed;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->caps.qpc_timer_bt_num;
      VAR_4++) {
  VAR_6 = FUNC_3(VAR_2, &VAR_2->qpc_timer_table,
      VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_2->dev, "QPC Timer get failed\n");
   goto err_qpc_timer_failed;
  }
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->caps.cqc_timer_bt_num;
      VAR_5++) {
  VAR_6 = FUNC_3(VAR_2, &VAR_2->cqc_timer_table,
      VAR_5);
  if (VAR_6) {
   FUNC_0(VAR_2->dev, "CQC Timer get failed\n");
   goto err_cqc_timer_failed;
  }
 }

 return 0;

err_cqc_timer_failed:
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_4(VAR_2, &VAR_2->cqc_timer_table, VAR_7);

err_qpc_timer_failed:
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_4(VAR_2, &VAR_2->qpc_timer_table, VAR_7);

 FUNC_1(VAR_2, &VAR_3->tpq);

err_tpq_init_failed:
 FUNC_1(VAR_2, &VAR_3->tsq);

 return VAR_6;
}
