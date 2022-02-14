
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flex1; int inflight; int timeStamp; int flex8; int flex5; int flex4; int flex3; int flex2; } ;
union tcp_log_stackspecific {TYPE_1__ u_bbr; } ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct TYPE_8__ {int rc_sacked; int sack_moved_extra; int sack_noextra_move; int sack_count; int ack_count; } ;
struct tcp_rack {TYPE_4__* rc_inp; TYPE_5__* rc_tp; TYPE_2__ r_ctl; int sack_attack_disable; } ;
typedef int log ;
struct TYPE_11__ {scalar_t__ t_logstate; } ;
struct TYPE_10__ {TYPE_3__* inp_socket; } ;
struct TYPE_9__ {int so_snd; int so_rcv; } ;


 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (union tcp_log_stackspecific*,int ,int) ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(struct tcp_rack *VAR_2, uint32_t VAR_3)
{





 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_4;
  struct timeval VAR_5;


  FUNC_2(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.u_bbr.flex1 = VAR_3 * 1000;
  VAR_4.u_bbr.flex2 = VAR_2->r_ctl.ack_count;
  VAR_4.u_bbr.flex3 = VAR_2->r_ctl.sack_count;
  VAR_4.u_bbr.flex4 = VAR_2->r_ctl.sack_noextra_move;
  VAR_4.u_bbr.flex5 = VAR_2->r_ctl.sack_moved_extra;
  VAR_4.u_bbr.flex8 = VAR_2->sack_attack_disable;
  VAR_4.u_bbr.timeStamp = FUNC_3(&VAR_5);
  VAR_4.u_bbr.inflight = FUNC_1(VAR_2->rc_tp, VAR_2->r_ctl.rc_sacked);
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_4, 0, &VAR_5);
 }
}
