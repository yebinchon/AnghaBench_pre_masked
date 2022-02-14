
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_mw {int enabled; int rkey; } ;
struct hns_roce_mr_table {int mtpt_table; } ;
struct TYPE_4__ {int num_mtpts; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__* hw; struct device* dev; struct hns_roce_mr_table mr_table; } ;
struct hns_roce_cmd_mailbox {int buf; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* mw_write_mtpt ) (int ,struct hns_roce_mw*) ;} ;


 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*,unsigned long) ;
 int FUNC_6 (struct hns_roce_dev*,int *,unsigned long) ;
 int FUNC_7 (struct hns_roce_dev*,int *,unsigned long) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ,struct hns_roce_mw*) ;

__attribute__((used)) static int FUNC_10(struct hns_roce_dev *VAR_0,
         struct hns_roce_mw *VAR_1)
{
 struct hns_roce_mr_table *VAR_2 = &VAR_0->mr_table;
 struct hns_roce_cmd_mailbox *VAR_3;
 struct device *VAR_4 = VAR_0->dev;
 unsigned long VAR_5 = FUNC_8(VAR_1->rkey);
 int VAR_6;


 VAR_6 = FUNC_6(VAR_0, &VAR_2->mtpt_table, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_1(VAR_3);
  goto err_table;
 }

 VAR_6 = VAR_0->hw->mw_write_mtpt(VAR_3->buf, VAR_1);
 if (VAR_6) {
  FUNC_2(VAR_4, "MW write mtpt fail!\n");
  goto err_page;
 }

 VAR_6 = FUNC_5(VAR_0, VAR_3,
     VAR_5 & (VAR_0->caps.num_mtpts - 1));
 if (VAR_6) {
  FUNC_2(VAR_4, "MW sw2hw_mpt failed (%d)\n", VAR_6);
  goto err_page;
 }

 VAR_1->enabled = 1;

 FUNC_4(VAR_0, VAR_3);

 return 0;

err_page:
 FUNC_4(VAR_0, VAR_3);

err_table:
 FUNC_7(VAR_0, &VAR_2->mtpt_table, VAR_5);

 return VAR_6;
}
