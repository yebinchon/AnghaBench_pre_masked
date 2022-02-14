
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flushed; } ;
struct TYPE_5__ {int flushed; } ;
struct bnxt_qplib_qp {TYPE_4__ rq; int rq_flush; int srq; TYPE_1__ sq; int sq_flush; struct bnxt_qplib_cq* rcq; struct bnxt_qplib_cq* scq; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct bnxt_qplib_cq {int rqf_head; TYPE_3__ hwq; int sqf_head; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (struct bnxt_qplib_qp*) ;
 int FUNC_1 (int *,char*,struct bnxt_qplib_qp*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct bnxt_qplib_qp *VAR_0)
{
 struct bnxt_qplib_cq *VAR_1, *VAR_2;

 VAR_1 = VAR_0->scq;
 VAR_2 = VAR_0->rcq;

 if (!VAR_0->sq.flushed) {
  FUNC_1(&VAR_1->hwq.pdev->dev,
   "FP: Adding to SQ Flush list = %p\n", VAR_0);
  FUNC_0(VAR_0);
  FUNC_2(&VAR_0->sq_flush, &VAR_1->sqf_head);
  VAR_0->sq.flushed = 1;
 }
 if (!VAR_0->srq) {
  if (!VAR_0->rq.flushed) {
   FUNC_1(&VAR_2->hwq.pdev->dev,
    "FP: Adding to RQ Flush list = %p\n", VAR_0);
   FUNC_2(&VAR_0->rq_flush, &VAR_2->rqf_head);
   VAR_0->rq.flushed = 1;
  }
 }
}
