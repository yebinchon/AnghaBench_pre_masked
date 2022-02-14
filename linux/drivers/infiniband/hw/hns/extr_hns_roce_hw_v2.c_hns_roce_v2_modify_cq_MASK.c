
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ib_cq {int device; } ;
struct hns_roce_v2_cq_context {int byte_56_cqe_period_maxcnt; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cq {int cqn; } ;
struct hns_roce_cmd_mailbox {int dma; struct hns_roce_v2_cq_context* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_6 (struct hns_roce_v2_cq_context*,int,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct hns_roce_cq* FUNC_8 (struct ib_cq*) ;
 struct hns_roce_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ib_cq *VAR_6, u16 VAR_7, u16 VAR_8)
{
 struct hns_roce_dev *VAR_9 = FUNC_9(VAR_6->device);
 struct hns_roce_v2_cq_context *VAR_10;
 struct hns_roce_cq *VAR_11 = FUNC_8(VAR_6);
 struct hns_roce_v2_cq_context *VAR_12;
 struct hns_roce_cmd_mailbox *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_10 = VAR_13->buf;
 VAR_12 = (struct hns_roce_v2_cq_context *)VAR_13->buf + 1;

 FUNC_6(VAR_12, 0xff, sizeof(*VAR_12));

 FUNC_7(VAR_10->byte_56_cqe_period_maxcnt,
         VAR_2, VAR_3,
         VAR_7);
 FUNC_7(VAR_12->byte_56_cqe_period_maxcnt,
         VAR_2, VAR_3,
         0);
 FUNC_7(VAR_10->byte_56_cqe_period_maxcnt,
         VAR_4, VAR_5,
         VAR_8);
 FUNC_7(VAR_12->byte_56_cqe_period_maxcnt,
         VAR_4, VAR_5,
         0);

 VAR_14 = FUNC_4(VAR_9, VAR_13->dma, 0, VAR_11->cqn, 1,
    VAR_0,
    VAR_1);
 FUNC_5(VAR_9, VAR_13);
 if (VAR_14)
  FUNC_2(VAR_9->dev, "MODIFY CQ Failed to cmd mailbox.\n");

 return VAR_14;
}
