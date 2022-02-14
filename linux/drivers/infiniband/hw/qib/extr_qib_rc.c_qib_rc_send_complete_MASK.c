
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {size_t opcode; } ;
struct rvt_swqe {TYPE_3__ wr; scalar_t__ lpsn; } ;
struct rvt_qp {size_t state; scalar_t__ s_acked; scalar_t__ s_tail; int s_flags; scalar_t__ s_last; scalar_t__ s_psn; scalar_t__ s_sending_hpsn; scalar_t__ s_sending_psn; int s_rdma_ack_cnt; } ;
struct ib_other_headers {int * bth; } ;
struct TYPE_4__ {struct ib_other_headers oth; } ;
struct TYPE_5__ {TYPE_1__ l; struct ib_other_headers oth; } ;
struct ib_header {TYPE_2__ u; int * lrh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_10 ;
 int* VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct rvt_qp*) ;
 int FUNC_6 (struct rvt_qp*,int) ;
 int FUNC_7 (struct rvt_qp*) ;
 struct rvt_swqe* FUNC_8 (struct rvt_qp*,scalar_t__) ;
 int FUNC_9 (struct rvt_qp*,struct rvt_swqe*,int ,int ) ;

void FUNC_10(struct rvt_qp *VAR_12, struct ib_header *VAR_13)
{
 struct ib_other_headers *VAR_14;
 struct rvt_swqe *VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 if (!(VAR_11[VAR_12->state] & VAR_6))
  return;


 if ((FUNC_2(VAR_13->lrh[0]) & 3) == VAR_3)
  VAR_14 = &VAR_13->u.oth;
 else
  VAR_14 = &VAR_13->u.l.oth;

 VAR_16 = FUNC_3(VAR_14->bth[0]) >> 24;
 if (VAR_16 >= FUNC_0(VAR_4) &&
     VAR_16 <= FUNC_0(VAR_0)) {
  FUNC_1(!VAR_12->s_rdma_ack_cnt);
  VAR_12->s_rdma_ack_cnt--;
  return;
 }

 VAR_17 = FUNC_3(VAR_14->bth[2]);
 FUNC_6(VAR_12, VAR_17);





 if ((VAR_17 & VAR_1) && VAR_12->s_acked != VAR_12->s_tail &&
     !(VAR_12->s_flags & (VAR_7 | VAR_9 | VAR_8)) &&
     (VAR_11[VAR_12->state] & VAR_5))
  FUNC_7(VAR_12);

 while (VAR_12->s_last != VAR_12->s_acked) {
  VAR_15 = FUNC_8(VAR_12, VAR_12->s_last);
  if (FUNC_4(VAR_15->lpsn, VAR_12->s_sending_psn) >= 0 &&
      FUNC_4(VAR_12->s_sending_psn, VAR_12->s_sending_hpsn) <= 0)
   break;
  FUNC_9(VAR_12,
         VAR_15,
         VAR_10[VAR_15->wr.opcode],
         VAR_2);
 }




 if (VAR_12->s_flags & VAR_8 &&
     FUNC_4(VAR_12->s_sending_psn, VAR_12->s_sending_hpsn) > 0) {
  VAR_12->s_flags &= ~VAR_8;
  VAR_12->s_sending_psn = VAR_12->s_psn;
  VAR_12->s_sending_hpsn = VAR_12->s_psn - 1;
  FUNC_5(VAR_12);
 }
}
