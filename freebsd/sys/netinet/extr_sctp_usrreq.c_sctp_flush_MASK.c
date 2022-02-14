
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * sb_mb; scalar_t__ sb_mbcnt; scalar_t__ sb_cc; } ;
struct TYPE_3__ {int * sb_mb; scalar_t__ sb_mbcnt; scalar_t__ sb_cc; } ;
struct socket {TYPE_2__ so_snd; TYPE_1__ so_rcv; scalar_t__ so_pcb; } ;
struct sctp_inpcb {int sctp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sctp_inpcb*) ;
 int FUNC_1 (struct sctp_inpcb*) ;
 int FUNC_2 (struct sctp_inpcb*) ;
 int FUNC_3 (struct sctp_inpcb*) ;
 int FUNC_4 (struct sctp_inpcb*) ;
 int FUNC_5 (struct sctp_inpcb*) ;
 int FUNC_6 (struct sctp_inpcb*,int *,int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_7(struct socket *VAR_7, int VAR_8)
{






 struct sctp_inpcb *VAR_9;

 VAR_9 = (struct sctp_inpcb *)VAR_7->so_pcb;
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_9, ((void*)0), ((void*)0), VAR_4, VAR_0);
  return (VAR_0);
 }
 FUNC_2(VAR_9);

 if (VAR_9->sctp_flags & VAR_6) {
  FUNC_3(VAR_9);
  return (0);
 }
 FUNC_3(VAR_9);
 if ((VAR_8 == VAR_1) || (VAR_8 == VAR_2)) {




  FUNC_4(VAR_9);
  FUNC_0(VAR_9);
  VAR_9->sctp_flags |= VAR_5;
  FUNC_1(VAR_9);
  FUNC_5(VAR_9);
  VAR_7->so_rcv.sb_cc = 0;
  VAR_7->so_rcv.sb_mbcnt = 0;
  VAR_7->so_rcv.sb_mb = ((void*)0);
 }
 if ((VAR_8 == VAR_3) || (VAR_8 == VAR_2)) {




  VAR_7->so_snd.sb_cc = 0;
  VAR_7->so_snd.sb_mbcnt = 0;
  VAR_7->so_snd.sb_mb = ((void*)0);

 }
 return (0);
}
