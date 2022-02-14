
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcptemp {int tt_t; int tt_ipgen; } ;
struct tcpcb {scalar_t__ t_state; scalar_t__ t_rcvtime; scalar_t__ snd_una; int rcv_nxt; struct inpcb* t_inpcb; } ;
struct TYPE_3__ {int rc_hpts_flags; } ;
struct tcp_bbr {int rc_inp; TYPE_1__ r_ctl; scalar_t__ rc_all_timers_stopped; } ;
struct mbuf {int dummy; } ;
struct inpcb {TYPE_2__* inp_socket; } ;
struct TYPE_4__ {int so_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 scalar_t__ FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcp_bbr*,int ,int ) ;
 int FUNC_4 (struct tcp_bbr*,struct tcpcb*,int ,int,int ,int ) ;
 int FUNC_5 (struct tcptemp*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct tcpcb*,int ,int *,struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 struct tcptemp* FUNC_8 (struct inpcb*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct tcpcb *VAR_12, struct tcp_bbr *VAR_13, uint32_t VAR_14)
{
 struct tcptemp *VAR_15;
 struct inpcb *VAR_16;

 if (VAR_13->rc_all_timers_stopped) {
  return (1);
 }
 VAR_13->r_ctl.rc_hpts_flags &= ~VAR_3;
 VAR_16 = VAR_12->t_inpcb;
 FUNC_3(VAR_13, VAR_14, VAR_0);




 FUNC_0(VAR_10);
 if (VAR_12->t_state < VAR_6)
  goto dropit;
 if ((VAR_7 || VAR_16->inp_socket->so_options & VAR_4) &&
     VAR_12->t_state <= VAR_5) {
  if (VAR_11 - VAR_12->t_rcvtime >= FUNC_1(VAR_12) + FUNC_2(VAR_12))
   goto dropit;
  FUNC_0(VAR_9);
  VAR_15 = FUNC_8(VAR_16);
  if (VAR_15) {
   FUNC_6(VAR_12, VAR_15->tt_ipgen,
       &VAR_15->tt_t, (struct mbuf *)((void*)0),
       VAR_12->rcv_nxt, VAR_12->snd_una - 1, 0);
   FUNC_5(VAR_15, VAR_2);
  }
 }
 FUNC_4(VAR_13, VAR_12, VAR_14, 4, 0, 0);
 return (1);
dropit:
 FUNC_0(VAR_8);
 FUNC_7(VAR_13->rc_inp, VAR_1);
 return (1);
}
