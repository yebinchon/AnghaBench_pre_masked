
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {TYPE_1__ wr; int psn; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_psn; scalar_t__ s_sending_psn; int s_flags; int s_sending_hpsn; void* s_state; scalar_t__ s_num_rd_atomic; int s_lock; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_flags; scalar_t__ pending_tid_w_resp; scalar_t__ pending_tid_r_segs; } ;


 int VAR_0 ;
 int VAR_1 ;







 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 struct rvt_swqe* FUNC_4 (struct rvt_qp*,scalar_t__) ;
 int FUNC_5 (struct rvt_qp*) ;
 int FUNC_6 (struct rvt_qp*,scalar_t__,struct rvt_swqe*) ;

__attribute__((used)) static void FUNC_7(struct rvt_qp *VAR_9, u32 VAR_10)
{
 u32 VAR_11 = VAR_9->s_acked;
 struct rvt_swqe *VAR_12 = FUNC_4(VAR_9, VAR_11);
 u32 VAR_13;
 struct hfi1_qp_priv *VAR_14 = VAR_9->priv;

 FUNC_3(&VAR_9->s_lock);
 VAR_9->s_cur = VAR_11;
 VAR_14->pending_tid_r_segs = 0;
 VAR_14->pending_tid_w_resp = 0;
 VAR_9->s_num_rd_atomic = 0;





 if (FUNC_2(VAR_10, VAR_12->psn) <= 0) {
  VAR_9->s_state = FUNC_0(VAR_7);
  goto done;
 }
 FUNC_6(VAR_9, VAR_10, VAR_12);


 for (;;) {
  int VAR_15;

  if (++VAR_11 == VAR_9->s_size)
   VAR_11 = 0;
  if (VAR_11 == VAR_9->s_tail)
   break;
  VAR_12 = FUNC_4(VAR_9, VAR_11);
  VAR_15 = FUNC_2(VAR_10, VAR_12->psn);
  if (VAR_15 < 0) {

   VAR_12 = FUNC_4(VAR_9, VAR_9->s_cur);
   break;
  }
  VAR_9->s_cur = VAR_11;




  if (VAR_15 == 0) {
   VAR_9->s_state = FUNC_0(VAR_7);
   goto done;
  }

  FUNC_6(VAR_9, VAR_10, VAR_12);
 }
 VAR_13 = VAR_12->wr.opcode;






 switch (VAR_13) {
 case 131:
 case 130:
  VAR_9->s_state = FUNC_0(VAR_2);
  break;

 case 133:
 case 132:
  VAR_9->s_state = FUNC_0(VAR_3);
  break;

 case 128:
  VAR_9->s_state = FUNC_1(VAR_8);
  break;

 case 134:
  VAR_9->s_state = FUNC_0(VAR_4);
  break;

 case 129:
  VAR_9->s_state = FUNC_1(VAR_5);
  break;

 default:




  VAR_9->s_state = FUNC_0(VAR_7);
 }
done:
 VAR_14->s_flags &= ~VAR_1;
 VAR_9->s_psn = VAR_10;





 if ((FUNC_2(VAR_9->s_psn, VAR_9->s_sending_hpsn) <= 0) &&
     (FUNC_2(VAR_9->s_sending_psn, VAR_9->s_sending_hpsn) <= 0))
  VAR_9->s_flags |= VAR_6;
 VAR_9->s_flags &= ~VAR_0;
 FUNC_5(VAR_9);
}
