
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_1__ wr; int lpsn; } ;
struct rvt_qp {int rspwait; int r_flags; scalar_t__ s_last_psn; int s_acked; int s_lock; } ;
struct TYPE_4__ {int n_rdma_seq; } ;
struct hfi1_ibport {TYPE_2__ rvp; } ;
struct hfi1_ctxtdata {int qp_wait_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct rvt_swqe* FUNC_1 (struct rvt_qp*,struct rvt_swqe*,struct hfi1_ibport*) ;
 int FUNC_2 (struct rvt_qp*,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rvt_qp*) ;
 struct rvt_swqe* FUNC_7 (struct rvt_qp*,int ) ;
 int FUNC_8 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_9(struct rvt_qp *VAR_7, struct hfi1_ibport *VAR_8, u32 VAR_9,
    struct hfi1_ctxtdata *VAR_10)
{
 struct rvt_swqe *VAR_11;

 FUNC_5(&VAR_7->s_lock);

 FUNC_8(VAR_7);

 VAR_11 = FUNC_7(VAR_7, VAR_7->s_acked);

 while (FUNC_0(VAR_9, VAR_11->lpsn) > 0) {
  if (VAR_11->wr.opcode == VAR_2 ||
      VAR_11->wr.opcode == VAR_3 ||
      VAR_11->wr.opcode == VAR_4 ||
      VAR_11->wr.opcode == VAR_0 ||
      VAR_11->wr.opcode == VAR_1)
   break;
  VAR_11 = FUNC_1(VAR_7, VAR_11, VAR_8);
 }

 VAR_8->rvp.n_rdma_seq++;
 VAR_7->r_flags |= VAR_5;
 FUNC_2(VAR_7, VAR_7->s_last_psn + 1, 0);
 if (FUNC_4(&VAR_7->rspwait)) {
  VAR_7->r_flags |= VAR_6;
  FUNC_6(VAR_7);
  FUNC_3(&VAR_7->rspwait, &VAR_10->qp_wait_list);
 }
}
