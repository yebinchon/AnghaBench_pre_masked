
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_qp_context {int dummy; } ;
struct hns_roce_qp {int qpn; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmd_mailbox {int buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_6 (struct hns_roce_v2_qp_context*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_2,
     struct hns_roce_qp *VAR_3,
     struct hns_roce_v2_qp_context *VAR_4)
{
 struct hns_roce_cmd_mailbox *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_4(VAR_2, 0, VAR_5->dma, VAR_3->qpn, 0,
    VAR_0,
    VAR_1);
 if (VAR_6) {
  FUNC_2(VAR_2->dev, "QUERY QP cmd process error\n");
  goto out;
 }

 FUNC_6(VAR_4, VAR_5->buf, sizeof(*VAR_4));

out:
 FUNC_5(VAR_2, VAR_5);
 return VAR_6;
}
