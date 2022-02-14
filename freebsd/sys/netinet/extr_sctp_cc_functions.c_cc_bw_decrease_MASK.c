
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sctp_tcb {int asoc; } ;
struct TYPE_3__ {int lbw_rtt; scalar_t__ cwnd_at_bw_set; int lbw; int vol_reduce; int step_cnt; int last_step_state; scalar_t__ steady_step; scalar_t__ ret_from_eq; } ;
struct TYPE_4__ {TYPE_1__ rtcc; } ;
struct sctp_nets {scalar_t__ cwnd; int rtt; int flight_size; scalar_t__ ssthresh; scalar_t__ mtu; TYPE_2__ cc_mod; scalar_t__ partial_bytes_acked; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,struct sctp_nets*,int ,int,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct sctp_nets*) ;

__attribute__((used)) static int
FUNC_2(struct sctp_tcb *VAR_6, struct sctp_nets *VAR_7, uint64_t VAR_8, uint64_t VAR_9,
    uint64_t VAR_10, uint8_t VAR_11)
{
 uint64_t VAR_12, VAR_13;


 VAR_13 = (((uint64_t)VAR_7->cwnd) << 32);
 if (VAR_7->rtt > VAR_7->cc_mod.rtcc.lbw_rtt + VAR_9) {


  if ((VAR_7->cwnd > VAR_7->cc_mod.rtcc.cwnd_at_bw_set) &&
      (VAR_11 != VAR_1)) {


   VAR_13 |= ((1 << 16) | 1);
   FUNC_0(VAR_5, VAR_2, VAR_7, VAR_4,
       VAR_10,
       ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
       ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
       VAR_7->flight_size,
       VAR_13);
   if (VAR_7->cc_mod.rtcc.ret_from_eq) {




    VAR_7->ssthresh = VAR_7->cwnd - 1;
    VAR_7->partial_bytes_acked = 0;
   }
   return (1);
  }

  VAR_13 |= ((2 << 16) | 0);
  FUNC_0(VAR_5, VAR_2, VAR_7, VAR_4,
      VAR_10,
      ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
      ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
      VAR_7->flight_size,
      VAR_13);

  if (VAR_7->cc_mod.rtcc.steady_step) {
   VAR_12 = VAR_7->cc_mod.rtcc.vol_reduce;
   VAR_12 <<= 16;
   VAR_12 |= VAR_7->cc_mod.rtcc.step_cnt;
   VAR_12 <<= 16;
   VAR_12 |= VAR_7->cc_mod.rtcc.last_step_state;
   FUNC_0(VAR_5, VAR_2, VAR_7, VAR_3,
       VAR_10,
       ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
       ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
       VAR_12,
       VAR_13);




   if ((VAR_7->cc_mod.rtcc.vol_reduce) &&
       (VAR_11 != VAR_0)) {
    VAR_7->cwnd += VAR_7->mtu;
    FUNC_1(&VAR_6->asoc, VAR_7);
    VAR_7->cc_mod.rtcc.vol_reduce--;
   }
   VAR_7->cc_mod.rtcc.last_step_state = 2;
   VAR_7->cc_mod.rtcc.step_cnt = 0;
  }
  goto out_decision;
 } else if (VAR_7->rtt < VAR_7->cc_mod.rtcc.lbw_rtt - VAR_9) {


  VAR_13 |= ((3 << 16) | 0);
  FUNC_0(VAR_5, VAR_2, VAR_7, VAR_4,
      VAR_10,
      ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
      ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
      VAR_7->flight_size,
      VAR_13);
  if (VAR_7->cc_mod.rtcc.steady_step) {
   VAR_12 = VAR_7->cc_mod.rtcc.vol_reduce;
   VAR_12 <<= 16;
   VAR_12 |= VAR_7->cc_mod.rtcc.step_cnt;
   VAR_12 <<= 16;
   VAR_12 |= VAR_7->cc_mod.rtcc.last_step_state;
   FUNC_0(VAR_5, VAR_2, VAR_7, VAR_3,
       VAR_10,
       ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
       ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
       VAR_12,
       VAR_13);
   if ((VAR_7->cc_mod.rtcc.vol_reduce) &&
       (VAR_11 != VAR_0)) {
    VAR_7->cwnd += VAR_7->mtu;
    FUNC_1(&VAR_6->asoc, VAR_7);
    VAR_7->cc_mod.rtcc.vol_reduce--;
   }
   VAR_7->cc_mod.rtcc.last_step_state = 3;
   VAR_7->cc_mod.rtcc.step_cnt = 0;
  }
  goto out_decision;
 }


 VAR_13 |= ((4 << 16) | 0);
 FUNC_0(VAR_5, VAR_2, VAR_7, VAR_4,
     VAR_10,
     ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
     ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
     VAR_7->flight_size,
     VAR_13);
 if (VAR_7->cc_mod.rtcc.steady_step) {
  VAR_12 = VAR_7->cc_mod.rtcc.vol_reduce;
  VAR_12 <<= 16;
  VAR_12 |= VAR_7->cc_mod.rtcc.step_cnt;
  VAR_12 <<= 16;
  VAR_12 |= VAR_7->cc_mod.rtcc.last_step_state;
  FUNC_0(VAR_5, VAR_2, VAR_7, VAR_3,
      VAR_10,
      ((VAR_7->cc_mod.rtcc.lbw << 32) | VAR_8),
      ((VAR_7->cc_mod.rtcc.lbw_rtt << 32) | VAR_7->rtt),
      VAR_12,
      VAR_13);
  if ((VAR_7->cc_mod.rtcc.vol_reduce) &&
      (VAR_11 != VAR_0)) {
   VAR_7->cwnd += VAR_7->mtu;
   FUNC_1(&VAR_6->asoc, VAR_7);
   VAR_7->cc_mod.rtcc.vol_reduce--;
  }
  VAR_7->cc_mod.rtcc.last_step_state = 4;
  VAR_7->cc_mod.rtcc.step_cnt = 0;
 }
out_decision:
 VAR_7->cc_mod.rtcc.lbw = VAR_8;
 VAR_7->cc_mod.rtcc.lbw_rtt = VAR_7->rtt;
 VAR_7->cc_mod.rtcc.cwnd_at_bw_set = VAR_7->cwnd;
 if (VAR_11 == VAR_0) {
  return (1);
 } else {
  return (0);
 }
}
