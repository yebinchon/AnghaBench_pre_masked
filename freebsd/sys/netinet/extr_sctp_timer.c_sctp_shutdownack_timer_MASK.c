
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_send_times; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_tcb*,struct sctp_nets*,int,int ,int ) ;
 struct sctp_nets* FUNC_1 (struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_2 (struct sctp_tcb*,struct sctp_nets*) ;
 scalar_t__ FUNC_3 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_4 (int ,struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;

int
FUNC_5(struct sctp_inpcb *VAR_1, struct sctp_tcb *VAR_2,
    struct sctp_nets *VAR_3)
{
 struct sctp_nets *VAR_4;


 if (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_2->asoc.max_send_times)) {

  return (1);
 }
 FUNC_0(VAR_2, VAR_3, 1, 0, 0);

 VAR_4 = FUNC_1(VAR_2, VAR_3, 0);


 FUNC_2(VAR_2, VAR_4);


 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);
 return (0);
}
