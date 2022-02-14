
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int max_wqe_idx; } ;
struct ocrdma_qp {int id; TYPE_4__ rq; TYPE_3__* srq; TYPE_4__ sq; } ;
struct TYPE_6__ {int qpn; } ;
struct TYPE_5__ {int buftag_qpn; } ;
struct ocrdma_cqe {TYPE_2__ cmn; TYPE_1__ rq; } ;
struct ocrdma_cq {int getp; int max_hw_cqe; int cq_lock; struct ocrdma_cqe* va; } ;
struct TYPE_7__ {int q_lock; TYPE_4__ rq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ocrdma_cqe*) ;
 scalar_t__ FUNC_2 (struct ocrdma_qp*) ;
 scalar_t__ FUNC_3 (struct ocrdma_qp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct ocrdma_qp *VAR_2, struct ocrdma_cq *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;
 u32 VAR_7, VAR_8;
 struct ocrdma_cqe *VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;

 FUNC_7(&VAR_3->cq_lock, VAR_4);
 VAR_7 = VAR_3->getp;

 VAR_8 = VAR_7;
 do {
  if (FUNC_3(VAR_2) && (!VAR_2->srq && FUNC_2(VAR_2)))
   break;

  VAR_9 = VAR_3->va + VAR_7;




  VAR_10 = VAR_9->cmn.qpn & VAR_1;


  if (VAR_10 == 0 || VAR_10 != VAR_2->id)
   goto skip_cqe;

  if (FUNC_1(VAR_9)) {
   FUNC_5(&VAR_2->sq);
  } else {
   if (VAR_2->srq) {
    VAR_11 = (FUNC_4(VAR_9->rq.buftag_qpn) >>
     VAR_0) &
     VAR_2->srq->rq.max_wqe_idx;
    FUNC_0(VAR_11 < 1);
    FUNC_7(&VAR_2->srq->q_lock, VAR_5);
    FUNC_5(&VAR_2->srq->rq);
    FUNC_6(VAR_2->srq, VAR_11 - 1);
    FUNC_8(&VAR_2->srq->q_lock, VAR_5);

   } else {
    FUNC_5(&VAR_2->rq);
   }
  }



  VAR_6 += 1;
  VAR_9->cmn.qpn = 0;
skip_cqe:
  VAR_7 = (VAR_7 + 1) % VAR_3->max_hw_cqe;
 } while (VAR_7 != VAR_8);
 FUNC_8(&VAR_3->cq_lock, VAR_4);
}
