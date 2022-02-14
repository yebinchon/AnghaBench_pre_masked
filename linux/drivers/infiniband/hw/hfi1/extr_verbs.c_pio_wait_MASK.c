
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct send_context {int waitlock; int piowait; struct hfi1_devdata* dd; } ;
struct rvt_qp {size_t state; int s_flags; int s_lock; struct hfi1_qp_priv* priv; } ;
struct TYPE_8__ {int * lock; int list; } ;
struct hfi1_qp_priv {TYPE_3__ s_iowait; } ;
struct hfi1_pkt_state {TYPE_5__* wait; int pkts_sent; TYPE_2__* s_txreq; } ;
struct hfi1_ibdev {int n_piowait; int n_piodrain; } ;
struct hfi1_devdata {struct hfi1_ibdev verbs_dev; } ;
struct TYPE_9__ {int tx_head; } ;
struct TYPE_6__ {int list; } ;
struct TYPE_7__ {TYPE_1__ txreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvt_qp*,TYPE_5__*) ;
 int FUNC_1 (struct send_context*,int) ;
 int* VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rvt_qp*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct rvt_qp*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct rvt_qp *VAR_5,
      struct send_context *VAR_6,
      struct hfi1_pkt_state *VAR_7,
      u32 VAR_8)
{
 struct hfi1_qp_priv *VAR_9 = VAR_5->priv;
 struct hfi1_devdata *VAR_10 = VAR_6->dd;
 unsigned long VAR_11;
 int VAR_12 = 0;







 FUNC_7(&VAR_5->s_lock, VAR_11);
 if (VAR_4[VAR_5->state] & VAR_2) {
  FUNC_10(&VAR_6->waitlock);
  FUNC_4(&VAR_7->s_txreq->txreq.list,
         &VAR_7->wait->tx_head);
  if (FUNC_5(&VAR_9->s_iowait.list)) {
   struct hfi1_ibdev *VAR_13 = &VAR_10->verbs_dev;
   int VAR_14;

   VAR_13->n_piowait += !!(VAR_8 & VAR_3);
   VAR_13->n_piodrain += !!(VAR_8 & VAR_1);
   VAR_5->s_flags |= VAR_8;
   VAR_14 = FUNC_5(&VAR_6->piowait);
   FUNC_2(&VAR_9->s_iowait);
   FUNC_3(VAR_7->pkts_sent, &VAR_9->s_iowait,
         &VAR_6->piowait);
   VAR_9->s_iowait.lock = &VAR_6->waitlock;
   FUNC_9(VAR_5, VAR_3);
   FUNC_6(VAR_5);

   if (VAR_14)
    FUNC_1(VAR_6, 1);
  }
  FUNC_11(&VAR_6->waitlock);
  FUNC_0(VAR_5, VAR_7->wait);
  VAR_12 = -VAR_0;
 }
 FUNC_8(&VAR_5->s_lock, VAR_11);
 return VAR_12;
}
