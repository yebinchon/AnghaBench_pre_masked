
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rdma_cqe {int resp; int req; } ;
typedef scalar_t__ u32 ;
struct qedr_qp {int ibqp; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {scalar_t__ cq_type; int cq_lock; int arm_flags; scalar_t__ cq_cons; int pbl; union rdma_cqe* latest_cqe; int icid; scalar_t__ destroyed; } ;
struct ib_wc {int * qp; } ;
struct ib_cq {int device; } ;


 int FUNC_0 (struct qedr_dev*,char*,...) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 (int,char*,union rdma_cqe*) ;
 struct qedr_qp* FUNC_2 (union rdma_cqe*) ;
 int FUNC_3 (union rdma_cqe*) ;
 int FUNC_4 (struct qedr_cq*,scalar_t__,int ) ;
 union rdma_cqe* FUNC_5 (struct qedr_cq*) ;
 struct qedr_cq* FUNC_6 (struct ib_cq*) ;
 struct qedr_dev* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct qedr_cq*,union rdma_cqe*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_11 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,int,struct ib_wc*,int *) ;
 int FUNC_12 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,int,struct ib_wc*,int *,int*) ;
 int FUNC_13 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,int,struct ib_wc*,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct qedr_cq*,struct qedr_qp*,int *,int*) ;

int FUNC_18(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct qedr_dev *VAR_4 = FUNC_7(VAR_1->device);
 struct qedr_cq *VAR_5 = FUNC_6(VAR_1);
 union rdma_cqe *VAR_6;
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_5->destroyed) {
  FUNC_0(VAR_4,
         "warning: poll was invoked after destroy for cq %p (icid=%d)\n",
         VAR_5, VAR_5->icid);
  return 0;
 }

 if (VAR_5->cq_type == VAR_0)
  return FUNC_10(VAR_1, VAR_2, VAR_3);

 FUNC_15(&VAR_5->cq_lock, VAR_9);
 VAR_6 = VAR_5->latest_cqe;
 VAR_7 = FUNC_9(&VAR_5->pbl);
 while (VAR_2 && FUNC_8(VAR_5, VAR_6)) {
  struct qedr_qp *VAR_12;
  int VAR_13 = 0;


  FUNC_14();

  VAR_12 = FUNC_2(VAR_6);
  if (!VAR_12) {
   FUNC_1(1, "Error: CQE QP pointer is NULL. CQE=%p\n", VAR_6);
   break;
  }

  VAR_3->qp = &VAR_12->ibqp;

  switch (FUNC_3(VAR_6)) {
  case 130:
   VAR_13 = FUNC_11(VAR_4, VAR_12, VAR_5, VAR_2, VAR_3,
            &VAR_6->req);
   FUNC_17(VAR_5, VAR_12, &VAR_6->req, &VAR_10);
   break;
  case 129:
   VAR_13 = FUNC_12(VAR_4, VAR_12, VAR_5, VAR_2, VAR_3,
      &VAR_6->resp, &VAR_10);
   break;
  case 128:
   VAR_13 = FUNC_13(VAR_4, VAR_12, VAR_5, VAR_2,
          VAR_3, &VAR_6->resp);
   VAR_10 = 1;
   break;
  case 131:
  default:
   FUNC_0(VAR_4, "Error: invalid CQE type = %d\n",
          FUNC_3(VAR_6));
  }
  VAR_2 -= VAR_13;
  VAR_3 += VAR_13;
  VAR_11 += VAR_13;

  VAR_6 = FUNC_5(VAR_5);
 }
 VAR_8 = FUNC_9(&VAR_5->pbl);

 VAR_5->cq_cons += VAR_8 - VAR_7;

 if (VAR_10)



  FUNC_4(VAR_5, VAR_5->cq_cons - 1, VAR_5->arm_flags);

 FUNC_16(&VAR_5->cq_lock, VAR_9);
 return VAR_11;
}
