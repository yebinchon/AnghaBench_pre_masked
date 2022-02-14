
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int qp_type; int device; } ;
struct rvt_qp {int timeout_jiffies; int s_flags; int s_lock; int remote_ah_attr; TYPE_1__ ibqp; int port_num; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_flags; int s_iowait; TYPE_2__* s_sde; } ;
struct hfi1_pkt_state {int in_thread; int timeout_int; int pkts_sent; int flags; scalar_t__ s_txreq; int wait; TYPE_4__* ppd; int cpu; scalar_t__ timeout; int ibp; int dev; } ;
struct TYPE_8__ {int lmc; int lid; TYPE_3__* dd; } ;
struct TYPE_7__ {int node; } ;
struct TYPE_6__ {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct rvt_qp*,struct hfi1_pkt_state*) ;
 int FUNC_4 (struct rvt_qp*,struct hfi1_pkt_state*) ;
 int FUNC_5 (struct rvt_qp*,struct hfi1_pkt_state*) ;
 scalar_t__ FUNC_6 (struct rvt_qp*,struct hfi1_pkt_state*,int) ;
 int FUNC_7 (struct rvt_qp*) ;
 scalar_t__ FUNC_8 (struct rvt_qp*,struct hfi1_pkt_state*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct rvt_qp*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct rvt_qp*,int) ;

void FUNC_20(struct rvt_qp *VAR_7, bool VAR_8)
{
 struct hfi1_pkt_state VAR_9;
 struct hfi1_qp_priv *VAR_10 = VAR_7->priv;
 int (*VAR_11)(struct rvt_qp *VAR_12, struct hfi1_pkt_state *VAR_13);

 VAR_9.dev = FUNC_17(VAR_7->ibqp.device);
 VAR_9.ibp = FUNC_18(VAR_7->ibqp.device, VAR_7->port_num);
 VAR_9.ppd = FUNC_12(VAR_9.ibp);
 VAR_9.in_thread = VAR_8;
 VAR_9.wait = FUNC_9(&VAR_10->s_iowait);

 FUNC_19(VAR_7, VAR_8);

 switch (VAR_7->ibqp.qp_type) {
 case 129:
  if (!VAR_6 && ((FUNC_13(&VAR_7->remote_ah_attr) &
       ~((1 << VAR_9.ppd->lmc) - 1)) ==
      VAR_9.ppd->lid)) {
   FUNC_14(VAR_7);
   return;
  }
  VAR_11 = FUNC_3;
  VAR_9.timeout_int = VAR_7->timeout_jiffies;
  break;
 case 128:
  if (!VAR_6 && ((FUNC_13(&VAR_7->remote_ah_attr) &
       ~((1 << VAR_9.ppd->lmc) - 1)) ==
      VAR_9.ppd->lid)) {
   FUNC_14(VAR_7);
   return;
  }
  VAR_11 = FUNC_4;
  VAR_9.timeout_int = VAR_4;
  break;
 default:
  VAR_11 = FUNC_5;
  VAR_9.timeout_int = VAR_4;
 }

 FUNC_15(&VAR_7->s_lock, VAR_9.flags);


 if (!FUNC_7(VAR_7)) {
  if (VAR_7->s_flags & VAR_0)
   FUNC_10(&VAR_10->s_iowait, VAR_2);
  FUNC_16(&VAR_7->s_lock, VAR_9.flags);
  return;
 }

 VAR_7->s_flags |= VAR_3;

 VAR_9.timeout_int = VAR_9.timeout_int / 8;
 VAR_9.timeout = VAR_5 + VAR_9.timeout_int;
 VAR_9.cpu = VAR_10->s_sde ? VAR_10->s_sde->cpu :
   FUNC_0(FUNC_1(VAR_9.ppd->dd->node));
 VAR_9.pkts_sent = 0;


 VAR_9.s_txreq = FUNC_2(VAR_9.wait);
 do {

  if (VAR_9.s_txreq) {
   if (VAR_10->s_flags & VAR_1)
    VAR_7->s_flags |= VAR_3;
   FUNC_16(&VAR_7->s_lock, VAR_9.flags);




   if (FUNC_8(VAR_7, &VAR_9))
    return;


   if (FUNC_6(VAR_7, &VAR_9, 0))
    return;

   FUNC_15(&VAR_7->s_lock, VAR_9.flags);
  }
 } while (VAR_11(VAR_7, &VAR_9));
 FUNC_11(VAR_9.pkts_sent, &VAR_10->s_iowait);
 FUNC_16(&VAR_7->s_lock, VAR_9.flags);
}
