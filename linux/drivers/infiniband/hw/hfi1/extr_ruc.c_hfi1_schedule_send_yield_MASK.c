
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_qp {int s_flags; int s_lock; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_flags; } ;
struct hfi1_pkt_state {int pkts_sent; scalar_t__ timeout_int; scalar_t__ timeout; TYPE_2__* ppd; int flags; int cpu; int in_thread; } ;
struct TYPE_4__ {TYPE_1__* dd; int hfi1_wq; } ;
struct TYPE_3__ {int * send_schedule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (struct rvt_qp*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct rvt_qp*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

bool FUNC_10(struct rvt_qp *VAR_3, struct hfi1_pkt_state *VAR_4,
         bool VAR_5)
{
 VAR_4->pkts_sent = 1;

 if (FUNC_8(FUNC_6(VAR_2, VAR_4->timeout))) {
  if (!VAR_4->in_thread ||
      FUNC_9(VAR_4->cpu, VAR_4->ppd->hfi1_wq)) {
   FUNC_3(&VAR_3->s_lock, VAR_4->flags);
   if (!VAR_5) {
    VAR_3->s_flags &= ~VAR_1;
    FUNC_1(VAR_3);
   } else {
    struct hfi1_qp_priv *VAR_6 = VAR_3->priv;

    if (VAR_6->s_flags &
        VAR_0) {
     VAR_3->s_flags &= ~VAR_1;
     VAR_6->s_flags &=
      ~(VAR_0 |
        VAR_1);
    } else {
     VAR_6->s_flags &= ~VAR_1;
    }
    FUNC_2(VAR_3);
   }

   FUNC_4(&VAR_3->s_lock, VAR_4->flags);
   FUNC_5(*VAR_4->ppd->dd->send_schedule);
   FUNC_7(VAR_3, 1);
   return 1;
  }

  FUNC_0();
  FUNC_5(*VAR_4->ppd->dd->send_schedule);
  VAR_4->timeout = VAR_2 + VAR_4->timeout_int;
 }

 FUNC_7(VAR_3, 0);
 return 0;
}
