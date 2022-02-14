
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sctp_tcb*,int ) ;
 int FUNC_2 (int ,int *,struct sctp_tcb*,int *,struct sctp_tcb*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_3(struct sctp_tcb *VAR_8, int VAR_9)
{




 FUNC_0((VAR_9 & ~VAR_2) == 0,
     ("sctp_set_state: Can't set substate (new_state = %x)",
     VAR_9));
 VAR_8->asoc.state = (VAR_8->asoc.state & ~VAR_2) | VAR_9;
 if ((VAR_9 == VAR_5) ||
     (VAR_9 == VAR_6) ||
     (VAR_9 == VAR_3)) {
  FUNC_1(VAR_8, VAR_4);
 }







}
