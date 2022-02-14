
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; int psn; } ;
struct TYPE_9__ {int max_sge; int max_wr; } ;
struct TYPE_7__ {int max_inline; int max_sge; int max_wr; } ;
struct TYPE_6__ {int psn; } ;
struct TYPE_8__ {int max_recv_sge; int max_recv_wr; int max_inline_data; int max_send_sge; int max_send_wr; } ;
struct ib_qp_attr {int sq_draining; int alt_ah_attr; int ah_attr; TYPE_3__ cap; int sq_psn; int rq_psn; } ;
struct rxe_qp {TYPE_5__ req; int alt_av; int pri_av; TYPE_4__ rq; int srq; TYPE_2__ sq; TYPE_1__ resp; struct ib_qp_attr attr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct rxe_qp *VAR_1, struct ib_qp_attr *VAR_2, int VAR_3)
{
 *VAR_2 = VAR_1->attr;

 VAR_2->rq_psn = VAR_1->resp.psn;
 VAR_2->sq_psn = VAR_1->req.psn;

 VAR_2->cap.max_send_wr = VAR_1->sq.max_wr;
 VAR_2->cap.max_send_sge = VAR_1->sq.max_sge;
 VAR_2->cap.max_inline_data = VAR_1->sq.max_inline;

 if (!VAR_1->srq) {
  VAR_2->cap.max_recv_wr = VAR_1->rq.max_wr;
  VAR_2->cap.max_recv_sge = VAR_1->rq.max_sge;
 }

 FUNC_2(&VAR_1->pri_av, &VAR_2->ah_attr);
 FUNC_2(&VAR_1->alt_av, &VAR_2->alt_ah_attr);

 if (VAR_1->req.state == VAR_0) {
  VAR_2->sq_draining = 1;




  FUNC_0();
 } else {
  VAR_2->sq_draining = 0;
 }

 FUNC_1("attr->sq_draining = %d\n", VAR_2->sq_draining);

 return 0;
}
