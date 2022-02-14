
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ initial_init_rto_max; int numnets; struct sctp_nets* primary_destination; scalar_t__ dropped_special_cnt; int max_init_times; scalar_t__ delayed_connection; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {scalar_t__ RTO; } ;
struct sctp_inpcb {int dummy; } ;


 scalar_t__ FUNC_0 (struct sctp_tcb*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_nets*,int,int ,int ) ;
 struct sctp_nets* FUNC_2 (struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_4 (struct sctp_inpcb*,struct sctp_tcb*,int ) ;
 scalar_t__ FUNC_5 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*,int ) ;

int
FUNC_6(struct sctp_inpcb *VAR_2,
    struct sctp_tcb *VAR_3,
    struct sctp_nets *VAR_4)
{

 if (VAR_3->asoc.delayed_connection) {




  VAR_3->asoc.delayed_connection = 0;
  FUNC_4(VAR_2, VAR_3, VAR_0);
  return (0);
 }
 if (FUNC_0(VAR_3) != VAR_1) {
  return (0);
 }
 if (FUNC_5(VAR_2, VAR_3, VAR_4,
     VAR_3->asoc.max_init_times)) {

  return (1);
 }
 VAR_3->asoc.dropped_special_cnt = 0;
 FUNC_1(VAR_3, VAR_3->asoc.primary_destination, 1, 0, 0);
 if (VAR_3->asoc.initial_init_rto_max < VAR_4->RTO) {
  VAR_4->RTO = VAR_3->asoc.initial_init_rto_max;
 }
 if (VAR_3->asoc.numnets > 1) {

  struct sctp_nets *VAR_5;

  VAR_5 = FUNC_2(VAR_3, VAR_3->asoc.primary_destination, 0);
  if (VAR_5 != VAR_3->asoc.primary_destination) {
   FUNC_3(VAR_3, VAR_3->asoc.primary_destination);
   VAR_3->asoc.primary_destination = VAR_5;
  }
 }

 FUNC_4(VAR_2, VAR_3, VAR_0);
 return (0);
}
