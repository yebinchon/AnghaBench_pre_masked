
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* sctp_cwnd_update_after_timeout ) (struct sctp_tcb*,struct sctp_nets*) ;} ;
struct TYPE_4__ {int minrto; int initial_rto; int maxrto; TYPE_1__ cc_functions; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_nets {int RTO; scalar_t__ RTO_measured; } ;


 int FUNC_0 (struct sctp_tcb*,struct sctp_nets*) ;

__attribute__((used)) static void
FUNC_1(struct sctp_tcb *VAR_0,
    struct sctp_nets *VAR_1,
    int VAR_2,
    int VAR_3, int VAR_4)
{
 if (VAR_1->RTO == 0) {
  if (VAR_1->RTO_measured) {
   VAR_1->RTO = VAR_0->asoc.minrto;
  } else {
   VAR_1->RTO = VAR_0->asoc.initial_rto;
  }
 }
 VAR_1->RTO <<= 1;
 if (VAR_1->RTO > VAR_0->asoc.maxrto) {
  VAR_1->RTO = VAR_0->asoc.maxrto;
 }
 if ((VAR_2 == 0) && (VAR_3 || VAR_4)) {


  VAR_0->asoc.cc_functions.sctp_cwnd_update_after_timeout(VAR_0, VAR_1);
 }
}
