
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ureq ;
typedef void* u64 ;
typedef void* u32 ;
struct qed_chain {int dummy; } ;
struct qedr_srq_hwq_info {void* phy_prod_pair_addr; struct qed_chain pbl; int max_sges; int max_wr; } ;
struct TYPE_7__ {void* num_pbes; } ;
struct TYPE_9__ {TYPE_3__* pbl_tbl; TYPE_2__ pbl_info; } ;
struct qedr_srq {int srq_id; TYPE_4__ usrq; int lock; struct qedr_srq_hwq_info hw_srq; struct qedr_dev* dev; } ;
struct qedr_pd {int pd_id; } ;
struct qedr_dev {int rdma_ctx; TYPE_5__* ops; int srqs; } ;
struct qedr_create_srq_ureq {int dummy; } ;
struct qed_rdma_destroy_srq_in_params {int srq_id; } ;
struct qed_rdma_create_srq_out_params {int srq_id; } ;
struct qed_rdma_create_srq_in_params {void* page_size; void* num_pages; void* prod_pair_addr; void* pbl_base_addr; int pd_id; } ;
struct ib_udata {int dummy; } ;
struct TYPE_6__ {int max_sge; int max_wr; } ;
struct ib_srq_init_attr {TYPE_1__ attr; } ;
struct ib_srq {int pd; int device; } ;
struct TYPE_10__ {int (* rdma_create_srq ) (int ,struct qed_rdma_create_srq_in_params*,struct qed_rdma_create_srq_out_params*) ;int (* rdma_destroy_srq ) (int ,struct qed_rdma_destroy_srq_in_params*) ;} ;
struct TYPE_8__ {void* pa; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,char*,...) ;
 int FUNC_1 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 struct qedr_dev* FUNC_2 (int ) ;
 struct qedr_pd* FUNC_3 (int ) ;
 struct qedr_srq* FUNC_4 (struct ib_srq*) ;
 scalar_t__ FUNC_5 (struct qedr_create_srq_ureq*,struct ib_udata*,int) ;
 void* FUNC_6 (struct qed_chain*) ;
 void* FUNC_7 (struct qed_chain*) ;
 int FUNC_8 (struct qedr_srq*,struct qedr_dev*,struct ib_srq_init_attr*) ;
 int FUNC_9 (struct qedr_dev*,struct ib_srq_init_attr*,struct ib_udata*) ;
 int FUNC_10 (struct qedr_dev*,struct qedr_srq*,struct ib_udata*) ;
 int FUNC_11 (struct qedr_srq*) ;
 int FUNC_12 (struct qedr_srq*) ;
 int FUNC_13 (struct ib_udata*,struct qedr_srq*,struct qedr_create_srq_ureq*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct qed_rdma_create_srq_in_params*,struct qed_rdma_create_srq_out_params*) ;
 int FUNC_16 (int ,struct qed_rdma_destroy_srq_in_params*) ;
 int FUNC_17 (int *,int ,struct qedr_srq*,int ) ;

int FUNC_18(struct ib_srq *VAR_7, struct ib_srq_init_attr *VAR_8,
      struct ib_udata *VAR_9)
{
 struct qed_rdma_destroy_srq_in_params VAR_10;
 struct qed_rdma_create_srq_in_params VAR_11 = {};
 struct qedr_dev *VAR_12 = FUNC_2(VAR_7->device);
 struct qed_rdma_create_srq_out_params VAR_13;
 struct qedr_pd *VAR_14 = FUNC_3(VAR_7->pd);
 struct qedr_create_srq_ureq VAR_15 = {};
 u64 VAR_16, VAR_17;
 struct qedr_srq_hwq_info *VAR_18;
 u32 VAR_19, VAR_20;
 struct qedr_srq *VAR_21 = FUNC_4(VAR_7);
 int VAR_22 = 0;

 FUNC_0(VAR_12, VAR_4,
   "create SRQ called from %s (pd %p)\n",
   (VAR_9) ? "User lib" : "kernel", VAR_14);

 VAR_22 = FUNC_9(VAR_12, VAR_8, VAR_9);
 if (VAR_22)
  return -VAR_1;

 VAR_21->dev = VAR_12;
 VAR_18 = &VAR_21->hw_srq;
 FUNC_14(&VAR_21->lock);

 VAR_18->max_wr = VAR_8->attr.max_wr;
 VAR_18->max_sges = VAR_8->attr.max_sge;

 if (VAR_9) {
  if (FUNC_5(&VAR_15, VAR_9, sizeof(VAR_15))) {
   FUNC_1(VAR_12,
          "create srq: problem copying data from user space\n");
   goto err0;
  }

  VAR_22 = FUNC_13(VAR_9, VAR_21, &VAR_15, 0, 0);
  if (VAR_22)
   goto err0;

  VAR_19 = VAR_21->usrq.pbl_info.num_pbes;
  VAR_16 = VAR_21->usrq.pbl_tbl->pa;
  VAR_17 = VAR_18->phy_prod_pair_addr;
  VAR_20 = VAR_3;
 } else {
  struct qed_chain *VAR_23;

  VAR_22 = FUNC_8(VAR_21, VAR_12, VAR_8);
  if (VAR_22)
   goto err0;

  VAR_23 = &VAR_18->pbl;
  VAR_19 = FUNC_6(VAR_23);
  VAR_16 = FUNC_7(VAR_23);
  VAR_17 = VAR_18->phy_prod_pair_addr;
  VAR_20 = VAR_6;
 }

 VAR_11.pd_id = VAR_14->pd_id;
 VAR_11.pbl_base_addr = VAR_16;
 VAR_11.prod_pair_addr = VAR_17;
 VAR_11.num_pages = VAR_19;
 VAR_11.page_size = VAR_20;

 VAR_22 = VAR_12->ops->rdma_create_srq(VAR_12->rdma_ctx, &VAR_11, &VAR_13);
 if (VAR_22)
  goto err1;

 VAR_21->srq_id = VAR_13.srq_id;

 if (VAR_9) {
  VAR_22 = FUNC_10(VAR_12, VAR_21, VAR_9);
  if (VAR_22)
   goto err2;
 }

 VAR_22 = FUNC_17(&VAR_12->srqs, VAR_21->srq_id, VAR_21, VAR_2);
 if (VAR_22)
  goto err2;

 FUNC_0(VAR_12, VAR_5,
   "create srq: created srq with srq_id=0x%0x\n", VAR_21->srq_id);
 return 0;

err2:
 VAR_10.srq_id = VAR_21->srq_id;

 VAR_12->ops->rdma_destroy_srq(VAR_12->rdma_ctx, &VAR_10);
err1:
 if (VAR_9)
  FUNC_12(VAR_21);
 else
  FUNC_11(VAR_21);
err0:
 return -VAR_0;
}
