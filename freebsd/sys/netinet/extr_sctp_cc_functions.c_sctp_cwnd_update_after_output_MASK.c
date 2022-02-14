
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int my_vtag; } ;
struct sctp_tcb {int rport; TYPE_1__* sctp_ep; TYPE_2__ asoc; } ;
struct sctp_nets {int cwnd; int ssthresh; int flight_size; int mtu; } ;
struct TYPE_3__ {int sctp_lport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int ,int,struct sctp_nets*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,struct sctp_nets*) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_6,
    struct sctp_nets *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_7->cwnd;

 if (VAR_7->ssthresh < VAR_7->cwnd)
  VAR_7->ssthresh = VAR_7->cwnd;
 if (VAR_8) {
  VAR_7->cwnd = (VAR_7->flight_size + (VAR_8 * VAR_7->mtu));
  FUNC_2(&VAR_6->asoc, VAR_7);
  FUNC_1(VAR_4, VAR_3, VAR_7, VAR_2,
      VAR_6->asoc.my_vtag,
      ((VAR_6->sctp_ep->sctp_lport << 16) | (VAR_6->rport)),
      VAR_7,
      VAR_9, VAR_7->cwnd);
  if (FUNC_0(VAR_5) & VAR_1) {
   FUNC_3(VAR_6, VAR_7, (VAR_7->cwnd - VAR_9), VAR_0);
  }
 }
}
