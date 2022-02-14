
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int my_vtag; } ;
struct sctp_tcb {int rport; TYPE_2__* sctp_ep; TYPE_1__ asoc; } ;
struct TYPE_7__ {int bw_bytes; int bw_bytes_at_last_rttc; int last_inst_ind; int lbw_rtt; int lbw; scalar_t__ rtt_set_this_sack; } ;
struct TYPE_8__ {TYPE_3__ rtcc; } ;
struct sctp_nets {int rtt; TYPE_4__ cc_mod; int flight_size; scalar_t__ cwnd; } ;
struct TYPE_6__ {scalar_t__ sctp_lport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct sctp_nets*,int ,int,int,int,int ,int) ;
 int FUNC_2 (struct sctp_tcb*,struct sctp_nets*,int,int,int,int) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_nets*,int,int) ;
 int FUNC_4 (struct sctp_tcb*,struct sctp_nets*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct sctp_tcb *VAR_8, struct sctp_nets *VAR_9, uint64_t VAR_10)
{
 uint64_t VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16, VAR_17;
 uint64_t VAR_18, VAR_19;
 int VAR_20;
 uint8_t VAR_21;
 int VAR_22;
 VAR_20 = FUNC_0(VAR_6);
 VAR_14 = VAR_8->asoc.my_vtag;
 VAR_15 = (VAR_14 << 32) | (((uint32_t)(VAR_8->sctp_ep->sctp_lport)) << 16) | (VAR_8->rport);
 VAR_13 = (((uint64_t)VAR_9->cwnd) << 32);
 VAR_14 = VAR_9->rtt;
 if (VAR_9->cc_mod.rtcc.rtt_set_this_sack) {
  VAR_9->cc_mod.rtcc.rtt_set_this_sack = 0;
  VAR_16 = VAR_9->cc_mod.rtcc.bw_bytes - VAR_9->cc_mod.rtcc.bw_bytes_at_last_rttc;
  VAR_9->cc_mod.rtcc.bw_bytes_at_last_rttc = VAR_9->cc_mod.rtcc.bw_bytes;
  if (VAR_9->rtt) {
   VAR_18 = VAR_9->rtt / 1000;
   if (VAR_18) {
    VAR_17 = VAR_16 / VAR_18;
    VAR_19 = VAR_17 >> VAR_20;
    if (VAR_17 > VAR_10)
     VAR_21 = VAR_0;
    else if ((VAR_17 + VAR_19) < VAR_10)
     VAR_21 = VAR_1;
    else
     VAR_21 = VAR_2;
    VAR_13 |= ((0xb << 16) | VAR_21);
   } else {
    VAR_21 = VAR_9->cc_mod.rtcc.last_inst_ind;
    VAR_17 = VAR_16 / (uint64_t)(VAR_9->rtt);

    VAR_13 |= ((0xc << 16) | VAR_21);
   }
  } else {
   VAR_21 = VAR_9->cc_mod.rtcc.last_inst_ind;
   VAR_17 = VAR_16;

   VAR_13 |= ((0xd << 16) | VAR_21);
  }
  FUNC_1(VAR_5, VAR_3, VAR_9, VAR_4,
      VAR_15,
      ((VAR_10 << 32) | VAR_17),
      ((VAR_9->cc_mod.rtcc.lbw_rtt << 32) | VAR_14),
      VAR_9->flight_size,
      VAR_13);
 } else {

  VAR_21 = VAR_9->cc_mod.rtcc.last_inst_ind;
 }
 VAR_11 = VAR_9->cc_mod.rtcc.lbw >> VAR_20;
 if (VAR_10 > VAR_9->cc_mod.rtcc.lbw + VAR_11) {
  VAR_22 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_15);
  goto out;
 }
 VAR_12 = VAR_9->cc_mod.rtcc.lbw_rtt >> FUNC_0(VAR_7);
 if (VAR_10 < VAR_9->cc_mod.rtcc.lbw - VAR_11) {
  VAR_22 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_12, VAR_15, VAR_21);
  goto out;
 }




 VAR_22 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_12, VAR_15, VAR_21);
out:
 VAR_9->cc_mod.rtcc.last_inst_ind = VAR_21;
 return (VAR_22);
}
