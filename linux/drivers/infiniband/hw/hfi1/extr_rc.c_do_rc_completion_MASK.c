
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sdma_engine {int dummy; } ;
struct TYPE_6__ {size_t opcode; } ;
struct rvt_swqe {int psn; int lpsn; TYPE_3__ wr; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ state; scalar_t__ s_draining; int s_psn; int s_state; int s_retry_cnt; int s_retry; int remote_ah_attr; int s_last; int s_sending_hpsn; int s_sending_psn; int s_lock; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_flags; } ;
struct hfi1_pportdata {TYPE_2__* dd; } ;
struct TYPE_4__ {int * rc_delayed_comp; } ;
struct hfi1_ibport {size_t* sl_to_sc; TYPE_1__ rvp; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rvt_qp*) ;
 int * VAR_6 ;
 int FUNC_3 (int *) ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 struct sdma_engine* FUNC_5 (struct rvt_qp*,size_t) ;
 size_t FUNC_6 (int *) ;
 struct rvt_swqe* FUNC_7 (struct rvt_qp*,scalar_t__) ;
 int FUNC_8 (struct rvt_qp*,struct rvt_swqe*,int ,int ) ;
 int FUNC_9 (struct sdma_engine*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct rvt_qp*,struct rvt_swqe*,int ) ;
 int FUNC_12 (struct rvt_qp*,int ) ;
 int FUNC_13 (struct rvt_qp*,struct rvt_swqe*) ;
 int FUNC_14 (struct rvt_qp*,int ) ;

struct rvt_swqe *FUNC_15(struct rvt_qp *VAR_7,
      struct rvt_swqe *VAR_8,
      struct hfi1_ibport *VAR_9)
{
 struct hfi1_qp_priv *VAR_10 = VAR_7->priv;

 FUNC_3(&VAR_7->s_lock);





 FUNC_12(VAR_7, VAR_8->lpsn);
 if (FUNC_1(VAR_8->lpsn, VAR_7->s_sending_psn) < 0 ||
     FUNC_1(VAR_7->s_sending_psn, VAR_7->s_sending_hpsn) > 0) {
  FUNC_13(VAR_7, VAR_8);
  FUNC_11(VAR_7, VAR_8, VAR_7->s_last);
  FUNC_8(VAR_7,
         VAR_8,
         VAR_6[VAR_8->wr.opcode],
         VAR_3);
 } else {
  struct hfi1_pportdata *VAR_11 = FUNC_4(VAR_9);

  FUNC_10(*VAR_9->rvp.rc_delayed_comp);




  if (VAR_11->dd->flags & VAR_0) {
   struct sdma_engine *VAR_12;
   u8 VAR_13 = FUNC_6(&VAR_7->remote_ah_attr);
   u8 VAR_14;


   VAR_14 = VAR_9->sl_to_sc[VAR_13];
   VAR_12 = FUNC_5(VAR_7, VAR_14);
   FUNC_9(VAR_12);
  }
 }

 VAR_7->s_retry = VAR_7->s_retry_cnt;
 if (VAR_8->wr.opcode != VAR_4)
  FUNC_14(VAR_7, VAR_8->lpsn);






 if (VAR_7->s_acked == VAR_7->s_cur) {
  if (++VAR_7->s_cur >= VAR_7->s_size)
   VAR_7->s_cur = 0;
  VAR_7->s_acked = VAR_7->s_cur;
  VAR_8 = FUNC_7(VAR_7, VAR_7->s_cur);
  if (VAR_7->s_acked != VAR_7->s_tail) {
   VAR_7->s_state = FUNC_0(VAR_5);
   VAR_7->s_psn = VAR_8->psn;
  }
 } else {
  if (++VAR_7->s_acked >= VAR_7->s_size)
   VAR_7->s_acked = 0;
  if (VAR_7->state == VAR_2 && VAR_7->s_acked == VAR_7->s_cur)
   VAR_7->s_draining = 0;
  VAR_8 = FUNC_7(VAR_7, VAR_7->s_acked);
 }
 if (VAR_10->s_flags & VAR_1) {
  VAR_10->s_flags &= ~VAR_1;
  FUNC_2(VAR_7);
 }
 return VAR_8;
}
