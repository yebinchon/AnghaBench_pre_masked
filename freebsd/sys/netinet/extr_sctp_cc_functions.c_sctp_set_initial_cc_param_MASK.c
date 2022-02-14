
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sctphdr {int dummy; } ;
struct sctp_association {scalar_t__ max_burst; scalar_t__ sctp_cmt_on_off; int numnets; int my_vtag; int peers_rwnd; } ;
struct sctp_tcb {int rport; TYPE_1__* sctp_ep; struct sctp_association asoc; } ;
struct sctp_nets {int cwnd; int mtu; int ssthresh; } ;
struct TYPE_2__ {int sctp_lport; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int ,int,struct sctp_nets*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct sctp_association*,struct sctp_nets*) ;
 int VAR_9 ;
 int FUNC_5 (struct sctp_tcb*,struct sctp_nets*,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_6(struct sctp_tcb *VAR_11, struct sctp_nets *VAR_12)
{
 struct sctp_association *VAR_13;
 uint32_t VAR_14;

 VAR_13 = &VAR_11->asoc;
 VAR_14 = FUNC_0(VAR_9);
 if (VAR_14 == 0) {

  VAR_12->cwnd = FUNC_3((VAR_12->mtu * 4), FUNC_2((2 * VAR_12->mtu), VAR_5));
 } else {




  if ((VAR_13->max_burst > 0) && (VAR_14 > VAR_13->max_burst))
   VAR_14 = VAR_13->max_burst;
  VAR_12->cwnd = (VAR_12->mtu - sizeof(struct sctphdr)) * VAR_14;
 }
 if ((VAR_11->asoc.sctp_cmt_on_off == VAR_0) ||
     (VAR_11->asoc.sctp_cmt_on_off == VAR_1)) {

  VAR_12->cwnd /= VAR_13->numnets;
  if (VAR_12->cwnd < (VAR_12->mtu - sizeof(struct sctphdr))) {
   VAR_12->cwnd = VAR_12->mtu - sizeof(struct sctphdr);
  }
 }
 FUNC_4(VAR_13, VAR_12);
 VAR_12->ssthresh = VAR_13->peers_rwnd;
 FUNC_1(VAR_8, VAR_6, VAR_12, VAR_7,
     VAR_11->asoc.my_vtag, ((VAR_11->sctp_ep->sctp_lport << 16) | (VAR_11->rport)), VAR_12,
     0, VAR_12->cwnd);
 if (FUNC_0(VAR_10) &
     (VAR_4 | VAR_3)) {
  FUNC_5(VAR_11, VAR_12, 0, VAR_2);
 }
}
