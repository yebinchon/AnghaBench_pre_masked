
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_recv_wr {TYPE_1__* wr_cqe; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {TYPE_2__* recv_cq; } ;
struct TYPE_3__ {int done; } ;
struct ib_drain_cqe {int done; TYPE_1__ cqe; } ;
struct TYPE_4__ {scalar_t__ poll_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int ) ;
 int FUNC_2 (struct ib_qp*,struct ib_recv_wr*,struct ib_recv_wr**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ib_qp *VAR_4)
{
 struct ib_qp_attr VAR_5 = { .qp_state = VAR_1 };
 struct ib_drain_cqe VAR_6;
 struct ib_recv_wr VAR_7 = {}, *VAR_8;
 int VAR_9;

 if (VAR_4->recv_cq->poll_ctx == VAR_0) {
  FUNC_0(VAR_4->recv_cq->poll_ctx == VAR_0,
     "IB_POLL_DIRECT poll_ctx not supported for drain\n");
  return;
 }

 VAR_7.wr_cqe = &VAR_6.cqe;
 VAR_6.cqe.done = VAR_3;
 FUNC_3(&VAR_6.done);

 VAR_9 = FUNC_1(VAR_4, &VAR_5, VAR_2);
 if (VAR_9) {
  FUNC_0(VAR_9, "failed to drain recv queue: %d\n", VAR_9);
  return;
 }

 VAR_9 = FUNC_2(VAR_4, &VAR_7, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_9, "failed to drain recv queue: %d\n", VAR_9);
  return;
 }

 FUNC_4(&VAR_6.done);
}
