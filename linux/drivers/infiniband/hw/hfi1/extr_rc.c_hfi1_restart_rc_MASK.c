
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tid_rdma_request {int dummy; } ;
struct TYPE_7__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_3__ wr; } ;
struct TYPE_6__ {int device; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_retry; scalar_t__ s_mig_state; scalar_t__ s_retry_cnt; scalar_t__ s_last; int s_flags; int s_psn; int port_num; TYPE_2__ ibqp; int s_lock; int r_lock; struct hfi1_qp_priv* priv; } ;
struct TYPE_5__ {int curr; } ;
struct hfi1_qp_priv {int rcd; TYPE_1__ opfn; } ;
struct TYPE_8__ {scalar_t__ n_rc_resends; } ;
struct hfi1_ibport {TYPE_4__ rvp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct rvt_swqe* FUNC_1 (struct rvt_qp*,struct rvt_swqe*,struct hfi1_ibport*) ;
 int FUNC_2 (int ,struct rvt_qp*) ;
 int FUNC_3 (struct tid_rdma_request*) ;
 int FUNC_4 (struct rvt_qp*) ;
 int FUNC_5 (struct rvt_qp*,struct rvt_swqe*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rvt_qp*,int ) ;
 int FUNC_8 (struct rvt_qp*,int ) ;
 int FUNC_9 (struct rvt_qp*,int ) ;
 struct rvt_swqe* FUNC_10 (struct rvt_qp*,scalar_t__) ;
 struct hfi1_ibport* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct rvt_qp*) ;
 int FUNC_13 (struct rvt_qp*,int ) ;
 struct tid_rdma_request* FUNC_14 (struct rvt_swqe*) ;

void FUNC_15(struct rvt_qp *VAR_13, u32 VAR_14, int VAR_15)
{
 struct hfi1_qp_priv *VAR_16 = VAR_13->priv;
 struct rvt_swqe *VAR_17 = FUNC_10(VAR_13, VAR_13->s_acked);
 struct hfi1_ibport *VAR_18;

 FUNC_6(&VAR_13->r_lock);
 FUNC_6(&VAR_13->s_lock);
 FUNC_12(VAR_13);
 if (VAR_13->s_retry == 0) {
  if (VAR_13->s_mig_state == VAR_1) {
   FUNC_4(VAR_13);
   VAR_13->s_retry = VAR_13->s_retry_cnt;
  } else if (VAR_13->s_last == VAR_13->s_acked) {




   if (VAR_17->wr.opcode == VAR_4) {
    struct hfi1_ibport *VAR_19 =
     FUNC_11(VAR_13->ibqp.device, VAR_13->port_num);





    FUNC_7(VAR_13, VAR_16->opfn.curr);
    VAR_17 = FUNC_1(VAR_13, VAR_17, VAR_19);
    VAR_13->s_flags &= ~VAR_8;
   } else {
    FUNC_13(VAR_13, 0);
    if (VAR_17->wr.opcode == VAR_6) {
     struct tid_rdma_request *VAR_20;

     VAR_20 = FUNC_14(VAR_17);
     FUNC_3(VAR_20);
     FUNC_2(VAR_16->rcd, VAR_13);
    }

    FUNC_5(VAR_13, VAR_17,
        VAR_2);
    FUNC_9(VAR_13, VAR_3);
   }
   return;
  } else {
   return;
  }
 } else {
  VAR_13->s_retry--;
 }

 VAR_18 = FUNC_11(VAR_13->ibqp.device, VAR_13->port_num);
 if (VAR_17->wr.opcode == VAR_5 ||
     VAR_17->wr.opcode == VAR_6)
  VAR_18->rvp.n_rc_resends++;
 else
  VAR_18->rvp.n_rc_resends += FUNC_0(VAR_13->s_psn, VAR_14);

 VAR_13->s_flags &= ~(VAR_9 | VAR_11 |
    VAR_12 | VAR_10 |
    VAR_8 | VAR_0);
 if (VAR_15)
  VAR_13->s_flags |= VAR_7;
 FUNC_8(VAR_13, VAR_14);
}
