
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_tcb {int asoc; } ;
struct sctp_nets {int cwnd; int ssthresh; int mtu; size_t last_hs_used; } ;
typedef int int32_t ;
struct TYPE_2__ {int cwnd; scalar_t__ drop_percent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,struct sctp_nets*) ;
 int FUNC_2 (struct sctp_tcb*,struct sctp_nets*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct sctp_tcb *VAR_4, struct sctp_nets *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_5->cwnd;

 VAR_6 = VAR_5->cwnd >> 10;
 if (VAR_6 < VAR_2[0].cwnd) {

  VAR_5->ssthresh = VAR_5->cwnd / 2;
  if (VAR_5->ssthresh < (VAR_5->mtu * 2)) {
   VAR_5->ssthresh = 2 * VAR_5->mtu;
  }
  VAR_5->cwnd = VAR_5->ssthresh;
 } else {

  VAR_5->ssthresh = VAR_5->cwnd - (int)((VAR_5->cwnd / 100) *
      (int32_t)VAR_2[VAR_5->last_hs_used].drop_percent);
  VAR_5->cwnd = VAR_5->ssthresh;

  VAR_8 = VAR_5->last_hs_used;
  VAR_6 = VAR_5->cwnd >> 10;

  if (VAR_6 < VAR_2[0].cwnd) {

   VAR_5->last_hs_used = 0;
  } else {
   for (VAR_7 = VAR_8; VAR_7 >= 1; VAR_7--) {
    if (VAR_6 > VAR_2[VAR_7 - 1].cwnd) {
     break;
    }
   }
   VAR_5->last_hs_used = VAR_8;
  }
 }
 FUNC_1(&VAR_4->asoc, VAR_5);
 if (FUNC_0(VAR_3) & VAR_1) {
  FUNC_2(VAR_4, VAR_5, (VAR_5->cwnd - VAR_9), VAR_0);
 }
}
