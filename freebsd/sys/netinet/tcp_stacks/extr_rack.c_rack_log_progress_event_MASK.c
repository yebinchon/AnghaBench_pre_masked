
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flex1; int flex8; int inflight; int timeStamp; int flex4; int flex3; int flex2; int ininput; int inhpts; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; int t_acktime; int t_maxunacktime; } ;
struct TYPE_5__ {int rc_sacked; } ;
struct tcp_rack {TYPE_3__* rc_inp; TYPE_1__ r_ctl; int rc_tp; } ;
struct TYPE_7__ {TYPE_2__* inp_socket; int inp_in_input; int inp_in_hpts; } ;
struct TYPE_6__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static inline void
FUNC_4(struct tcp_rack *VAR_3, struct tcpcb *VAR_4, uint32_t VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_2 && (VAR_4->t_logstate != VAR_1)) {
  union tcp_log_stackspecific VAR_8;
  struct timeval VAR_9;

  FUNC_2(&VAR_8.u_bbr, 0, sizeof(VAR_8.u_bbr));
  VAR_8.u_bbr.inhpts = VAR_3->rc_inp->inp_in_hpts;
  VAR_8.u_bbr.ininput = VAR_3->rc_inp->inp_in_input;
  VAR_8.u_bbr.flex1 = VAR_7;
  VAR_8.u_bbr.flex2 = VAR_5;
  VAR_8.u_bbr.flex3 = VAR_4->t_maxunacktime;
  VAR_8.u_bbr.flex4 = VAR_4->t_acktime;
  VAR_8.u_bbr.flex8 = VAR_6;
  VAR_8.u_bbr.timeStamp = FUNC_3(&VAR_9);
  VAR_8.u_bbr.inflight = FUNC_1(VAR_3->rc_tp, VAR_3->r_ctl.rc_sacked);
  FUNC_0(VAR_4, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_9);
 }
}
