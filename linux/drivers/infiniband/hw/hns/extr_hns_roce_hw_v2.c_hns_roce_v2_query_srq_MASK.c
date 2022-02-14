
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_srq_attr {int srq_limit; int max_sge; scalar_t__ max_wr; } ;
struct ib_srq {int device; } ;
struct hns_roce_srq_context {int byte_8_limit_wl; } ;
struct hns_roce_srq {int max_gs; scalar_t__ max; int srqn; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmd_mailbox {struct hns_roce_srq_context* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_6 (struct hns_roce_srq_context*,struct hns_roce_srq_context*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 struct hns_roce_dev* FUNC_8 (int ) ;
 struct hns_roce_srq* FUNC_9 (struct ib_srq*) ;

__attribute__((used)) static int FUNC_10(struct ib_srq *VAR_4, struct ib_srq_attr *VAR_5)
{
 struct hns_roce_dev *VAR_6 = FUNC_8(VAR_4->device);
 struct hns_roce_srq *VAR_7 = FUNC_9(VAR_4);
 struct hns_roce_srq_context *VAR_8;
 struct hns_roce_cmd_mailbox *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_8 = VAR_9->buf;
 VAR_11 = FUNC_4(VAR_6, 0, VAR_9->dma, VAR_7->srqn, 0,
    VAR_0,
    VAR_1);
 if (VAR_11) {
  FUNC_2(VAR_6->dev, "QUERY SRQ cmd process error\n");
  goto out;
 }

 VAR_10 = FUNC_7(VAR_8->byte_8_limit_wl,
      VAR_2,
      VAR_3);

 VAR_5->srq_limit = VAR_10;
 VAR_5->max_wr = VAR_7->max - 1;
 VAR_5->max_sge = VAR_7->max_gs;

 FUNC_6(VAR_8, VAR_9->buf, sizeof(*VAR_8));

out:
 FUNC_5(VAR_6, VAR_9);
 return VAR_11;
}
