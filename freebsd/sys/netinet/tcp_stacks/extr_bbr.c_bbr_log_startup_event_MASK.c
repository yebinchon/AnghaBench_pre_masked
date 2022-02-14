
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cur_del_rate; int flex8; int flex6; int flex5; scalar_t__ flex4; void* flex3; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {int rc_bbr_lastbtlbw; int rc_lost_at_startup; int rc_target_at_state; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
struct TYPE_10__ {scalar_t__ t_logstate; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,void*) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint8_t VAR_7)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_8;

  FUNC_1(VAR_2, &VAR_8.u_bbr, VAR_3);
  VAR_8.u_bbr.flex1 = VAR_4;
  VAR_8.u_bbr.flex2 = VAR_5;
  VAR_8.u_bbr.flex3 = VAR_6;
  VAR_8.u_bbr.flex4 = 0;
  VAR_8.u_bbr.flex5 = VAR_2->r_ctl.rc_target_at_state;
  VAR_8.u_bbr.flex6 = VAR_2->r_ctl.rc_lost_at_startup;
  VAR_8.u_bbr.flex8 = VAR_7;
  VAR_8.u_bbr.cur_del_rate = VAR_2->r_ctl.rc_bbr_lastbtlbw;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_2->rc_tv);
 }
}
