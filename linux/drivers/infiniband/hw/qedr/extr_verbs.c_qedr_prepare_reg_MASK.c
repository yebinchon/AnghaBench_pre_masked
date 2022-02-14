
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* lo; void* hi; } ;
struct rdma_sq_fmr_wqe_2nd {TYPE_3__ pbl_addr; int length_lo; scalar_t__ length_hi; scalar_t__ fmr_ctrl; scalar_t__ access_ctrl; } ;
struct TYPE_8__ {void* lo; void* hi; } ;
struct rdma_sq_fmr_wqe_1st {int l_key; TYPE_1__ addr; } ;
struct TYPE_14__ {size_t prod; int pbl; } ;
struct qedr_qp {TYPE_7__ sq; TYPE_6__* wqe_wr_id; } ;
struct TYPE_12__ {TYPE_4__* pbl_table; } ;
struct TYPE_9__ {int length; int page_size; int iova; } ;
struct qedr_mr {TYPE_5__ info; TYPE_2__ ibmr; } ;
struct ib_reg_wr {int access; int key; int mr; } ;
struct TYPE_13__ {struct qedr_mr* mr; } ;
struct TYPE_11__ {int pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 struct qedr_mr* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct qedr_qp *VAR_10,
       struct rdma_sq_fmr_wqe_1st *VAR_11,
       const struct ib_reg_wr *VAR_12)
{
 struct qedr_mr *VAR_13 = FUNC_1(VAR_12->mr);
 struct rdma_sq_fmr_wqe_2nd *VAR_14;

 VAR_14 = (struct rdma_sq_fmr_wqe_2nd *)FUNC_4(&VAR_10->sq.pbl);
 VAR_11->addr.hi = FUNC_5(VAR_13->ibmr.iova);
 VAR_11->addr.lo = FUNC_3(VAR_13->ibmr.iova);
 VAR_11->l_key = VAR_12->key;

 VAR_14->access_ctrl = 0;

 FUNC_0(VAR_14->access_ctrl, VAR_8,
     !!(VAR_12->access & VAR_2));
 FUNC_0(VAR_14->access_ctrl, VAR_9,
     !!(VAR_12->access & VAR_3));
 FUNC_0(VAR_14->access_ctrl, VAR_4,
     !!(VAR_12->access & VAR_1));
 FUNC_0(VAR_14->access_ctrl, VAR_5, 1);
 FUNC_0(VAR_14->access_ctrl, VAR_6,
     !!(VAR_12->access & VAR_0));
 VAR_14->fmr_ctrl = 0;

 FUNC_0(VAR_14->fmr_ctrl, VAR_7,
     FUNC_2(VAR_13->ibmr.page_size) - 12);

 VAR_14->length_hi = 0;
 VAR_14->length_lo = VAR_13->ibmr.length;
 VAR_14->pbl_addr.hi = FUNC_5(VAR_13->info.pbl_table->pa);
 VAR_14->pbl_addr.lo = FUNC_3(VAR_13->info.pbl_table->pa);

 VAR_10->wqe_wr_id[VAR_10->sq.prod].mr = VAR_13;

 return 0;
}
