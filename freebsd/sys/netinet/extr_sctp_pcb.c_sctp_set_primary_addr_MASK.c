
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {struct sctp_nets* primary_destination; int nets; int * alternate; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int dest_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sctp_nets* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sctp_nets*,int ) ;
 int FUNC_2 (int *,struct sctp_nets*,int ) ;
 struct sctp_nets* FUNC_3 (struct sctp_tcb*,struct sockaddr*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

int
FUNC_5(struct sctp_tcb *VAR_4, struct sockaddr *VAR_5,
    struct sctp_nets *VAR_6)
{

 if (VAR_6 == ((void*)0) && VAR_5)
  VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_6 == ((void*)0)) {

  return (-1);
 } else {

  if (VAR_6->dest_state & VAR_2) {

   VAR_6->dest_state |= VAR_1;
   return (0);
  }
  VAR_4->asoc.primary_destination = VAR_6;
  if (!(VAR_6->dest_state & VAR_0) && (VAR_4->asoc.alternate)) {
   FUNC_4(VAR_4->asoc.alternate);
   VAR_4->asoc.alternate = ((void*)0);
  }
  VAR_6 = FUNC_0(&VAR_4->asoc.nets);
  if (VAR_6 != VAR_4->asoc.primary_destination) {





   FUNC_2(&VAR_4->asoc.nets, VAR_4->asoc.primary_destination, VAR_3);
   FUNC_1(&VAR_4->asoc.nets, VAR_4->asoc.primary_destination, VAR_3);
  }
  return (0);
 }
}
