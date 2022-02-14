
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct tcpcb {int t_srtt; int snd_cwnd; } ;
struct TYPE_2__ {int rc_rack_min_rtt; int rc_rack_largest_cwnd; scalar_t__ rc_gp_hist_filled; scalar_t__* rc_gp_history; } ;
struct tcp_rack {scalar_t__ rack_per_of_gp; scalar_t__ rc_always_pace; int rc_pace_reduce; int r_enforce_min_pace; TYPE_1__ r_ctl; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct tcpcb*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int32_t
FUNC_3(struct tcp_rack *VAR_5, struct tcpcb *VAR_6, uint32_t VAR_7)
{
 int32_t VAR_8 = 0;

 if ((VAR_5->rack_per_of_gp == 0) ||
     (VAR_5->rc_always_pace == 0)) {







  uint32_t VAR_9, VAR_10, VAR_11 = 0;

old_method:
  if (VAR_5->r_ctl.rc_rack_min_rtt)
   VAR_9 = VAR_5->r_ctl.rc_rack_min_rtt;
  else
   VAR_9 = FUNC_0((VAR_6->t_srtt >> VAR_2));
  if (VAR_5->r_ctl.rc_rack_largest_cwnd)
   VAR_10 = VAR_5->r_ctl.rc_rack_largest_cwnd;
  else
   VAR_10 = VAR_6->snd_cwnd;
  VAR_11 = VAR_10 / VAR_9;
  if (VAR_11 == 0) {
   VAR_11 = FUNC_2(VAR_6);
  }
  VAR_8 = VAR_7 / VAR_11;

  if (VAR_8 && VAR_5->rc_pace_reduce) {
   int32_t VAR_12;

   VAR_12 = (VAR_8 / VAR_5->rc_pace_reduce);
   if (VAR_12 < VAR_8) {
    VAR_8 -= VAR_12;
   } else
    VAR_8 = 0;
  }
 } else {
  int VAR_13;
  uint64_t VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_14 = 0;
  for (VAR_13=0; VAR_13<VAR_1; VAR_13++) {
   if ((VAR_5->r_ctl.rc_gp_hist_filled == 0) &&
       (VAR_5->r_ctl.rc_gp_history[VAR_13] == 0))
    break;
   VAR_14 += VAR_5->r_ctl.rc_gp_history[VAR_13];
  }
  if (VAR_14 == 0) {




   goto old_method;
  }

  VAR_14 *= VAR_0;







  VAR_15 = VAR_14 * (uint64_t)VAR_5->rack_per_of_gp;
  VAR_14 += VAR_15;

  VAR_14 /= VAR_13;

  VAR_17 = (uint64_t) VAR_7 * (uint64_t)VAR_0;
  VAR_16 = VAR_17 / VAR_14;
  VAR_8 = (uint32_t)VAR_16;
 }
 if (VAR_5->r_enforce_min_pace &&
     (VAR_8 == 0)) {

  VAR_8 = VAR_5->r_enforce_min_pace;
 }
 if (VAR_8)
  FUNC_1(VAR_3, 1);
 else
  FUNC_1(VAR_4, 1);
 return (VAR_8);
}
