
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flex2; int flex4; int flex7; int flex8; scalar_t__ flex5; int flex3; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; TYPE_3__* t_inpcb; } ;
struct TYPE_5__ {int rc_pace_max_segs; int rc_pace_min_segs; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct TYPE_7__ {TYPE_2__* inp_socket; } ;
struct TYPE_6__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_2, struct tcp_bbr *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_2->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_7;
  struct timeval VAR_8;
  uint32_t VAR_9;

  VAR_9 = FUNC_2(&VAR_8);
  FUNC_1(VAR_3, &VAR_7.u_bbr, VAR_9);
  VAR_7.u_bbr.flex1 = VAR_3->r_ctl.rc_pace_min_segs;
  VAR_7.u_bbr.flex2 = VAR_6;
  VAR_7.u_bbr.flex3 = VAR_3->r_ctl.rc_pace_max_segs;
  VAR_7.u_bbr.flex4 = VAR_4;
  VAR_7.u_bbr.flex5 = 0;
  VAR_7.u_bbr.flex7 = VAR_5;
  VAR_7.u_bbr.flex8 = 1;
  FUNC_0(VAR_2, ((void*)0),
      &VAR_2->t_inpcb->inp_socket->so_rcv,
      &VAR_2->t_inpcb->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_8);
 }
}
