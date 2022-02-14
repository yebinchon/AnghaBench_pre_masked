
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_sges; size_t head; } ;
struct ocrdma_qp {scalar_t__ state; int q_lock; TYPE_1__ rq; int * rqe_wr_id_tbl; } ;
struct ocrdma_hdr_wqe {int dummy; } ;
struct ib_recv_wr {scalar_t__ num_sge; struct ib_recv_wr* next; int wr_id; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ocrdma_qp* FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ocrdma_hdr_wqe*,struct ib_recv_wr const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct ocrdma_hdr_wqe* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct ocrdma_qp*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;

int FUNC_9(struct ib_qp *VAR_4, const struct ib_recv_wr *VAR_5,
       const struct ib_recv_wr **VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;
 struct ocrdma_qp *VAR_9 = FUNC_0(VAR_4);
 struct ocrdma_hdr_wqe *VAR_10;

 FUNC_6(&VAR_9->q_lock, VAR_8);
 if (VAR_9->state == VAR_3 || VAR_9->state == VAR_2) {
  FUNC_7(&VAR_9->q_lock, VAR_8);
  *VAR_6 = VAR_5;
  return -VAR_0;
 }
 while (VAR_5) {
  if (FUNC_2(&VAR_9->rq) == 0 ||
      VAR_5->num_sge > VAR_9->rq.max_sges) {
   *VAR_6 = VAR_5;
   VAR_7 = -VAR_1;
   break;
  }
  VAR_10 = FUNC_3(&VAR_9->rq);
  FUNC_1(VAR_10, VAR_5, 0);

  VAR_9->rqe_wr_id_tbl[VAR_9->rq.head] = VAR_5->wr_id;

  FUNC_8();


  FUNC_5(VAR_9);


  FUNC_4(&VAR_9->rq);
  VAR_5 = VAR_5->next;
 }
 FUNC_7(&VAR_9->q_lock, VAR_8);
 return VAR_7;
}
