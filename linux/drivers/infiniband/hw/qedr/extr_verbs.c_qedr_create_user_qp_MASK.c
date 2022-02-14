
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ureq ;
struct TYPE_5__ {int num_pbes; } ;
struct TYPE_8__ {TYPE_2__* pbl_tbl; TYPE_1__ pbl_info; } ;
struct qedr_qp {int qed_qp; int icid; int qp_id; TYPE_4__ urq; int srq; TYPE_4__ usq; } ;
struct qedr_pd {int dummy; } ;
struct qedr_dev {int rdma_ctx; TYPE_3__* ops; int ibdev; } ;
struct qedr_create_qp_ureq {int rq_pbl_ptr; int rq_num_pages; int sq_pbl_ptr; int sq_num_pages; int qp_handle_hi; int qp_handle_lo; int rq_len; int rq_addr; int sq_len; int sq_addr; } ;
struct qed_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct qed_rdma_create_qp_in_params {int rq_pbl_ptr; int rq_num_pages; int sq_pbl_ptr; int sq_num_pages; int qp_handle_hi; int qp_handle_lo; int rq_len; int rq_addr; int sq_len; int sq_addr; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_pd {int dummy; } ;
typedef int in_params ;
struct TYPE_7__ {int (* rdma_destroy_qp ) (int ,int ) ;int (* rdma_create_qp ) (int ,struct qedr_create_qp_ureq*,struct qed_rdma_create_qp_out_params*) ;} ;
struct TYPE_6__ {int pa; } ;


 int FUNC_0 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qedr_pd* FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (struct qedr_create_qp_ureq*,struct ib_udata*,int) ;
 int FUNC_3 (struct qedr_create_qp_ureq*,int ,int) ;
 int FUNC_4 (struct qedr_dev*,struct qedr_qp*) ;
 int FUNC_5 (struct qedr_dev*,struct qedr_qp*,struct ib_udata*) ;
 int FUNC_6 (struct qedr_dev*,struct qedr_pd*,struct qedr_qp*,struct ib_qp_init_attr*,int,struct qedr_create_qp_ureq*) ;
 int FUNC_7 (struct ib_udata*,struct qedr_dev*,TYPE_4__*,int ,int ,int ,int ,int) ;
 int FUNC_8 (struct qedr_dev*,struct qedr_qp*,struct qed_rdma_create_qp_out_params*) ;
 int FUNC_9 (struct qedr_dev*,struct qedr_qp*) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,struct qedr_create_qp_ureq*,struct qed_rdma_create_qp_out_params*) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct qedr_dev *VAR_2,
          struct qedr_qp *VAR_3,
          struct ib_pd *VAR_4,
          struct ib_udata *VAR_5,
          struct ib_qp_init_attr *VAR_6)
{
 struct qed_rdma_create_qp_in_params VAR_7;
 struct qed_rdma_create_qp_out_params VAR_8;
 struct qedr_pd *VAR_9 = FUNC_1(VAR_4);
 struct qedr_create_qp_ureq VAR_10;
 int VAR_11 = FUNC_11(&VAR_2->ibdev, 1);
 int VAR_12 = -VAR_0;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_12 = FUNC_2(&VAR_10, VAR_5, sizeof(VAR_10));
 if (VAR_12) {
  FUNC_0(VAR_2, "Problem copying data from user space\n");
  return VAR_12;
 }


 VAR_12 = FUNC_7(VAR_5, VAR_2, &VAR_3->usq, VAR_10.sq_addr,
      VAR_10.sq_len, 0, 0, VAR_11);
 if (VAR_12)
  return VAR_12;

 if (!VAR_3->srq) {

  VAR_12 = FUNC_7(VAR_5, VAR_2, &VAR_3->urq, VAR_10.rq_addr,
       VAR_10.rq_len, 0, 0, VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 FUNC_6(VAR_2, VAR_9, VAR_3, VAR_6, 0, &VAR_7);
 VAR_7.qp_handle_lo = VAR_10.qp_handle_lo;
 VAR_7.qp_handle_hi = VAR_10.qp_handle_hi;
 VAR_7.sq_num_pages = VAR_3->usq.pbl_info.num_pbes;
 VAR_7.sq_pbl_ptr = VAR_3->usq.pbl_tbl->pa;
 if (!VAR_3->srq) {
  VAR_7.rq_num_pages = VAR_3->urq.pbl_info.num_pbes;
  VAR_7.rq_pbl_ptr = VAR_3->urq.pbl_tbl->pa;
 }

 VAR_3->qed_qp = VAR_2->ops->rdma_create_qp(VAR_2->rdma_ctx,
           &VAR_7, &VAR_8);

 if (!VAR_3->qed_qp) {
  VAR_12 = -VAR_1;
  goto err1;
 }

 if (FUNC_10(&VAR_2->ibdev, 1))
  FUNC_8(VAR_2, VAR_3, &VAR_8);

 VAR_3->qp_id = VAR_8.qp_id;
 VAR_3->icid = VAR_8.icid;

 VAR_12 = FUNC_5(VAR_2, VAR_3, VAR_5);
 if (VAR_12)
  goto err;

 FUNC_9(VAR_2, VAR_3);

 return 0;
err:
 VAR_12 = VAR_2->ops->rdma_destroy_qp(VAR_2->rdma_ctx, VAR_3->qed_qp);
 if (VAR_12)
  FUNC_0(VAR_2, "create qp: fatal fault. rc=%d", VAR_12);

err1:
 FUNC_4(VAR_2, VAR_3);
 return VAR_12;
}
