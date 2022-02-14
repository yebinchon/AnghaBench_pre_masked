
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flex4; int flex7; int flex8; int inflight; void* timeStamp; int flex6; int flex5; int flex3; int flex1; } ;
union tcp_log_stackspecific {TYPE_1__ u_bbr; } ;
typedef void* uint32_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; TYPE_4__* t_inpcb; } ;
struct TYPE_6__ {int rc_sacked; int rc_pace_max_segs; int rc_pace_min_segs; } ;
struct tcp_rack {TYPE_2__ r_ctl; int rc_tp; } ;
typedef int log ;
typedef int int32_t ;
struct TYPE_8__ {TYPE_3__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (union tcp_log_stackspecific*,int ,int) ;
 void* FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_2, struct tcp_rack *VAR_3, int VAR_4, int VAR_5, int32_t VAR_6, int VAR_7)
{
 if (VAR_2->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_8;
  struct timeval VAR_9;
  uint32_t VAR_10;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_10 = FUNC_3(&VAR_9);
  VAR_8.u_bbr.flex1 = VAR_3->r_ctl.rc_pace_min_segs;
  VAR_8.u_bbr.flex3 = VAR_3->r_ctl.rc_pace_max_segs;
  VAR_8.u_bbr.flex4 = VAR_4;
  VAR_8.u_bbr.flex5 = VAR_6;
  VAR_8.u_bbr.flex6 = VAR_3->r_ctl.rc_sacked;
  VAR_8.u_bbr.flex7 = VAR_5;
  VAR_8.u_bbr.flex8 = VAR_7;
  VAR_8.u_bbr.timeStamp = FUNC_3(&VAR_9);
  VAR_8.u_bbr.inflight = FUNC_1(VAR_3->rc_tp, VAR_3->r_ctl.rc_sacked);
  FUNC_0(VAR_2, ((void*)0),
      &VAR_2->t_inpcb->inp_socket->so_rcv,
      &VAR_2->t_inpcb->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_9);
 }
}
