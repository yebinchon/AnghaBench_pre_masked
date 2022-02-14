
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int my_vtag; } ;
struct sctp_tcb {int rport; TYPE_4__* sctp_ep; TYPE_3__ asoc; } ;
struct TYPE_5__ {scalar_t__ use_dccc_ecn; } ;
struct TYPE_6__ {TYPE_1__ rtcc; } ;
struct sctp_nets {int cwnd; scalar_t__ lan_type; int ecn_prev_cwnd; int mtu; int ssthresh; int RTO; TYPE_2__ cc_mod; } ;
struct TYPE_8__ {int sctp_lport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct sctp_nets*,int ,int ,int,struct sctp_nets*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_8, struct sctp_nets *VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = VAR_9->cwnd;

 if ((VAR_12) && (VAR_9->lan_type == VAR_2) && (VAR_9->cc_mod.rtcc.use_dccc_ecn)) {

  if (VAR_10 == 0) {




   if (VAR_9->ecn_prev_cwnd < VAR_9->cwnd) {

    VAR_9->cwnd = VAR_9->ecn_prev_cwnd - (VAR_9->mtu * VAR_11);
   } else {

    VAR_9->cwnd /= 2;
   }

   VAR_9->ssthresh = VAR_9->cwnd - (VAR_11 * VAR_9->mtu);
   if (FUNC_0(VAR_6) & VAR_1) {
    FUNC_3(VAR_8, VAR_9, (VAR_9->cwnd - VAR_13), VAR_0);
   }
  } else {




   VAR_9->ssthresh -= (VAR_9->mtu * VAR_11);
   VAR_9->cwnd -= (VAR_9->mtu * VAR_11);
   if (FUNC_0(VAR_6) & VAR_1) {
    FUNC_3(VAR_8, VAR_9, (VAR_9->cwnd - VAR_13), VAR_0);
   }

  }
  FUNC_1(VAR_7);
 } else {
  if (VAR_10 == 0) {
   FUNC_1(VAR_7);
   VAR_9->ssthresh = VAR_9->cwnd / 2;
   if (VAR_9->ssthresh < VAR_9->mtu) {
    VAR_9->ssthresh = VAR_9->mtu;




    VAR_9->RTO <<= 1;
   }
   VAR_9->cwnd = VAR_9->ssthresh;
   FUNC_2(VAR_5, VAR_3, VAR_9, VAR_4,
       VAR_8->asoc.my_vtag,
       ((VAR_8->sctp_ep->sctp_lport << 16) | (VAR_8->rport)),
       VAR_9,
       VAR_13, VAR_9->cwnd);
   if (FUNC_0(VAR_6) & VAR_1) {
    FUNC_3(VAR_8, VAR_9, (VAR_9->cwnd - VAR_13), VAR_0);
   }
  }
 }

}
