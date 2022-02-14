
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct sctphdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ max_burst; } ;
struct sctp_tcb {int rport; TYPE_4__ asoc; TYPE_1__* sctp_ep; } ;
struct TYPE_6__ {int lbw; int lbw_rtt; scalar_t__ ret_from_eq; scalar_t__ last_step_state; scalar_t__ step_cnt; scalar_t__ vol_reduce; scalar_t__ steady_step; scalar_t__ tls_needs_set; scalar_t__ bw_bytes; scalar_t__ bw_tot_time; scalar_t__ bw_bytes_at_last_rttc; scalar_t__ cwnd_at_bw_set; } ;
struct TYPE_7__ {TYPE_2__ rtcc; } ;
struct sctp_nets {int rtt; int cwnd; int mtu; TYPE_3__ cc_mod; int flight_size; } ;
struct TYPE_5__ {scalar_t__ sctp_lport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int,int,int,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_5,
    struct sctp_nets *VAR_6)
{
 uint64_t VAR_7, VAR_8;

 if (VAR_6->cc_mod.rtcc.lbw) {

  VAR_7 = (VAR_6->rtt << 32) | (((uint32_t)(VAR_5->sctp_ep->sctp_lport)) << 16) |
      (VAR_5->rport);
  VAR_8 = (((uint64_t)VAR_6->cwnd) << 32);

  VAR_8 |= ((8 << 16) | 0);
  FUNC_1(VAR_3, VAR_1, VAR_6, VAR_2,
      VAR_7,
      ((VAR_6->cc_mod.rtcc.lbw << 32) | 0),
      ((VAR_6->cc_mod.rtcc.lbw_rtt << 32) | VAR_6->rtt),
      VAR_6->flight_size,
      VAR_8);
  VAR_6->cc_mod.rtcc.lbw_rtt = 0;
  VAR_6->cc_mod.rtcc.cwnd_at_bw_set = 0;
  VAR_6->cc_mod.rtcc.lbw = 0;
  VAR_6->cc_mod.rtcc.bw_bytes_at_last_rttc = 0;
  VAR_6->cc_mod.rtcc.vol_reduce = 0;
  VAR_6->cc_mod.rtcc.bw_tot_time = 0;
  VAR_6->cc_mod.rtcc.bw_bytes = 0;
  VAR_6->cc_mod.rtcc.tls_needs_set = 0;
  if (VAR_6->cc_mod.rtcc.steady_step) {
   VAR_6->cc_mod.rtcc.vol_reduce = 0;
   VAR_6->cc_mod.rtcc.step_cnt = 0;
   VAR_6->cc_mod.rtcc.last_step_state = 0;
  }
  if (VAR_6->cc_mod.rtcc.ret_from_eq) {

   uint32_t VAR_9, VAR_10;

   VAR_9 = FUNC_0(VAR_4);
   if (VAR_9 == 0) {




    VAR_10 = FUNC_3((VAR_6->mtu * 4), FUNC_2((2 * VAR_6->mtu), VAR_0));
   } else {




    if ((VAR_5->asoc.max_burst > 0) && (VAR_9 > VAR_5->asoc.max_burst))
     VAR_9 = VAR_5->asoc.max_burst;
    VAR_10 = (VAR_6->mtu - sizeof(struct sctphdr)) * VAR_9;
   }
   if (VAR_6->cwnd > VAR_10) {




    VAR_6->cwnd = VAR_10;
   }
  }
 }
}
