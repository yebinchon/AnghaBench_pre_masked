
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvrdma_qp {int qp_handle; } ;
struct pvrdma_cqe {int qp; } ;
struct TYPE_5__ {int cqe; } ;
struct pvrdma_cq {TYPE_2__ ibcq; TYPE_1__* ring_state; int is_kernel; } ;
struct TYPE_6__ {int cons_head; int prod_tail; } ;
struct TYPE_4__ {TYPE_3__ rx; } ;


 struct pvrdma_cqe* FUNC_0 (struct pvrdma_cq*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int,unsigned int*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct pvrdma_qp *VAR_0, struct pvrdma_cq *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 if (!VAR_1->is_kernel)
  return;


 VAR_3 = FUNC_2(&VAR_1->ring_state->rx,
         VAR_1->ibcq.cqe, &VAR_2);
 if (FUNC_4(VAR_3 > 0)) {
  int VAR_4;
  int VAR_5;
  int VAR_6 = FUNC_1(&VAR_1->ring_state->rx.prod_tail,
          VAR_1->ibcq.cqe);
  struct pvrdma_cqe *VAR_7;
  struct pvrdma_cqe *VAR_8;

  VAR_4 = (VAR_6 > VAR_2) ? (VAR_6 - VAR_2) :
   (VAR_1->ibcq.cqe - VAR_2 + VAR_6);
  VAR_5 = --VAR_6;
  while (VAR_4-- > 0) {
   if (VAR_5 < 0)
    VAR_5 = VAR_1->ibcq.cqe - 1;
   if (VAR_6 < 0)
    VAR_6 = VAR_1->ibcq.cqe - 1;
   VAR_8 = FUNC_0(VAR_1, VAR_5);
   if ((VAR_8->qp & 0xFFFF) != VAR_0->qp_handle) {
    if (VAR_5 != VAR_6) {
     VAR_7 = FUNC_0(VAR_1, VAR_6);
     *VAR_7 = *VAR_8;
    }
    VAR_6--;
   } else {
    FUNC_3(
     &VAR_1->ring_state->rx.cons_head,
     VAR_1->ibcq.cqe);
   }
   VAR_5--;
  }
 }
}
