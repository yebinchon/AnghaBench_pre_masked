
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex7; scalar_t__ flex8; int flex6; int flex4; scalar_t__ flex3; scalar_t__ flex5; scalar_t__ flex2; scalar_t__ flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
struct TYPE_6__ {int rc_bbr_enters_probertt; int rc_pkt_epoch_loss_rate; int rc_rcvtime; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
struct TYPE_10__ {scalar_t__ t_logstate; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, int VAR_3)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_4;

  FUNC_1(VAR_2, &VAR_4.u_bbr, VAR_2->r_ctl.rc_rcvtime);
  VAR_4.u_bbr.flex1 = 0;
  VAR_4.u_bbr.flex2 = 0;
  VAR_4.u_bbr.flex5 = 0;
  VAR_4.u_bbr.flex3 = 0;
  VAR_4.u_bbr.flex4 = VAR_2->r_ctl.rc_pkt_epoch_loss_rate;
  VAR_4.u_bbr.flex7 = VAR_3;
  VAR_4.u_bbr.flex6 = VAR_2->r_ctl.rc_bbr_enters_probertt;
  VAR_4.u_bbr.flex8 = 0;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_4, 0, &VAR_2->rc_tv);
 }
}
