
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_rq {int producer_lock; } ;
struct TYPE_2__ {scalar_t__ state; int task; } ;
struct rxe_qp {int srq; TYPE_1__ resp; int valid; struct rxe_rq rq; } ;
struct ib_recv_wr {struct ib_recv_wr* next; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rxe_rq*,struct ib_recv_wr const*) ;
 scalar_t__ FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct rxe_qp* FUNC_5 (struct ib_qp*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ib_qp *VAR_3, const struct ib_recv_wr *VAR_4,
    const struct ib_recv_wr **VAR_5)
{
 int VAR_6 = 0;
 struct rxe_qp *VAR_7 = FUNC_5(VAR_3);
 struct rxe_rq *VAR_8 = &VAR_7->rq;
 unsigned long VAR_9;

 if (FUNC_6((FUNC_1(VAR_7) < VAR_1) || !VAR_7->valid)) {
  *VAR_5 = VAR_4;
  VAR_6 = -VAR_0;
  goto err1;
 }

 if (FUNC_6(VAR_7->srq)) {
  *VAR_5 = VAR_4;
  VAR_6 = -VAR_0;
  goto err1;
 }

 FUNC_3(&VAR_8->producer_lock, VAR_9);

 while (VAR_4) {
  VAR_6 = FUNC_0(VAR_8, VAR_4);
  if (FUNC_6(VAR_6)) {
   *VAR_5 = VAR_4;
   break;
  }
  VAR_4 = VAR_4->next;
 }

 FUNC_4(&VAR_8->producer_lock, VAR_9);

 if (VAR_7->resp.state == VAR_2)
  FUNC_2(&VAR_7->resp.task, 1);

err1:
 return VAR_6;
}
