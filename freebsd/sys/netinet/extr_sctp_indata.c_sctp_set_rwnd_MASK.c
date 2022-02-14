
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tcb {int dummy; } ;
struct sctp_association {int my_rwnd; } ;


 int FUNC_0 (struct sctp_tcb*,struct sctp_association*) ;

void
FUNC_1(struct sctp_tcb *VAR_0, struct sctp_association *VAR_1)
{
 VAR_1->my_rwnd = FUNC_0(VAR_0, VAR_1);
}
