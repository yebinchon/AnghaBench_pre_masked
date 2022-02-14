
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct hns_roce_mtt {int first_seg; } ;
struct hns_roce_hem_table {int dummy; } ;
struct TYPE_5__ {int num_comp_vectors; } ;
struct TYPE_4__ {struct hns_roce_hem_table mtt_table; struct hns_roce_hem_table mtt_cqe_table; } ;
struct hns_roce_cq_table {int bitmap; int table; int array; } ;
struct hns_roce_dev {TYPE_3__* hw; TYPE_2__ caps; TYPE_1__ mr_table; struct hns_roce_cq_table cq_table; struct device* dev; } ;
struct hns_roce_cq {int vector; int arm_sn; int cqn; int free; int refcount; scalar_t__ cons_index; } ;
struct hns_roce_cmd_mailbox {int buf; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int (* write_cqc ) (struct hns_roce_dev*,struct hns_roce_cq*,int ,int *,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct hns_roce_cmd_mailbox* FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (struct hns_roce_dev*,int ) ;
 int FUNC_8 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_9 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*,int ) ;
 int * FUNC_10 (struct hns_roce_dev*,struct hns_roce_hem_table*,int ,int *) ;
 int FUNC_11 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_12 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct hns_roce_dev*,struct hns_roce_cq*,int ,int *,int ,int,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ,struct hns_roce_cq*,int ) ;

__attribute__((used)) static int FUNC_18(struct hns_roce_dev *VAR_5, int VAR_6,
        struct hns_roce_mtt *VAR_7,
        struct hns_roce_cq *VAR_8, int VAR_9)
{
 struct hns_roce_cmd_mailbox *VAR_10;
 struct hns_roce_hem_table *VAR_11;
 struct hns_roce_cq_table *VAR_12;
 struct device *VAR_13 = VAR_5->dev;
 dma_addr_t VAR_14;
 u64 *VAR_15;
 int VAR_16;

 VAR_12 = &VAR_5->cq_table;


 if (FUNC_7(VAR_5, VAR_4))
  VAR_11 = &VAR_5->mr_table.mtt_cqe_table;
 else
  VAR_11 = &VAR_5->mr_table.mtt_table;

 VAR_15 = FUNC_10(VAR_5, VAR_11,
       VAR_7->first_seg, &VAR_14);
 if (!VAR_15) {
  FUNC_3(VAR_13, "CQ alloc.Failed to find cq buf addr.\n");
  return -VAR_1;
 }

 if (VAR_9 >= VAR_5->caps.num_comp_vectors) {
  FUNC_3(VAR_13, "CQ alloc.Invalid vector.\n");
  return -VAR_1;
 }
 VAR_8->vector = VAR_9;

 VAR_16 = FUNC_5(&VAR_12->bitmap, &VAR_8->cqn);
 if (VAR_16 == -1) {
  FUNC_3(VAR_13, "CQ alloc.Failed to alloc index.\n");
  return -VAR_2;
 }


 VAR_16 = FUNC_11(VAR_5, &VAR_12->table, VAR_8->cqn);
 if (VAR_16) {
  FUNC_3(VAR_13, "CQ alloc.Failed to get context mem.\n");
  goto err_out;
 }

 VAR_16 = FUNC_16(FUNC_17(&VAR_12->array, VAR_8->cqn, VAR_8, VAR_3));
 if (VAR_16) {
  FUNC_3(VAR_13, "CQ alloc failed xa_store.\n");
  goto err_put;
 }


 VAR_10 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_10)) {
  VAR_16 = FUNC_1(VAR_10);
  goto err_xa;
 }

 VAR_5->hw->write_cqc(VAR_5, VAR_8, VAR_10->buf, VAR_15, VAR_14,
         VAR_6, VAR_9);


 VAR_16 = FUNC_9(VAR_5, VAR_10, VAR_8->cqn);
 FUNC_8(VAR_5, VAR_10);
 if (VAR_16) {
  FUNC_3(VAR_13, "CQ alloc.Failed to cmd mailbox.\n");
  goto err_xa;
 }

 VAR_8->cons_index = 0;
 VAR_8->arm_sn = 1;

 FUNC_2(&VAR_8->refcount, 1);
 FUNC_13(&VAR_8->free);

 return 0;

err_xa:
 FUNC_15(&VAR_12->array, VAR_8->cqn);

err_put:
 FUNC_12(VAR_5, &VAR_12->table, VAR_8->cqn);

err_out:
 FUNC_6(&VAR_12->bitmap, VAR_8->cqn, VAR_0);
 return VAR_16;
}
