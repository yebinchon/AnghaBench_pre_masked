
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_1__ wr; int lpsn; } ;
struct rvt_qp {int rspwait; int r_flags; scalar_t__ s_last_psn; int s_acked; } ;
struct TYPE_4__ {int n_rdma_seq; } ;
struct qib_ibport {TYPE_2__ rvp; } ;
struct qib_ctxtdata {int qp_wait_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rvt_swqe* FUNC_0 (struct rvt_qp*,struct rvt_swqe*,struct qib_ibport*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rvt_qp*,scalar_t__,int ) ;
 int FUNC_5 (struct rvt_qp*) ;
 struct rvt_swqe* FUNC_6 (struct rvt_qp*,int ) ;
 int FUNC_7 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_8(struct rvt_qp *VAR_5, struct qib_ibport *VAR_6, u32 VAR_7,
    struct qib_ctxtdata *VAR_8)
{
 struct rvt_swqe *VAR_9;


 FUNC_7(VAR_5);

 VAR_9 = FUNC_6(VAR_5, VAR_5->s_acked);

 while (FUNC_3(VAR_7, VAR_9->lpsn) > 0) {
  if (VAR_9->wr.opcode == VAR_2 ||
      VAR_9->wr.opcode == VAR_0 ||
      VAR_9->wr.opcode == VAR_1)
   break;
  VAR_9 = FUNC_0(VAR_5, VAR_9, VAR_6);
 }

 VAR_6->rvp.n_rdma_seq++;
 VAR_5->r_flags |= VAR_3;
 FUNC_4(VAR_5, VAR_5->s_last_psn + 1, 0);
 if (FUNC_2(&VAR_5->rspwait)) {
  VAR_5->r_flags |= VAR_4;
  FUNC_5(VAR_5);
  FUNC_1(&VAR_5->rspwait, &VAR_8->qp_wait_list);
 }
}
