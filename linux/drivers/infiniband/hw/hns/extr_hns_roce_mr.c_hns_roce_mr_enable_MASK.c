
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_mr_table {int mtpt_table; } ;
struct hns_roce_mr {scalar_t__ type; int enabled; int key; } ;
struct TYPE_4__ {int num_mtpts; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__* hw; struct hns_roce_mr_table mr_table; struct device* dev; } ;
struct hns_roce_cmd_mailbox {int buf; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* write_mtpt ) (int ,struct hns_roce_mr*,unsigned long) ;int (* frmr_write_mtpt ) (int ,struct hns_roce_mr*) ;} ;


 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*,unsigned long) ;
 int FUNC_6 (struct hns_roce_dev*,int *,unsigned long) ;
 int FUNC_7 (struct hns_roce_dev*,int *,unsigned long) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ,struct hns_roce_mr*,unsigned long) ;
 int FUNC_10 (int ,struct hns_roce_mr*) ;

__attribute__((used)) static int FUNC_11(struct hns_roce_dev *VAR_1,
         struct hns_roce_mr *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = FUNC_8(VAR_2->key);
 struct device *VAR_5 = VAR_1->dev;
 struct hns_roce_cmd_mailbox *VAR_6;
 struct hns_roce_mr_table *VAR_7 = &VAR_1->mr_table;


 VAR_3 = FUNC_6(VAR_1, &VAR_7->mtpt_table, VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_6 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_3 = FUNC_1(VAR_6);
  goto err_table;
 }

 if (VAR_2->type != VAR_0)
  VAR_3 = VAR_1->hw->write_mtpt(VAR_6->buf, VAR_2, VAR_4);
 else
  VAR_3 = VAR_1->hw->frmr_write_mtpt(VAR_6->buf, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_5, "Write mtpt fail!\n");
  goto err_page;
 }

 VAR_3 = FUNC_5(VAR_1, VAR_6,
     VAR_4 & (VAR_1->caps.num_mtpts - 1));
 if (VAR_3) {
  FUNC_2(VAR_5, "SW2HW_MPT failed (%d)\n", VAR_3);
  goto err_page;
 }

 VAR_2->enabled = 1;
 FUNC_4(VAR_1, VAR_6);

 return 0;

err_page:
 FUNC_4(VAR_1, VAR_6);

err_table:
 FUNC_7(VAR_1, &VAR_7->mtpt_table, VAR_4);
 return VAR_3;
}
