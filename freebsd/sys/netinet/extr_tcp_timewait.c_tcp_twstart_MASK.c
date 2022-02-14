
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_short ;
struct tcptw {int rcv_nxt; int tw_cred; int tw_so_options; scalar_t__ tw_time; int t_starttime; int irs; int iss; int snd_nxt; scalar_t__ ts_offset; scalar_t__ t_recent; scalar_t__ last_win; struct inpcb* tw_inpcb; } ;
struct tcpcb {long rcv_scale; int t_maxseg; int rcv_adv; int rcv_nxt; int t_flags; int t_starttime; int irs; int iss; int snd_nxt; scalar_t__ ts_offset; scalar_t__ ts_recent; struct inpcb* t_inpcb; } ;
struct TYPE_4__ {int sb_hiwat; } ;
struct socket {int so_state; int so_cred; int so_options; TYPE_2__ so_rcv; } ;
struct TYPE_3__ {int inc_flags; } ;
struct inpcb {int inp_flags; struct tcptw* inp_ppcb; struct socket* inp_socket; int inp_faddr; int in6p_faddr; TYPE_1__ inp_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct socket*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inpcb*) ;
 int FUNC_11 (struct inpcb*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,long) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct socket*) ;
 int FUNC_16 (struct socket*) ;
 struct tcpcb* FUNC_17 (struct tcpcb*) ;
 int FUNC_18 (struct tcpcb*) ;
 int FUNC_19 (struct tcpcb*,int ) ;
 int FUNC_20 (struct tcptw*,int ) ;
 struct tcptw* FUNC_21 (int) ;
 int FUNC_22 (struct tcptw*,int ) ;
 struct tcptw* FUNC_23 (int ,int ) ;

void
FUNC_24(struct tcpcb *VAR_15)
{
 struct tcptw VAR_16, *VAR_17;
 struct inpcb *VAR_18 = VAR_15->t_inpcb;
 struct socket *VAR_19;
 uint32_t VAR_20;
 bool VAR_21, VAR_22;




 FUNC_3();
 FUNC_0(VAR_18);


 FUNC_2((VAR_18->inp_flags & VAR_1) == 0, ("tcp_twstart: "
     "(inp->inp_flags & INP_DROPPED) != 0"));

 if (VAR_13) {
   VAR_22 = 0;

 } else
  VAR_22 = 0;





 FUNC_19(VAR_15, VAR_6);

 if (VAR_22)
  VAR_17 = &VAR_16;
 else
  VAR_17 = FUNC_23(VAR_14, VAR_4);
 if (VAR_17 == ((void*)0)) {
  VAR_17 = FUNC_21(1);
  if (VAR_17 == ((void*)0)) {
   VAR_15 = FUNC_17(VAR_15);
   if (VAR_15 != ((void*)0))
    FUNC_1(VAR_18);
   return;
  }
 }




 VAR_17->tw_inpcb = VAR_18;




 VAR_19 = VAR_18->inp_socket;
 VAR_20 = FUNC_13(FUNC_12(FUNC_14(&VAR_19->so_rcv), 0),
     (long)VAR_7 << VAR_15->rcv_scale);
 if (VAR_20 < (VAR_19->so_rcv.sb_hiwat / 4) &&
     VAR_20 < VAR_15->t_maxseg)
  VAR_20 = 0;
 if (FUNC_4(VAR_15->rcv_adv, VAR_15->rcv_nxt) &&
     VAR_20 < (VAR_15->rcv_adv - VAR_15->rcv_nxt))
  VAR_20 = (VAR_15->rcv_adv - VAR_15->rcv_nxt);
 VAR_17->last_win = (u_short)(VAR_20 >> VAR_15->rcv_scale);




 if ((VAR_15->t_flags & (VAR_11|VAR_10|VAR_9)) ==
     (VAR_11|VAR_10)) {
  VAR_17->t_recent = VAR_15->ts_recent;
  VAR_17->ts_offset = VAR_15->ts_offset;
 } else {
  VAR_17->t_recent = 0;
  VAR_17->ts_offset = 0;
 }

 VAR_17->snd_nxt = VAR_15->snd_nxt;
 VAR_17->rcv_nxt = VAR_15->rcv_nxt;
 VAR_17->iss = VAR_15->iss;
 VAR_17->irs = VAR_15->irs;
 VAR_17->t_starttime = VAR_15->t_starttime;
 VAR_17->tw_time = 0;






 VAR_21 = VAR_15->t_flags & VAR_8;
 FUNC_18(VAR_15);
 FUNC_16(VAR_19);
 VAR_17->tw_so_options = VAR_19->so_options;
 VAR_18->inp_flags |= VAR_3;
 if (VAR_21)
  FUNC_22(VAR_17, VAR_12);
 if (VAR_22)
  FUNC_10(VAR_18);
 else {
  FUNC_11(VAR_18);
  VAR_17->tw_cred = FUNC_7(VAR_19->so_cred);
  VAR_18->inp_ppcb = VAR_17;
  FUNC_6(VAR_6);
  FUNC_20(VAR_17, 0);
 }





 if (VAR_18->inp_flags & VAR_2) {
  FUNC_2(VAR_19->so_state & VAR_5,
      ("tcp_twstart: !SS_PROTOREF"));
  VAR_18->inp_flags &= ~VAR_2;
  FUNC_1(VAR_18);
  FUNC_5(VAR_19);
  VAR_19->so_state &= ~VAR_5;
  FUNC_15(VAR_19);
 } else
  FUNC_1(VAR_18);
}
