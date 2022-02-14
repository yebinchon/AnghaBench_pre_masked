
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {scalar_t__ to_tsecr; int to_flags; } ;
struct tcpcb {int dummy; } ;
struct TYPE_2__ {int rc_last_rtt; int rc_lowest_rtt; } ;
struct tcp_bbr {int rc_use_google; scalar_t__ rc_tlp_rtx_out; TYPE_1__ r_ctl; int rc_tv; } ;
struct bbr_sendmap {int r_flags; int r_rtr_cnt; int* r_tim_lastsent; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_15 ;
 int FUNC_3 (struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*,int,int,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tcp_bbr*,struct bbr_sendmap*,int,int,scalar_t__,int,int ,int,scalar_t__,struct tcpopt*) ;
 int FUNC_6 (char*,struct bbr_sendmap*,struct tcp_bbr*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct tcpcb *VAR_16, struct tcp_bbr *VAR_17,
    struct bbr_sendmap *VAR_18, struct tcpopt *VAR_19, uint32_t VAR_20, int32_t VAR_21, uint32_t VAR_22)
{
 int32_t VAR_23;
 uint32_t VAR_24, VAR_25 = 0;

 if ((VAR_18->r_flags & VAR_0) ||
     (VAR_18->r_flags & VAR_12) ||
     (VAR_18->r_flags & VAR_9)) {

  return (0);
 }
 if (VAR_18->r_rtr_cnt == 1) {



  if (FUNC_2(VAR_20, VAR_18->r_tim_lastsent[0]))
   VAR_24 = VAR_20 - VAR_18->r_tim_lastsent[0];
  else
   VAR_24 = 1;
  if ((int)VAR_24 <= 0)
   VAR_24 = 1;
  VAR_17->r_ctl.rc_last_rtt = VAR_24;
  FUNC_5(VAR_17, VAR_18, VAR_24, VAR_20, VAR_19->to_tsecr, 0,
        VAR_4, VAR_18->r_tim_lastsent[0], VAR_21, VAR_19);
  return (1);
 }

 if ((VAR_15 == 1) &&
     (VAR_17->rc_use_google == 1) &&
     (VAR_21 == VAR_1) &&
     (VAR_19->to_flags & VAR_14) &&
     (VAR_19->to_tsecr != 0)) {

  VAR_24 = FUNC_7(&VAR_17->rc_tv) - VAR_19->to_tsecr;
  if (VAR_24 < 1)
   VAR_24 = 1;
  VAR_24 *= VAR_13;
  FUNC_5(VAR_17, VAR_18, VAR_24, VAR_20, VAR_19->to_tsecr, 0,
        VAR_7,
        VAR_18->r_tim_lastsent[(VAR_18->r_rtr_cnt-1)],
        VAR_21, VAR_19);
  return (1);
 }
 VAR_25 = FUNC_4(VAR_19->to_tsecr);
 if ((VAR_19->to_flags & VAR_14) &&
     (VAR_19->to_tsecr != 0) &&
     (VAR_21 == VAR_1) &&
     ((VAR_18->r_flags & VAR_2) == 0)) {




  uint32_t VAR_26;

  VAR_26 = VAR_10;
  for (VAR_23 = 0; VAR_23 < VAR_18->r_rtr_cnt; VAR_23++) {
   if ((FUNC_0(VAR_25, (VAR_18->r_tim_lastsent[VAR_23] - VAR_26))) &&
       (FUNC_1(VAR_25, (VAR_18->r_tim_lastsent[VAR_23] + VAR_26)))) {
    if (FUNC_2(VAR_20, VAR_18->r_tim_lastsent[VAR_23]))
     VAR_24 = VAR_20 - VAR_18->r_tim_lastsent[VAR_23];
    else
     VAR_24 = 1;
    if ((int)VAR_24 <= 0)
     VAR_24 = 1;
    VAR_17->r_ctl.rc_last_rtt = VAR_24;
    FUNC_5(VAR_17, VAR_18, VAR_24, VAR_20, VAR_19->to_tsecr, VAR_25, VAR_8,
          VAR_18->r_tim_lastsent[VAR_23], VAR_21, VAR_19);
    if ((VAR_23 + 1) < VAR_18->r_rtr_cnt) {

     FUNC_3(VAR_16, VAR_17, VAR_18, VAR_24, VAR_20, VAR_21);
    } else if (VAR_18->r_flags & VAR_11) {
     VAR_17->rc_tlp_rtx_out = 0;
    }
    return (1);
   }
  }

 }
 VAR_23 = VAR_18->r_rtr_cnt - 1;
 if (FUNC_2(VAR_20, VAR_18->r_tim_lastsent[VAR_23]))
  VAR_24 = VAR_20 - VAR_18->r_tim_lastsent[VAR_23];
 else
  goto not_sure;
 if (VAR_24 < VAR_17->r_ctl.rc_lowest_rtt) {
  if ((VAR_18->r_flags & VAR_2) == 0) {




   VAR_23 = VAR_18->r_rtr_cnt - 2;
   if (FUNC_2(VAR_20, VAR_18->r_tim_lastsent[VAR_23]))
    VAR_24 = VAR_20 - VAR_18->r_tim_lastsent[VAR_23];
   else
    VAR_24 = 1;
   FUNC_5(VAR_17, VAR_18, VAR_24, VAR_20, VAR_19->to_tsecr, VAR_25, VAR_3,
         VAR_18->r_tim_lastsent[VAR_23], VAR_21, VAR_19);
   FUNC_3(VAR_16, VAR_17, VAR_18, VAR_24, VAR_20, VAR_21);
  } else {




not_sure:
   FUNC_5(VAR_17, VAR_18, 0, VAR_20, VAR_19->to_tsecr, VAR_25,
         VAR_5, 0, VAR_21, VAR_19);
  }
 } else {




  if (VAR_18->r_flags & VAR_11)
   VAR_17->rc_tlp_rtx_out = 0;
  if ((VAR_18->r_flags & VAR_2) == 0)
   FUNC_5(VAR_17, VAR_18, VAR_24, VAR_20, VAR_19->to_tsecr, VAR_25,
         VAR_6, 0, VAR_21, VAR_19);
  else
   FUNC_5(VAR_17, VAR_18, 0, VAR_20, VAR_19->to_tsecr, VAR_25,
         VAR_5, 0, VAR_21, VAR_19);
  return (1);
 }
 return (0);
}
