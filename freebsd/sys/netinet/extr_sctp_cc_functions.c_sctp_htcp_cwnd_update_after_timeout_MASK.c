
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_tcb {int dummy; } ;
struct TYPE_2__ {int htcp_ca; } ;
struct sctp_nets {int cwnd; int mtu; scalar_t__ partial_bytes_acked; int ssthresh; TYPE_1__ cc_mod; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sctp_nets*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_3,
    struct sctp_nets *VAR_4)
{
 int VAR_5 = VAR_4->cwnd;


 FUNC_2(&VAR_4->cc_mod.htcp_ca);
 VAR_4->ssthresh = FUNC_1(VAR_4);
 VAR_4->cwnd = VAR_4->mtu;
 VAR_4->partial_bytes_acked = 0;
 if (FUNC_0(VAR_2) & VAR_1) {
  FUNC_3(VAR_3, VAR_4, VAR_4->cwnd - VAR_5, VAR_0);
 }
}
