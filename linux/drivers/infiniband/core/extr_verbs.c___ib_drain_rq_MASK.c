
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_recv_wr {TYPE_1__* wr_cqe; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {struct ib_cq* recv_cq; } ;
struct TYPE_2__ {int done; } ;
struct ib_drain_cqe {int done; TYPE_1__ cqe; } ;
struct ib_cq {scalar_t__ poll_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int ) ;
 int FUNC_2 (struct ib_qp*,struct ib_recv_wr*,int *) ;
 int FUNC_3 (struct ib_cq*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(struct ib_qp *VAR_5)
{
 struct ib_cq *VAR_6 = VAR_5->recv_cq;
 struct ib_qp_attr VAR_7 = { .qp_state = VAR_2 };
 struct ib_drain_cqe VAR_8;
 struct ib_recv_wr VAR_9 = {};
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, &VAR_7, VAR_3);
 if (VAR_10) {
  FUNC_0(VAR_10, "failed to drain recv queue: %d\n", VAR_10);
  return;
 }

 VAR_9.wr_cqe = &VAR_8.cqe;
 VAR_8.cqe.done = VAR_4;
 FUNC_4(&VAR_8.done);

 VAR_10 = FUNC_2(VAR_5, &VAR_9, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_10, "failed to drain recv queue: %d\n", VAR_10);
  return;
 }

 if (VAR_6->poll_ctx == VAR_1)
  while (FUNC_6(&VAR_8.done, VAR_0 / 10) <= 0)
   FUNC_3(VAR_6, -1);
 else
  FUNC_5(&VAR_8.done);
}
