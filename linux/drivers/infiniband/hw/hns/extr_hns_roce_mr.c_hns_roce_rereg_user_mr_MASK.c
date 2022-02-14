
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int device; } ;
struct hns_roce_mr {int enabled; int access; int umem; int key; } ;
struct TYPE_4__ {int num_mtpts; } ;
struct hns_roce_dev {TYPE_2__* hw; TYPE_1__ caps; struct device* dev; } ;
struct hns_roce_cmd_mailbox {int buf; int dma; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int pdn; } ;
struct TYPE_5__ {int (* rereg_write_mtpt ) (struct hns_roce_dev*,struct hns_roce_mr*,int,int ,int,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct hns_roce_cmd_mailbox* FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ,unsigned long,int ,int ,int ) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_7 (struct hns_roce_dev*,int *,unsigned long) ;
 int FUNC_8 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ib_mr*,int,int ,int ,int ,int,struct hns_roce_cmd_mailbox*,int ,struct ib_udata*) ;
 int FUNC_12 (struct hns_roce_dev*,struct hns_roce_mr*,int,int ,int,int ,int ,int ) ;
 struct hns_roce_dev* FUNC_13 (int ) ;
 struct hns_roce_mr* FUNC_14 (struct ib_mr*) ;
 TYPE_3__* FUNC_15 (struct ib_pd*) ;

int FUNC_16(struct ib_mr *VAR_6, int VAR_7, u64 VAR_8, u64 VAR_9,
      u64 VAR_10, int VAR_11, struct ib_pd *VAR_12,
      struct ib_udata *VAR_13)
{
 struct hns_roce_dev *VAR_14 = FUNC_13(VAR_6->device);
 struct hns_roce_mr *VAR_15 = FUNC_14(VAR_6);
 struct hns_roce_cmd_mailbox *VAR_16;
 struct device *VAR_17 = VAR_14->dev;
 unsigned long VAR_18;
 u32 VAR_19 = 0;
 int VAR_20;

 if (!VAR_15->enabled)
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_14);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 VAR_18 = FUNC_10(VAR_15->key) & (VAR_14->caps.num_mtpts - 1);
 VAR_20 = FUNC_5(VAR_14, 0, VAR_16->dma, VAR_18, 0,
    VAR_1,
    VAR_2);
 if (VAR_20)
  goto free_cmd_mbox;

 VAR_20 = FUNC_7(VAR_14, ((void*)0), VAR_18);
 if (VAR_20)
  FUNC_3(VAR_17, "HW2SW_MPT failed (%d)\n", VAR_20);

 VAR_15->enabled = 0;

 if (VAR_7 & VAR_4)
  VAR_19 = FUNC_15(VAR_12)->pdn;

 if (VAR_7 & VAR_5) {
  VAR_20 = FUNC_11(VAR_6, VAR_7,
         VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_16, VAR_19, VAR_13);
  if (VAR_20)
   goto free_cmd_mbox;
 } else {
  VAR_20 = VAR_14->hw->rereg_write_mtpt(VAR_14, VAR_15, VAR_7, VAR_19,
         VAR_11, VAR_10,
         VAR_9, VAR_16->buf);
  if (VAR_20)
   goto free_cmd_mbox;
 }

 VAR_20 = FUNC_8(VAR_14, VAR_16, VAR_18);
 if (VAR_20) {
  FUNC_2(VAR_17, "SW2HW_MPT failed (%d)\n", VAR_20);
  FUNC_9(VAR_15->umem);
  goto free_cmd_mbox;
 }

 VAR_15->enabled = 1;
 if (VAR_7 & VAR_3)
  VAR_15->access = VAR_11;

 FUNC_6(VAR_14, VAR_16);

 return 0;

free_cmd_mbox:
 FUNC_6(VAR_14, VAR_16);

 return VAR_20;
}
