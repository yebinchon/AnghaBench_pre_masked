
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int my_vtag; } ;
struct sctp_tcb {int rport; TYPE_2__* sctp_ep; TYPE_1__ asoc; } ;
struct sctp_nets {int cwnd; int mtu; } ;
struct TYPE_4__ {int sctp_lport; } ;


 int FUNC_0 (int ,char*,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int ,int,struct sctp_nets*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct sctp_tcb *VAR_4, struct sctp_nets *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_5->cwnd;
 VAR_5->cwnd = VAR_5->mtu;
 FUNC_1(VAR_3, VAR_2, VAR_5, VAR_1,
     VAR_4->asoc.my_vtag, ((VAR_4->sctp_ep->sctp_lport << 16) | (VAR_4->rport)), VAR_5,
     VAR_6, VAR_5->cwnd);
 FUNC_0(VAR_0, "Destination %p moved from PF to reachable with cwnd %d.\n",
     (void *)VAR_5, VAR_5->cwnd);
}
