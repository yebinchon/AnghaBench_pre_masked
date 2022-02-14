
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
struct TYPE_5__ {int use_precise_time; } ;
struct sctp_tcb {int rport; TYPE_2__* sctp_ep; TYPE_1__ asoc; } ;
struct TYPE_7__ {scalar_t__ last_step_state; scalar_t__ step_cnt; void* use_dccc_ecn; void* steady_step; void* ret_from_eq; scalar_t__ tls_needs_set; scalar_t__ bw_bytes; scalar_t__ bw_tot_time; scalar_t__ bw_bytes_at_last_rttc; scalar_t__ vol_reduce; scalar_t__ lbw; scalar_t__ cwnd_at_bw_set; scalar_t__ lbw_rtt; } ;
struct TYPE_8__ {TYPE_3__ rtcc; } ;
struct sctp_nets {int rtt; TYPE_4__ cc_mod; scalar_t__ cwnd; } ;
struct TYPE_6__ {scalar_t__ sctp_lport; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sctp_tcb*,struct sctp_nets*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct sctp_tcb *VAR_6,
    struct sctp_nets *VAR_7)
{
 uint64_t VAR_8, VAR_9;

 FUNC_2(VAR_6, VAR_7);
 VAR_6->asoc.use_precise_time = 1;
 VAR_9 = (((uint64_t)VAR_7->cwnd) << 32);
 VAR_9 |= ((9 << 16) | 0);
 VAR_8 = (VAR_7->rtt << 32) |
     (((uint32_t)(VAR_6->sctp_ep->sctp_lport)) << 16) |
     (VAR_6->rport);
 FUNC_1(VAR_2, VAR_0, VAR_7, VAR_1,
     VAR_8,
     0,
     0,
     0,
     VAR_9);
 VAR_7->cc_mod.rtcc.lbw_rtt = 0;
 VAR_7->cc_mod.rtcc.cwnd_at_bw_set = 0;
 VAR_7->cc_mod.rtcc.vol_reduce = 0;
 VAR_7->cc_mod.rtcc.lbw = 0;
 VAR_7->cc_mod.rtcc.vol_reduce = 0;
 VAR_7->cc_mod.rtcc.bw_bytes_at_last_rttc = 0;
 VAR_7->cc_mod.rtcc.bw_tot_time = 0;
 VAR_7->cc_mod.rtcc.bw_bytes = 0;
 VAR_7->cc_mod.rtcc.tls_needs_set = 0;
 VAR_7->cc_mod.rtcc.ret_from_eq = FUNC_0(VAR_3);
 VAR_7->cc_mod.rtcc.steady_step = FUNC_0(VAR_4);
 VAR_7->cc_mod.rtcc.use_dccc_ecn = FUNC_0(VAR_5);
 VAR_7->cc_mod.rtcc.step_cnt = 0;
 VAR_7->cc_mod.rtcc.last_step_state = 0;


}
