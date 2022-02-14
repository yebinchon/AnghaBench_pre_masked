
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tcb {int dummy; } ;
struct sctp_inpcb {int dummy; } ;
typedef int sctp_assoc_t ;


 int FUNC_0 (struct sctp_inpcb*) ;
 int FUNC_1 (struct sctp_inpcb*) ;
 struct sctp_tcb* FUNC_2 (struct sctp_inpcb*,int ,int) ;

struct sctp_tcb *
FUNC_3(struct sctp_inpcb *VAR_0, sctp_assoc_t VAR_1, int VAR_2)
{
 struct sctp_tcb *VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
 return (VAR_3);
}
