
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sctp_tcb {int dummy; } ;
struct TYPE_3__ {int lbw_rtt; int lbw; int steady_step; int last_step_state; int step_cnt; int vol_reduce; int cwnd_at_bw_set; int ret_from_eq; } ;
struct TYPE_4__ {TYPE_1__ rtcc; } ;
struct sctp_nets {int cwnd; int rtt; int flight_size; int mtu; TYPE_2__ cc_mod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,struct sctp_nets*,int ,int,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct sctp_tcb *VAR_7, struct sctp_nets *VAR_8, uint64_t VAR_9,
    uint64_t VAR_10, uint64_t VAR_11, uint8_t VAR_12)
{
 uint64_t VAR_13, VAR_14;

 VAR_14 = (((uint64_t)VAR_8->cwnd) << 32);
 if (VAR_8->rtt > VAR_8->cc_mod.rtcc.lbw_rtt + VAR_10) {





  VAR_14 |= ((5 << 16) | 1);
  FUNC_0(VAR_6, VAR_3, VAR_8, VAR_5,
      VAR_11,
      ((VAR_8->cc_mod.rtcc.lbw << 32) | VAR_9),
      ((VAR_8->cc_mod.rtcc.lbw_rtt << 32) | VAR_8->rtt),
      VAR_8->flight_size,
      VAR_14);
  if ((VAR_8->cc_mod.rtcc.steady_step) && (VAR_12 != VAR_1)) {
   if (VAR_8->cc_mod.rtcc.last_step_state == 5)
    VAR_8->cc_mod.rtcc.step_cnt++;
   else
    VAR_8->cc_mod.rtcc.step_cnt = 1;
   VAR_8->cc_mod.rtcc.last_step_state = 5;
   if ((VAR_8->cc_mod.rtcc.step_cnt == VAR_8->cc_mod.rtcc.steady_step) ||
       ((VAR_8->cc_mod.rtcc.step_cnt > VAR_8->cc_mod.rtcc.steady_step) &&
       ((VAR_8->cc_mod.rtcc.step_cnt % VAR_8->cc_mod.rtcc.steady_step) == 0))) {

    VAR_13 = VAR_8->cc_mod.rtcc.vol_reduce;
    VAR_13 <<= 16;
    VAR_13 |= VAR_8->cc_mod.rtcc.step_cnt;
    VAR_13 <<= 16;
    VAR_13 |= VAR_8->cc_mod.rtcc.last_step_state;
    FUNC_0(VAR_6, VAR_3, VAR_8, VAR_4,
        VAR_11,
        ((VAR_8->cc_mod.rtcc.lbw << 32) | VAR_9),
        ((VAR_8->cc_mod.rtcc.lbw_rtt << 32) | VAR_8->rtt),
        VAR_13,
        VAR_14);
    if (VAR_8->cwnd > (4 * VAR_8->mtu)) {
     VAR_8->cwnd -= VAR_8->mtu;
     VAR_8->cc_mod.rtcc.vol_reduce++;
    } else {
     VAR_8->cc_mod.rtcc.step_cnt = 0;
    }
   }
  }
  return (1);
 }
 if (VAR_8->rtt < VAR_8->cc_mod.rtcc.lbw_rtt - VAR_10) {






  VAR_14 |= ((6 << 16) | 0);
  FUNC_0(VAR_6, VAR_3, VAR_8, VAR_5,
      VAR_11,
      ((VAR_8->cc_mod.rtcc.lbw << 32) | VAR_9),
      ((VAR_8->cc_mod.rtcc.lbw_rtt << 32) | VAR_8->rtt),
      VAR_8->flight_size,
      VAR_14);
  if (VAR_8->cc_mod.rtcc.steady_step) {
   VAR_13 = VAR_8->cc_mod.rtcc.vol_reduce;
   VAR_13 <<= 16;
   VAR_13 |= VAR_8->cc_mod.rtcc.step_cnt;
   VAR_13 <<= 16;
   VAR_13 |= VAR_8->cc_mod.rtcc.last_step_state;
   FUNC_0(VAR_6, VAR_3, VAR_8, VAR_4,
       VAR_11,
       ((VAR_8->cc_mod.rtcc.lbw << 32) | VAR_9),
       ((VAR_8->cc_mod.rtcc.lbw_rtt << 32) | VAR_8->rtt),
       VAR_13,
       VAR_14);
   if ((VAR_8->cc_mod.rtcc.last_step_state == 5) &&
       (VAR_8->cc_mod.rtcc.step_cnt > VAR_8->cc_mod.rtcc.steady_step)) {

    VAR_8->cc_mod.rtcc.step_cnt = 0;
    return (1);
   } else {
    VAR_8->cc_mod.rtcc.last_step_state = 6;
    VAR_8->cc_mod.rtcc.step_cnt = 0;
   }
  }
  VAR_8->cc_mod.rtcc.lbw = VAR_9;
  VAR_8->cc_mod.rtcc.lbw_rtt = VAR_8->rtt;
  VAR_8->cc_mod.rtcc.cwnd_at_bw_set = VAR_8->cwnd;
  if (VAR_12 == VAR_0)
   return (1);
  else if (VAR_12 == VAR_2)
   return (1);
  else
   return (0);
 }




 VAR_14 |= ((7 << 16) | VAR_8->cc_mod.rtcc.ret_from_eq);
 FUNC_0(VAR_6, VAR_3, VAR_8, VAR_5,
     VAR_11,
     ((VAR_8->cc_mod.rtcc.lbw << 32) | VAR_9),
     ((VAR_8->cc_mod.rtcc.lbw_rtt << 32) | VAR_8->rtt),
     VAR_8->flight_size,
     VAR_14);
 if ((VAR_8->cc_mod.rtcc.steady_step) && (VAR_12 != VAR_1)) {
  if (VAR_8->cc_mod.rtcc.last_step_state == 5)
   VAR_8->cc_mod.rtcc.step_cnt++;
  else
   VAR_8->cc_mod.rtcc.step_cnt = 1;
  VAR_8->cc_mod.rtcc.last_step_state = 5;
  if ((VAR_8->cc_mod.rtcc.step_cnt == VAR_8->cc_mod.rtcc.steady_step) ||
      ((VAR_8->cc_mod.rtcc.step_cnt > VAR_8->cc_mod.rtcc.steady_step) &&
      ((VAR_8->cc_mod.rtcc.step_cnt % VAR_8->cc_mod.rtcc.steady_step) == 0))) {

   if (VAR_8->cwnd > (4 * VAR_8->mtu)) {
    VAR_8->cwnd -= VAR_8->mtu;
    VAR_8->cc_mod.rtcc.vol_reduce++;
    return (1);
   } else {
    VAR_8->cc_mod.rtcc.step_cnt = 0;
   }
  }
 }
 if (VAR_12 == VAR_0)
  return (1);
 else if (VAR_12 == VAR_2)
  return (1);
 else
  return ((int)VAR_8->cc_mod.rtcc.ret_from_eq);
}
