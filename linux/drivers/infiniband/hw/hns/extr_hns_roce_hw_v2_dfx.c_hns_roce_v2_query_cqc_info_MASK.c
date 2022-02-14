
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_v2_cq_context {int dummy; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmd_mailbox {int dma; struct hns_roce_v2_cq_context* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_6 (int*,struct hns_roce_v2_cq_context*,int) ;

int FUNC_7(struct hns_roce_dev *VAR_2, u32 VAR_3,
          int *VAR_4)
{
 struct hns_roce_v2_cq_context *VAR_5;
 struct hns_roce_cmd_mailbox *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = VAR_6->buf;
 VAR_7 = FUNC_4(VAR_2, 0, VAR_6->dma, VAR_3, 0,
    VAR_0,
    VAR_1);
 if (VAR_7) {
  FUNC_2(VAR_2->dev, "QUERY cqc cmd process error\n");
  goto err_mailbox;
 }

 FUNC_6(VAR_4, VAR_5, sizeof(*VAR_5));

err_mailbox:
 FUNC_5(VAR_2, VAR_6);

 return VAR_7;
}
