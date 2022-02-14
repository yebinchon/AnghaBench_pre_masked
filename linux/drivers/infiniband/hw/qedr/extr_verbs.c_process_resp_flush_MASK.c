
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ wqe_cons; size_t cons; int pbl; } ;
struct qedr_qp {TYPE_2__ rq; TYPE_1__* rqe_wr_id; int ibqp; int id; } ;
struct qedr_cq {int dummy; } ;
struct ib_wc {int * qp; int wr_id; scalar_t__ byte_len; int src_qp; scalar_t__ wc_flags; scalar_t__ vendor_err; int status; } ;
struct TYPE_3__ {int wqe_size; int wr_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct qedr_qp *VAR_1, struct qedr_cq *VAR_2,
         int VAR_3, struct ib_wc *VAR_4, u16 VAR_5)
{
 u16 VAR_6 = 0;

 while (VAR_3 && VAR_1->rq.wqe_cons != VAR_5) {

  VAR_4->status = VAR_0;
  VAR_4->vendor_err = 0;
  VAR_4->wc_flags = 0;
  VAR_4->src_qp = VAR_1->id;
  VAR_4->byte_len = 0;
  VAR_4->wr_id = VAR_1->rqe_wr_id[VAR_1->rq.cons].wr_id;
  VAR_4->qp = &VAR_1->ibqp;
  VAR_3--;
  VAR_4++;
  VAR_6++;
  while (VAR_1->rqe_wr_id[VAR_1->rq.cons].wqe_size--)
   FUNC_0(&VAR_1->rq.pbl);
  FUNC_1(&VAR_1->rq);
 }

 return VAR_6;
}
