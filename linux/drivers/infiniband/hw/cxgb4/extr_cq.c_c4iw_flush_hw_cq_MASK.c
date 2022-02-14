
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct t4_cqe {int header; } ;
struct t4_swsqe {int complete; struct t4_cqe cqe; } ;
struct TYPE_11__ {struct t4_swsqe* sw_sq; TYPE_1__* oldest_read; } ;
struct TYPE_13__ {int flushed; TYPE_2__ sq; } ;
struct c4iw_qp {int lock; TYPE_6__ wq; } ;
struct TYPE_12__ {size_t sw_pidx; struct t4_cqe* sw_queue; int cqid; } ;
struct c4iw_cq {TYPE_3__ cq; int rhp; } ;
struct TYPE_10__ {int signaled; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct t4_cqe*) ;
 size_t FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (struct t4_cqe*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (struct t4_cqe*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,struct t4_cqe*,struct t4_cqe*) ;
 int FUNC_10 (TYPE_6__*,TYPE_3__*) ;
 struct c4iw_qp* FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,struct t4_cqe**) ;
 int FUNC_17 (TYPE_3__*) ;

void FUNC_18(struct c4iw_cq *VAR_2, struct c4iw_qp *VAR_3)
{
 struct t4_cqe *VAR_4, *VAR_5, VAR_6;
 struct c4iw_qp *VAR_7;
 struct t4_swsqe *VAR_8;
 int VAR_9;

 FUNC_12("cqid 0x%x\n", VAR_2->cq.cqid);
 VAR_9 = FUNC_16(&VAR_2->cq, &VAR_4);






 while (!VAR_9) {
  VAR_7 = FUNC_11(VAR_2->rhp, FUNC_1(VAR_4));




  if (VAR_7 == ((void*)0))
   goto next_cqe;

  if (VAR_3 != VAR_7) {
   FUNC_13(&VAR_7->lock);

   if (VAR_7->wq.flushed == 1)
    goto next_cqe;
  }

  if (FUNC_0(VAR_4) == VAR_1)
   goto next_cqe;

  if (FUNC_0(VAR_4) == VAR_0) {





   if (FUNC_3(VAR_4) == 1)
    goto next_cqe;



   if (FUNC_5(VAR_4) == 1)
    goto next_cqe;




   if (!VAR_7->wq.sq.oldest_read->signaled) {
    FUNC_7(&VAR_7->wq);
    goto next_cqe;
   }





   FUNC_9(&VAR_7->wq, VAR_4, &VAR_6);
   VAR_4 = &VAR_6;
   FUNC_7(&VAR_7->wq);
  }




  if (FUNC_6(VAR_4)) {
   VAR_8 = &VAR_7->wq.sq.sw_sq[FUNC_4(VAR_4)];
   VAR_8->cqe = *VAR_4;
   VAR_8->complete = 1;
   FUNC_10(&VAR_7->wq, &VAR_2->cq);
  } else {
   VAR_5 = &VAR_2->cq.sw_queue[VAR_2->cq.sw_pidx];
   *VAR_5 = *VAR_4;
   VAR_5->header |= FUNC_8(FUNC_2(1));
   FUNC_17(&VAR_2->cq);
  }
next_cqe:
  FUNC_15(&VAR_2->cq);
  VAR_9 = FUNC_16(&VAR_2->cq, &VAR_4);
  if (VAR_7 && VAR_3 != VAR_7)
   FUNC_14(&VAR_7->lock);
 }
}
