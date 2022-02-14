
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peers_rwnd; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int mtu; int ssthresh; int cwnd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sctp_nets*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,struct sctp_nets*) ;
 int FUNC_5 (struct sctp_tcb*,struct sctp_nets*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct sctp_tcb *VAR_5, struct sctp_nets *VAR_6)
{




 VAR_6->cwnd = FUNC_3((VAR_6->mtu * 4), FUNC_2((2 * VAR_6->mtu), VAR_3));
 VAR_6->ssthresh = VAR_5->asoc.peers_rwnd;
 FUNC_4(&VAR_5->asoc, VAR_6);
 FUNC_1(VAR_6);

 if (FUNC_0(VAR_4) & (VAR_2 | VAR_1)) {
  FUNC_5(VAR_5, VAR_6, 0, VAR_0);
 }
}
