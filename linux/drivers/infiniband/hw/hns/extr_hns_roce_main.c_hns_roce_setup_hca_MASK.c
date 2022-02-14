
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct hns_roce_dev {int priv_uar; TYPE_1__ caps; int pgdir_mutex; int pgdir_list; int bt_cmd_lock; int sm_lock; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*) ;
 int FUNC_6 (struct hns_roce_dev*) ;
 int FUNC_7 (struct hns_roce_dev*) ;
 int FUNC_8 (struct hns_roce_dev*) ;
 int FUNC_9 (struct hns_roce_dev*) ;
 int FUNC_10 (struct hns_roce_dev*) ;
 int FUNC_11 (struct hns_roce_dev*) ;
 int FUNC_12 (struct hns_roce_dev*) ;
 int FUNC_13 (struct hns_roce_dev*,int *) ;
 int FUNC_14 (struct hns_roce_dev*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct hns_roce_dev *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_2->dev;

 FUNC_16(&VAR_2->sm_lock);
 FUNC_16(&VAR_2->bt_cmd_lock);

 if (VAR_2->caps.flags & VAR_0) {
  FUNC_0(&VAR_2->pgdir_list);
  FUNC_15(&VAR_2->pgdir_mutex);
 }

 VAR_3 = FUNC_12(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to initialize uar table. aborting\n");
  return VAR_3;
 }

 VAR_3 = FUNC_13(VAR_2, &VAR_2->priv_uar);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to allocate priv_uar.\n");
  goto err_uar_table_free;
 }

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to init protected domain table.\n");
  goto err_uar_alloc_free;
 }

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to init memory region table.\n");
  goto err_pd_table_free;
 }

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to init completion queue table.\n");
  goto err_mr_table_free;
 }

 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to init queue pair table.\n");
  goto err_cq_table_free;
 }

 if (VAR_2->caps.flags & VAR_1) {
  VAR_3 = FUNC_11(VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_4,
    "Failed to init share receive queue table.\n");
   goto err_qp_table_free;
  }
 }

 return 0;

err_qp_table_free:
 if (VAR_2->caps.flags & VAR_1)
  FUNC_5(VAR_2);

err_cq_table_free:
 FUNC_2(VAR_2);

err_mr_table_free:
 FUNC_3(VAR_2);

err_pd_table_free:
 FUNC_4(VAR_2);

err_uar_alloc_free:
 FUNC_14(VAR_2, &VAR_2->priv_uar);

err_uar_table_free:
 FUNC_6(VAR_2);
 return VAR_3;
}
