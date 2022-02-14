
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_tcb {int asoc; } ;
struct sctp_nets {int cwnd; scalar_t__ net_ack; scalar_t__ mtu; int last_hs_used; } ;
typedef int int32_t ;
struct TYPE_2__ {int cwnd; scalar_t__ increase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *,struct sctp_nets*) ;
 int FUNC_2 (struct sctp_tcb*,struct sctp_nets*,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct sctp_tcb *VAR_5, struct sctp_nets *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_6->cwnd;

 VAR_7 = VAR_6->cwnd >> 10;
 VAR_9 = VAR_2 - 1;

 if (VAR_7 < VAR_3[0].cwnd) {

  if (VAR_6->net_ack > VAR_6->mtu) {
   VAR_6->cwnd += VAR_6->mtu;
  } else {
   VAR_6->cwnd += VAR_6->net_ack;
  }
 } else {
  for (VAR_8 = VAR_6->last_hs_used; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_7 < VAR_3[VAR_8].cwnd) {
    VAR_9 = VAR_8;
    break;
   }
  }
  VAR_6->last_hs_used = VAR_9;
  VAR_10 = (((int32_t)VAR_3[VAR_9].increase) << 10);
  VAR_6->cwnd += VAR_10;
 }
 FUNC_1(&VAR_5->asoc, VAR_6);
 if (FUNC_0(VAR_4) & VAR_1) {
  FUNC_2(VAR_5, VAR_6, (VAR_6->cwnd - VAR_11), VAR_0);
 }
}
