
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rdma_cqe_responder {scalar_t__ status; scalar_t__ flags; } ;
struct qedr_qp {int ibqp; int id; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int icid; } ;
struct ib_wc {scalar_t__ status; int wr_id; int * qp; int src_qp; scalar_t__ vendor_err; scalar_t__ wc_flags; int opcode; } ;


 int FUNC_0 (struct qedr_dev*,char*,struct qedr_cq*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct rdma_cqe_responder*,struct ib_wc*) ;

__attribute__((used)) static void FUNC_4(struct qedr_dev *VAR_3, struct qedr_qp *VAR_4,
          struct qedr_cq *VAR_5, struct ib_wc *VAR_6,
          struct rdma_cqe_responder *VAR_7, u64 VAR_8)
{

 VAR_6->opcode = VAR_1;
 VAR_6->wc_flags = 0;

 if (FUNC_1(VAR_7->status == VAR_2)) {
  if (FUNC_3(VAR_7, VAR_6))
   FUNC_0(VAR_3,
          "CQ %p (icid=%d) has invalid CQE responder flags=0x%x\n",
          VAR_5, VAR_5->icid, VAR_7->flags);

 } else {
  VAR_6->status = FUNC_2(VAR_7->status);
  if (VAR_6->status == VAR_0)
   FUNC_0(VAR_3,
          "CQ %p (icid=%d) contains an invalid CQE status %d\n",
          VAR_5, VAR_5->icid, VAR_7->status);
 }


 VAR_6->vendor_err = 0;
 VAR_6->src_qp = VAR_4->id;
 VAR_6->qp = &VAR_4->ibqp;
 VAR_6->wr_id = VAR_8;
}
