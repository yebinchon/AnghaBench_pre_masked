
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_cqe {int sq_head; } ;
struct TYPE_2__ {int cq_head; scalar_t__ cqc_phase; int used; } ;
struct hisi_qp {TYPE_1__ qp_status; int qp_id; struct qm_cqe* cqe; scalar_t__ sqe; int (* req_cb ) (struct hisi_qp*,scalar_t__) ;} ;
struct hisi_qm {int sqe_size; } ;


 scalar_t__ FUNC_0 (struct qm_cqe*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct hisi_qp*) ;
 int FUNC_4 (struct hisi_qm*,int ,int ,int,int) ;
 int FUNC_5 (struct hisi_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct hisi_qp *VAR_1, struct hisi_qm *VAR_2)
{
 struct qm_cqe *VAR_3 = VAR_1->cqe + VAR_1->qp_status.cq_head;

 if (VAR_1->req_cb) {
  while (FUNC_0(VAR_3) == VAR_1->qp_status.cqc_phase) {
   FUNC_2();
   VAR_1->req_cb(VAR_1, VAR_1->sqe + VAR_2->sqe_size * VAR_3->sq_head);
   FUNC_3(VAR_1);
   VAR_3 = VAR_1->cqe + VAR_1->qp_status.cq_head;
   FUNC_4(VAR_2, VAR_1->qp_id, VAR_0,
         VAR_1->qp_status.cq_head, 0);
   FUNC_1(&VAR_1->qp_status.used);
  }


  FUNC_4(VAR_2, VAR_1->qp_id, VAR_0,
        VAR_1->qp_status.cq_head, 1);
 }
}
