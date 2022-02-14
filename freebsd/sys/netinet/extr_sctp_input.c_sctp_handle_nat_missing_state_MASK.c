
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ auth_supported; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_nets*) ;

__attribute__((used)) static int
FUNC_2(struct sctp_tcb *VAR_1,
    struct sctp_nets *VAR_2)
{




 if (VAR_1->asoc.auth_supported == 0) {
  FUNC_0(VAR_0, "sctp_handle_nat_missing_state: Peer does not support AUTH, cannot send an asconf\n");
  return (0);
 }
 FUNC_1(VAR_1, VAR_2);
 return (1);
}
