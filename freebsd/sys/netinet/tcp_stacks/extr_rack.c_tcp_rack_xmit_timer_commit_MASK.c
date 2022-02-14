
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct tcpcb {int t_srtt; int t_rttvar; int t_rttbest; scalar_t__ t_softerror; int t_rxtcur; scalar_t__ t_rxtshift; int t_stats; int t_rttupdated; scalar_t__ t_fb_ptr; } ;
struct TYPE_3__ {int rs_flags; int rs_rtt_lowest; int rs_rtt_highest; int rs_rtt_tot; scalar_t__ rs_rtt_cnt; } ;
struct TYPE_4__ {scalar_t__ rc_rate_sample_method; TYPE_1__ rack_rs; } ;
struct tcp_rack {TYPE_2__ r_ctl; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (struct tcp_rack*,int) ;
 int FUNC_8 (struct tcpcb*,struct tcp_rack*,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_10(struct tcp_rack *VAR_11, struct tcpcb *VAR_12)
{
 int32_t VAR_13;
 uint32_t VAR_14, VAR_15;
 int32_t VAR_16;

 if (VAR_11->r_ctl.rack_rs.rs_flags & VAR_0)

  return;
 if (VAR_11->r_ctl.rc_rate_sample_method == VAR_6) {

  VAR_16 = VAR_11->r_ctl.rack_rs.rs_rtt_lowest;
 } else if (VAR_11->r_ctl.rc_rate_sample_method == VAR_5) {

  VAR_16 = VAR_11->r_ctl.rack_rs.rs_rtt_highest;
 } else if (VAR_11->r_ctl.rc_rate_sample_method == VAR_4) {

  VAR_16 = (int32_t)(VAR_11->r_ctl.rack_rs.rs_rtt_tot /
    (uint64_t)VAR_11->r_ctl.rack_rs.rs_rtt_cnt);
 } else {



  return;
 }
 if (VAR_16 == 0)
  VAR_16 = 1;
 FUNC_7(VAR_11, VAR_16);
 VAR_14 = VAR_12->t_srtt;
 VAR_15 = VAR_12->t_rttvar;
 VAR_11 = (struct tcp_rack *)VAR_12->t_fb_ptr;
 if (VAR_12->t_srtt != 0) {







  VAR_13 = ((VAR_16 - 1) << VAR_1)
      - (VAR_12->t_srtt >> (VAR_3 - VAR_1));

  VAR_12->t_srtt += VAR_13;
  if (VAR_12->t_srtt <= 0)
   VAR_12->t_srtt = 1;
  if (VAR_13 < 0)
   VAR_13 = -VAR_13;
  VAR_13 -= VAR_12->t_rttvar >> (VAR_2 - VAR_1);
  VAR_12->t_rttvar += VAR_13;
  if (VAR_12->t_rttvar <= 0)
   VAR_12->t_rttvar = 1;
  if (VAR_12->t_rttbest > VAR_12->t_srtt + VAR_12->t_rttvar)
   VAR_12->t_rttbest = VAR_12->t_srtt + VAR_12->t_rttvar;
 } else {





  VAR_12->t_srtt = VAR_16 << VAR_3;
  VAR_12->t_rttvar = VAR_16 << (VAR_2 - 1);
  VAR_12->t_rttbest = VAR_12->t_srtt + VAR_12->t_rttvar;
 }
 FUNC_1(VAR_10);
 FUNC_8(VAR_12, VAR_11, VAR_16, VAR_14, VAR_15);
 VAR_12->t_rttupdated++;



 VAR_12->t_rxtshift = 0;
 FUNC_2(VAR_12->t_rxtcur, FUNC_3(VAR_12),
    FUNC_5(FUNC_0(VAR_9), VAR_16 + 2), FUNC_0(VAR_8));
 VAR_12->t_softerror = 0;
}
