
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asconf_seq_out; int asconf_seq_out_acked; } ;
struct sctp_tcb {TYPE_1__ asoc; int sctp_ep; } ;
struct sctp_nets {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sctp_tcb*,struct sctp_nets*,scalar_t__) ;
 int FUNC_1 (struct sctp_tcb*) ;

void
FUNC_2(struct sctp_tcb *VAR_3, struct sctp_nets *VAR_4)
{



 FUNC_0(VAR_2, VAR_3->sctp_ep, VAR_3, VAR_4,
     VAR_0 + VAR_1);
 VAR_3->asoc.asconf_seq_out_acked = VAR_3->asoc.asconf_seq_out;

 FUNC_1(VAR_3);
}
