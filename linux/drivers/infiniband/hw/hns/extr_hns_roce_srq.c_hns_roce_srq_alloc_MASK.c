
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_srq_table {int bitmap; int table; int xa; } ;
struct TYPE_8__ {int first_seg; } ;
struct TYPE_9__ {TYPE_3__ mtt; } ;
struct TYPE_6__ {int first_seg; } ;
struct hns_roce_srq {int srqn; int free; int refcount; TYPE_4__ idx_que; TYPE_1__ mtt; } ;
struct hns_roce_mtt {int dummy; } ;
struct TYPE_7__ {int mtt_idx_table; int mtt_srqwqe_table; } ;
struct hns_roce_dev {TYPE_5__* hw; int dev; TYPE_2__ mr_table; struct hns_roce_srq_table srq_table; } ;
struct hns_roce_cmd_mailbox {int buf; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int (* write_srqc ) (struct hns_roce_dev*,struct hns_roce_srq*,int ,int ,int ,int ,int *,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_8 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*,int ) ;
 int * FUNC_9 (struct hns_roce_dev*,int *,int ,int *) ;
 int FUNC_10 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_11 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hns_roce_dev*,struct hns_roce_srq*,int ,int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,struct hns_roce_srq*,int ) ;

__attribute__((used)) static int FUNC_17(struct hns_roce_dev *VAR_4, u32 VAR_5, u32 VAR_6,
         u16 VAR_7, struct hns_roce_mtt *VAR_8,
         u64 VAR_9, struct hns_roce_srq *VAR_10)
{
 struct hns_roce_srq_table *VAR_11 = &VAR_4->srq_table;
 struct hns_roce_cmd_mailbox *VAR_12;
 dma_addr_t VAR_13;
 dma_addr_t VAR_14;
 u64 *VAR_15;
 u64 *VAR_16;
 int VAR_17;


 VAR_15 = FUNC_9(VAR_4,
           &VAR_4->mr_table.mtt_srqwqe_table,
           VAR_10->mtt.first_seg,
           &VAR_13);
 if (!VAR_15) {
  FUNC_3(VAR_4->dev,
   "SRQ alloc.Failed to find srq buf addr.\n");
  return -VAR_1;
 }


 VAR_16 = FUNC_9(VAR_4, &VAR_4->mr_table.mtt_idx_table,
           VAR_10->idx_que.mtt.first_seg,
           &VAR_14);
 if (!VAR_16) {
  FUNC_3(VAR_4->dev,
   "SRQ alloc.Failed to find idx que buf addr.\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_5(&VAR_11->bitmap, &VAR_10->srqn);
 if (VAR_17 == -1) {
  FUNC_3(VAR_4->dev, "SRQ alloc.Failed to alloc index.\n");
  return -VAR_2;
 }

 VAR_17 = FUNC_10(VAR_4, &VAR_11->table, VAR_10->srqn);
 if (VAR_17)
  goto err_out;

 VAR_17 = FUNC_15(FUNC_16(&VAR_11->xa, VAR_10->srqn, VAR_10, VAR_3));
 if (VAR_17)
  goto err_put;

 VAR_12 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_12)) {
  VAR_17 = FUNC_1(VAR_12);
  goto err_xa;
 }

 VAR_4->hw->write_srqc(VAR_4, VAR_10, VAR_5, VAR_7, VAR_6, VAR_12->buf,
          VAR_15, VAR_16, VAR_13,
          VAR_14);

 VAR_17 = FUNC_8(VAR_4, VAR_12, VAR_10->srqn);
 FUNC_7(VAR_4, VAR_12);
 if (VAR_17)
  goto err_xa;

 FUNC_2(&VAR_10->refcount, 1);
 FUNC_12(&VAR_10->free);
 return VAR_17;

err_xa:
 FUNC_14(&VAR_11->xa, VAR_10->srqn);

err_put:
 FUNC_11(VAR_4, &VAR_11->table, VAR_10->srqn);

err_out:
 FUNC_6(&VAR_11->bitmap, VAR_10->srqn, VAR_0);
 return VAR_17;
}
