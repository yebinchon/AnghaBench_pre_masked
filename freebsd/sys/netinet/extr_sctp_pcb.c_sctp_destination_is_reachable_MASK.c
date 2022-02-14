
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct sctp_tcb {struct sctp_inpcb* sctp_ep; } ;
struct TYPE_3__ {int inp_vflag; } ;
struct TYPE_4__ {TYPE_1__ inp; } ;
struct sctp_inpcb {int sctp_flags; TYPE_2__ ip_inp; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct sctp_tcb *VAR_3, struct sockaddr *VAR_4)
{
 struct sctp_inpcb *VAR_5;
 int VAR_6;
 VAR_5 = VAR_3->sctp_ep;
 if (VAR_5->sctp_flags & VAR_2) {






  return (1);
 }

 switch (VAR_4->sa_family) {
 default:

  VAR_6 = 0;
  break;
 }
 return (VAR_6);
}
