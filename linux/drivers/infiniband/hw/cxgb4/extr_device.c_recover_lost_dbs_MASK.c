
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int pdev; } ;
struct uld_ctx {TYPE_2__ lldi; } ;
struct qp_list {int idx; struct c4iw_qp** qps; } ;
struct TYPE_13__ {scalar_t__ wq_pidx_inc; int qid; } ;
struct TYPE_11__ {scalar_t__ wq_pidx_inc; int qid; } ;
struct TYPE_17__ {TYPE_3__ rq; TYPE_1__ sq; } ;
struct c4iw_qp {TYPE_6__* rhp; int lock; TYPE_7__ wq; } ;
struct TYPE_14__ {int * ports; } ;
struct TYPE_15__ {TYPE_4__ lldi; } ;
struct TYPE_16__ {TYPE_5__ rdev; int qps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct uld_ctx *VAR_1, struct qp_list *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->idx; VAR_3++) {
  struct c4iw_qp *VAR_5 = VAR_2->qps[VAR_3];

  FUNC_13(&VAR_5->rhp->qps);
  FUNC_6(&VAR_5->lock);
  VAR_4 = FUNC_1(VAR_5->rhp->rdev.lldi.ports[0],
       VAR_5->wq.sq.qid,
       FUNC_10(&VAR_5->wq),
       FUNC_11(&VAR_5->wq));
  if (VAR_4) {
   FUNC_3("%s: Fatal error - DB overflow recovery failed - error syncing SQ qid %u\n",
          FUNC_2(VAR_1->lldi.pdev), VAR_5->wq.sq.qid);
   FUNC_7(&VAR_5->lock);
   FUNC_14(&VAR_5->rhp->qps);
   return;
  }
  VAR_5->wq.sq.wq_pidx_inc = 0;

  VAR_4 = FUNC_1(VAR_5->rhp->rdev.lldi.ports[0],
       VAR_5->wq.rq.qid,
       FUNC_8(&VAR_5->wq),
       FUNC_9(&VAR_5->wq));

  if (VAR_4) {
   FUNC_3("%s: Fatal error - DB overflow recovery failed - error syncing RQ qid %u\n",
          FUNC_2(VAR_1->lldi.pdev), VAR_5->wq.rq.qid);
   FUNC_7(&VAR_5->lock);
   FUNC_14(&VAR_5->rhp->qps);
   return;
  }
  VAR_5->wq.rq.wq_pidx_inc = 0;
  FUNC_7(&VAR_5->lock);
  FUNC_14(&VAR_5->rhp->qps);


  while (FUNC_0(VAR_5->rhp->rdev.lldi.ports[0], 1) > 0) {
   FUNC_5(VAR_0);
   FUNC_4(FUNC_12(10));
  }
 }
}
