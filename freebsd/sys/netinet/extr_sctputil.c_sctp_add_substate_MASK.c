
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *,struct sctp_tcb*,int *,struct sctp_tcb*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_2(struct sctp_tcb *VAR_4, int VAR_5)
{




 FUNC_0((VAR_5 & VAR_1) == 0,
     ("sctp_add_substate: Can't set state (substate = %x)",
     VAR_5));
 VAR_4->asoc.state |= VAR_5;
}
