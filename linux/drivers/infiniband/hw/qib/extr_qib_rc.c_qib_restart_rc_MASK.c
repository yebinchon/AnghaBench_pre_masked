
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_2__ wr; } ;
struct TYPE_4__ {int device; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_retry; scalar_t__ s_mig_state; scalar_t__ s_retry_cnt; scalar_t__ s_last; int s_psn; int s_flags; int port_num; TYPE_1__ ibqp; } ;
struct TYPE_6__ {scalar_t__ n_rc_resends; } ;
struct qib_ibport {TYPE_3__ rvp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (struct rvt_qp*,int) ;
 int FUNC_2 (struct rvt_qp*,int ) ;
 struct rvt_swqe* FUNC_3 (struct rvt_qp*,scalar_t__) ;
 int FUNC_4 (struct rvt_qp*,struct rvt_swqe*,int ) ;
 struct qib_ibport* FUNC_5 (int ,int ) ;

void FUNC_6(struct rvt_qp *VAR_11, u32 VAR_12, int VAR_13)
{
 struct rvt_swqe *VAR_14 = FUNC_3(VAR_11, VAR_11->s_acked);
 struct qib_ibport *VAR_15;

 if (VAR_11->s_retry == 0) {
  if (VAR_11->s_mig_state == VAR_0) {
   FUNC_0(VAR_11);
   VAR_11->s_retry = VAR_11->s_retry_cnt;
  } else if (VAR_11->s_last == VAR_11->s_acked) {
   FUNC_4(VAR_11, VAR_14, VAR_1);
   FUNC_2(VAR_11, VAR_2);
   return;
  } else
   return;
 } else
  VAR_11->s_retry--;

 VAR_15 = FUNC_5(VAR_11->ibqp.device, VAR_11->port_num);
 if (VAR_14->wr.opcode == VAR_3)
  VAR_15->rvp.n_rc_resends++;
 else
  VAR_15->rvp.n_rc_resends += (VAR_11->s_psn - VAR_12) & VAR_4;

 VAR_11->s_flags &= ~(VAR_7 | VAR_9 |
    VAR_10 | VAR_8 |
    VAR_6);
 if (VAR_13)
  VAR_11->s_flags |= VAR_5;
 FUNC_1(VAR_11, VAR_12);
}
