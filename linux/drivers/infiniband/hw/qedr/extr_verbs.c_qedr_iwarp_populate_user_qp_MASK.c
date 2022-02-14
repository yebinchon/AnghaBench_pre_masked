
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pbl_info; TYPE_3__* pbl_tbl; int umem; } ;
struct TYPE_4__ {int pbl_info; TYPE_3__* pbl_tbl; int umem; } ;
struct qedr_qp {TYPE_2__ urq; int srq; TYPE_1__ usq; } ;
struct qedr_dev {int dummy; } ;
struct qed_rdma_create_qp_out_params {int rq_pbl_phys; int rq_pbl_virt; int sq_pbl_phys; int sq_pbl_virt; } ;
struct TYPE_6__ {int pa; int va; } ;


 int VAR_0 ;
 int FUNC_0 (struct qedr_dev*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct qedr_dev *VAR_1,
       struct qedr_qp *VAR_2,
       struct qed_rdma_create_qp_out_params *VAR_3)
{
 VAR_2->usq.pbl_tbl->va = VAR_3->sq_pbl_virt;
 VAR_2->usq.pbl_tbl->pa = VAR_3->sq_pbl_phys;

 FUNC_0(VAR_1, VAR_2->usq.umem, VAR_2->usq.pbl_tbl,
      &VAR_2->usq.pbl_info, VAR_0);
 if (!VAR_2->srq) {
  VAR_2->urq.pbl_tbl->va = VAR_3->rq_pbl_virt;
  VAR_2->urq.pbl_tbl->pa = VAR_3->rq_pbl_phys;
 }

 FUNC_0(VAR_1, VAR_2->urq.umem, VAR_2->urq.pbl_tbl,
      &VAR_2->urq.pbl_info, VAR_0);
}
