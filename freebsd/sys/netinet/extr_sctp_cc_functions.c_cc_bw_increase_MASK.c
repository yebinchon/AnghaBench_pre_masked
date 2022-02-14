
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct sctp_tcb {int dummy; } ;
struct TYPE_3__ {int lbw; int lbw_rtt; int vol_reduce; int step_cnt; int last_step_state; scalar_t__ cwnd_at_bw_set; scalar_t__ steady_step; } ;
struct TYPE_4__ {TYPE_1__ rtcc; } ;
struct sctp_nets {int rtt; int flight_size; scalar_t__ cwnd; TYPE_2__ cc_mod; } ;


 int FUNC_0 (int ,int ,struct sctp_nets*,int ,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct sctp_tcb *VAR_4, struct sctp_nets *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 uint64_t VAR_8, VAR_9;







 VAR_9 = (((uint64_t)VAR_5->cwnd) << 32);
 FUNC_0(VAR_3, VAR_0, VAR_5, VAR_2,
     VAR_7,
     ((VAR_5->cc_mod.rtcc.lbw << 32) | VAR_6),
     ((VAR_5->cc_mod.rtcc.lbw_rtt << 32) | VAR_5->rtt),
     VAR_5->flight_size,
     VAR_9);
 if (VAR_5->cc_mod.rtcc.steady_step) {
  VAR_8 = VAR_5->cc_mod.rtcc.vol_reduce;
  VAR_8 <<= 16;
  VAR_8 |= VAR_5->cc_mod.rtcc.step_cnt;
  VAR_8 <<= 16;
  VAR_8 |= VAR_5->cc_mod.rtcc.last_step_state;
  FUNC_0(VAR_3, VAR_0, VAR_5, VAR_1,
      VAR_7,
      ((VAR_5->cc_mod.rtcc.lbw << 32) | VAR_6),
      ((VAR_5->cc_mod.rtcc.lbw_rtt << 32) | VAR_5->rtt),
      VAR_8,
      VAR_9);
  VAR_5->cc_mod.rtcc.last_step_state = 0;
  VAR_5->cc_mod.rtcc.step_cnt = 0;
  VAR_5->cc_mod.rtcc.vol_reduce = 0;
 }
 VAR_5->cc_mod.rtcc.lbw = VAR_6;
 VAR_5->cc_mod.rtcc.lbw_rtt = VAR_5->rtt;
 VAR_5->cc_mod.rtcc.cwnd_at_bw_set = VAR_5->cwnd;
 return (0);
}
