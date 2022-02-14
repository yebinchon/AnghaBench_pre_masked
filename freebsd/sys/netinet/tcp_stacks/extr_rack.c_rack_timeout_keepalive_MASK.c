
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tcptemp {int tt_t; int tt_ipgen; } ;
struct tcpcb {scalar_t__ t_state; scalar_t__ t_rcvtime; scalar_t__ snd_una; int rcv_nxt; struct inpcb* t_inpcb; TYPE_1__* t_timers; } ;
struct TYPE_5__ {int rc_hpts_flags; } ;
struct tcp_rack {int rc_inp; TYPE_2__ r_ctl; } ;
struct mbuf {int dummy; } ;
struct inpcb {TYPE_3__* inp_socket; } ;
struct TYPE_6__ {int so_options; } ;
struct TYPE_4__ {int tt_flags; } ;


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
 int VAR_7 ;
 int FUNC_3 (struct tcptemp*,int ) ;
 int FUNC_4 (struct tcp_rack*,int ,int ) ;
 int FUNC_5 (struct tcp_rack*,struct tcpcb*,int ,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct tcpcb*,int ,int *,struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 struct tcptemp* FUNC_8 (struct inpcb*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_9(struct tcpcb *VAR_13, struct tcp_rack *VAR_14, uint32_t VAR_15)
{
 struct tcptemp *VAR_16;
 struct inpcb *VAR_17;

 if (VAR_13->t_timers->tt_flags & VAR_7) {
  return (1);
 }
 VAR_14->r_ctl.rc_hpts_flags &= ~VAR_2;
 VAR_17 = VAR_13->t_inpcb;
 FUNC_4(VAR_14, VAR_3, 0);




 FUNC_0(VAR_11);
 if (VAR_13->t_state < VAR_6)
  goto dropit;
 if ((VAR_8 || VAR_17->inp_socket->so_options & VAR_4) &&
     VAR_13->t_state <= VAR_5) {
  if (VAR_12 - VAR_13->t_rcvtime >= FUNC_1(VAR_13) + FUNC_2(VAR_13))
   goto dropit;
  FUNC_0(VAR_10);
  VAR_16 = FUNC_8(VAR_17);
  if (VAR_16) {
   FUNC_6(VAR_13, VAR_16->tt_ipgen,
       &VAR_16->tt_t, (struct mbuf *)((void*)0),
       VAR_13->rcv_nxt, VAR_13->snd_una - 1, 0);
   FUNC_3(VAR_16, VAR_1);
  }
 }
 FUNC_5(VAR_14, VAR_13, VAR_15, 0, 0, 0);
 return (1);
dropit:
 FUNC_0(VAR_9);
 FUNC_7(VAR_14->rc_inp, VAR_0);
 return (1);
}
