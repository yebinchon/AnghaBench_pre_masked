
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned int max_burst; int my_vtag; scalar_t__ seen_a_sack_this_pkt; } ;
struct sctp_tcb {int rport; TYPE_1__* sctp_ep; TYPE_2__ asoc; } ;
struct sctp_pktdrop_chunk {int current_onq; int bottle_bw; } ;
struct sctp_nets {int cwnd; scalar_t__ flight_size; int rtt; int prev_cwnd; int mtu; int ssthresh; scalar_t__ partial_bytes_acked; } ;
struct TYPE_3__ {int sctp_lport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int ,int,struct sctp_nets*,int,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,struct sctp_nets*) ;
 int FUNC_4 (struct sctp_tcb*,struct sctp_nets*,scalar_t__,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_6,
    struct sctp_nets *VAR_7, struct sctp_pktdrop_chunk *VAR_8,
    uint32_t *VAR_9, uint32_t *VAR_10)
{
 uint32_t VAR_11;
 unsigned int VAR_12;
 int VAR_13 = VAR_7->cwnd;


 *VAR_9 = FUNC_2(VAR_8->bottle_bw);

 *VAR_10 = FUNC_2(VAR_8->current_onq);




 if (*VAR_10 < VAR_7->flight_size) {
  *VAR_10 = VAR_7->flight_size;
 }

 VAR_11 = (uint32_t)(((uint64_t)(*VAR_9) * VAR_7->rtt) / (uint64_t)1000000);
 if (VAR_11 > *VAR_9) {
  VAR_11 = *VAR_9;
 }
 if (*VAR_10 > VAR_11) {




  int VAR_14, VAR_15, VAR_16;

  VAR_7->partial_bytes_acked = 0;

  VAR_12 = *VAR_10 - VAR_11;
  if (VAR_6->asoc.seen_a_sack_this_pkt) {




   VAR_7->cwnd = VAR_7->prev_cwnd;
  }

  VAR_14 = VAR_7->flight_size / VAR_7->mtu;
  VAR_15 = *VAR_10 / VAR_7->mtu;
  VAR_16 = (VAR_12 * VAR_14) / VAR_15;


  if (VAR_7->cwnd > VAR_7->flight_size) {





   int VAR_17;

   VAR_17 = VAR_7->cwnd - VAR_7->flight_size;
   if (VAR_17 > VAR_16)
    VAR_16 = 0;
   else
    VAR_16 -= VAR_17;
  }





  VAR_7->cwnd -= VAR_16;


  if (VAR_7->cwnd <= VAR_7->mtu) {
   VAR_7->cwnd = VAR_7->mtu;
  }

  VAR_7->ssthresh = VAR_7->cwnd - 1;
 } else {




  VAR_12 = (VAR_11 - *VAR_10) >> 2;
  if ((VAR_6->asoc.max_burst > 0) &&
      (VAR_6->asoc.max_burst * VAR_7->mtu < VAR_12)) {
   VAR_12 = VAR_6->asoc.max_burst * VAR_7->mtu;
  }
  VAR_7->cwnd += VAR_12;
 }
 if (VAR_7->cwnd > VAR_11) {

  VAR_7->cwnd = VAR_11;
 }
 if (VAR_7->cwnd < VAR_7->mtu) {

  VAR_7->cwnd = VAR_7->mtu;
 }
 FUNC_3(&VAR_6->asoc, VAR_7);
 if (VAR_7->cwnd - VAR_13 != 0) {

  FUNC_1(VAR_4, VAR_2, VAR_7, VAR_3,
      VAR_6->asoc.my_vtag,
      ((VAR_6->sctp_ep->sctp_lport << 16) | (VAR_6->rport)),
      VAR_7,
      VAR_13, VAR_7->cwnd);
  if (FUNC_0(VAR_5) & VAR_1) {
   FUNC_4(VAR_6, VAR_7, (VAR_7->cwnd - VAR_13),
       VAR_0);
  }
 }
}
