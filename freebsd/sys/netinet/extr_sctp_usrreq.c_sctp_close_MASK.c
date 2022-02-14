
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ sb_cc; } ;
struct socket {int so_options; scalar_t__ so_linger; int * so_pcb; TYPE_1__ so_rcv; TYPE_1__ so_snd; } ;
struct sctp_inpcb {int sctp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int*,int,int) ;
 int FUNC_4 (struct sctp_inpcb*,int ,int ) ;
 int FUNC_5 (struct sctp_inpcb*,int *,int) ;

void
FUNC_6(struct socket *VAR_6)
{
 struct sctp_inpcb *VAR_7;
 uint32_t VAR_8;

 VAR_7 = (struct sctp_inpcb *)VAR_6->so_pcb;
 if (VAR_7 == ((void*)0))
  return;




sctp_must_try_again:
 VAR_8 = VAR_7->sctp_flags;



 if (((VAR_8 & VAR_4) == 0) &&
     (FUNC_3(&VAR_7->sctp_flags, VAR_8, (VAR_8 | VAR_4 | VAR_3)))) {
  if (((VAR_6->so_options & VAR_5) && (VAR_6->so_linger == 0)) ||
      (VAR_6->so_rcv.sb_cc > 0)) {



   FUNC_4(VAR_7, VAR_1,
       VAR_0);
  } else {



   FUNC_4(VAR_7, VAR_2,
       VAR_0);
  }




  FUNC_1(VAR_6);
  FUNC_0(VAR_6->so_snd);




  FUNC_0(VAR_6->so_rcv);


  VAR_6->so_pcb = ((void*)0);
  FUNC_2(VAR_6);
 } else {
  VAR_8 = VAR_7->sctp_flags;
  if ((VAR_8 & VAR_4) == 0) {
   goto sctp_must_try_again;
  }
 }
 return;
}
