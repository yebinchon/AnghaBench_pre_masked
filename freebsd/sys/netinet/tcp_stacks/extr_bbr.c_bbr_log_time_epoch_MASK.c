
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int flex7; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct TYPE_7__ {int rc_lost; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
struct TYPE_12__ {int sb_hiwat; int sb_lowat; } ;
struct TYPE_11__ {scalar_t__ t_logstate; } ;
struct TYPE_9__ {TYPE_2__* inp_socket; } ;
struct TYPE_8__ {TYPE_6__ so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,TYPE_6__*,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 if (VAR_2 && (VAR_3->rc_tp->t_logstate != VAR_1)) {
  union tcp_log_stackspecific VAR_7;

  FUNC_1(VAR_3, &VAR_7.u_bbr, VAR_4);
  VAR_7.u_bbr.flex1 = VAR_3->r_ctl.rc_lost;
  VAR_7.u_bbr.flex2 = VAR_3->rc_inp->inp_socket->so_snd.sb_lowat;
  VAR_7.u_bbr.flex3 = VAR_3->rc_inp->inp_socket->so_snd.sb_hiwat;
  VAR_7.u_bbr.flex7 = VAR_5;
  FUNC_0(VAR_3->rc_tp, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_3->rc_tv);
 }
}
