
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_tcb {int asoc; } ;
struct TYPE_4__ {int alpha; int bytes_acked; } ;
struct TYPE_3__ {TYPE_2__ htcp_ca; } ;
struct sctp_nets {scalar_t__ cwnd; scalar_t__ ssthresh; scalar_t__ flight_size; int net_ack; int mtu; int partial_bytes_acked; TYPE_1__ cc_mod; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct sctp_nets*) ;
 int VAR_6 ;
 int FUNC_3 (int *,struct sctp_nets*) ;
 int FUNC_4 (struct sctp_tcb*,struct sctp_nets*,int,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_8, struct sctp_nets *VAR_9)
{





 if (VAR_9->cwnd <= VAR_9->ssthresh) {

  if (VAR_9->flight_size + VAR_9->net_ack >= VAR_9->cwnd) {
   if (VAR_9->net_ack > (VAR_9->mtu * FUNC_0(VAR_6))) {
    VAR_9->cwnd += (VAR_9->mtu * FUNC_0(VAR_6));
    if (FUNC_0(VAR_7) & VAR_5) {
     FUNC_4(VAR_8, VAR_9, VAR_9->mtu,
         VAR_2);
    }

   } else {
    VAR_9->cwnd += VAR_9->net_ack;
    if (FUNC_0(VAR_7) & VAR_5) {
     FUNC_4(VAR_8, VAR_9, VAR_9->net_ack,
         VAR_2);
    }

   }
   FUNC_3(&VAR_8->asoc, VAR_9);
  } else {
   if (FUNC_0(VAR_7) & VAR_0) {
    FUNC_4(VAR_8, VAR_9, VAR_9->net_ack,
        VAR_4);
   }
  }
 } else {
  FUNC_2(VAR_9);






  if (((VAR_9->partial_bytes_acked / VAR_9->mtu * VAR_9->cc_mod.htcp_ca.alpha) >> 7) * VAR_9->mtu >= VAR_9->cwnd) {




   VAR_9->cwnd += VAR_9->mtu;
   VAR_9->partial_bytes_acked = 0;
   FUNC_3(&VAR_8->asoc, VAR_9);
   FUNC_1(&VAR_9->cc_mod.htcp_ca);
   if (FUNC_0(VAR_7) & VAR_5) {
    FUNC_4(VAR_8, VAR_9, VAR_9->mtu,
        VAR_1);
   }
  } else {
   VAR_9->partial_bytes_acked += VAR_9->net_ack;
   if (FUNC_0(VAR_7) & VAR_0) {
    FUNC_4(VAR_8, VAR_9, VAR_9->net_ack,
        VAR_3);
   }
  }

  VAR_9->cc_mod.htcp_ca.bytes_acked = VAR_9->mtu;
 }
}
