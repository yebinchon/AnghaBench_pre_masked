
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex1; int flex8; int flex4; int flex3; int flex2; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct tcpcb {int t_acktime; int t_maxunacktime; } ;
struct TYPE_6__ {int rc_rcvtime; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
struct TYPE_10__ {scalar_t__ t_logstate; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_2(struct tcp_bbr *VAR_3, struct tcpcb *VAR_4, uint32_t VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_2 && (VAR_3->rc_tp->t_logstate != VAR_1)) {
  union tcp_log_stackspecific VAR_8;

  FUNC_1(VAR_3, &VAR_8.u_bbr, VAR_3->r_ctl.rc_rcvtime);
  VAR_8.u_bbr.flex1 = VAR_7;
  VAR_8.u_bbr.flex2 = VAR_5;
  VAR_8.u_bbr.flex3 = VAR_4->t_maxunacktime;
  VAR_8.u_bbr.flex4 = VAR_4->t_acktime;
  VAR_8.u_bbr.flex8 = VAR_6;
  FUNC_0(VAR_3->rc_tp, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_3->rc_tv);
 }
}
