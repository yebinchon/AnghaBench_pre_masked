
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_srq_attr {scalar_t__ srq_limit; } ;
struct ib_srq {int device; } ;
struct hns_roce_srq_context {int byte_8_limit_wl; } ;
struct hns_roce_srq {scalar_t__ max; int srqn; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmd_mailbox {int dma; struct hns_roce_srq_context* buf; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_6 (struct hns_roce_srq_context*,int,int) ;
 int FUNC_7 (int ,int ,int ,scalar_t__) ;
 struct hns_roce_dev* FUNC_8 (int ) ;
 struct hns_roce_srq* FUNC_9 (struct ib_srq*) ;

__attribute__((used)) static int FUNC_10(struct ib_srq *VAR_6,
      struct ib_srq_attr *VAR_7,
      enum ib_srq_attr_mask VAR_8,
      struct ib_udata *VAR_9)
{
 struct hns_roce_dev *VAR_10 = FUNC_8(VAR_6->device);
 struct hns_roce_srq *VAR_11 = FUNC_9(VAR_6);
 struct hns_roce_srq_context *VAR_12;
 struct hns_roce_srq_context *VAR_13;
 struct hns_roce_cmd_mailbox *VAR_14;
 int VAR_15;

 if (VAR_8 & VAR_3) {
  if (VAR_7->srq_limit >= VAR_11->max)
   return -VAR_0;

  VAR_14 = FUNC_3(VAR_10);
  if (FUNC_0(VAR_14))
   return FUNC_1(VAR_14);

  VAR_12 = VAR_14->buf;
  VAR_13 = (struct hns_roce_srq_context *)VAR_14->buf + 1;

  FUNC_6(VAR_13, 0xff, sizeof(*VAR_13));

  FUNC_7(VAR_12->byte_8_limit_wl,
          VAR_4,
          VAR_5, VAR_7->srq_limit);
  FUNC_7(VAR_13->byte_8_limit_wl,
          VAR_4,
          VAR_5, 0);

  VAR_15 = FUNC_4(VAR_10, VAR_14->dma, 0, VAR_11->srqn, 0,
     VAR_1,
     VAR_2);
  FUNC_5(VAR_10, VAR_14);
  if (VAR_15) {
   FUNC_2(VAR_10->dev,
    "MODIFY SRQ Failed to cmd mailbox.\n");
   return VAR_15;
  }
 }

 return 0;
}
