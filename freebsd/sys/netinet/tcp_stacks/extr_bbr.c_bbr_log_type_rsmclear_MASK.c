
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* applimited; int flex8; int flex7; int flex6; int flex5; int flex4; int flex3; int flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
typedef void* uint32_t ;
struct tcp_bbr {int rc_tv; TYPE_2__* rc_inp; TYPE_4__* rc_tp; } ;
struct bbr_sendmap {int r_flags; int * r_tim_lastsent; int r_dupack; int r_rtr_cnt; int r_delivered; int r_end; int r_start; } ;
struct TYPE_8__ {scalar_t__ t_logstate; } ;
struct TYPE_6__ {TYPE_1__* inp_socket; } ;
struct TYPE_5__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_3__*,void*) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, uint32_t VAR_3, struct bbr_sendmap *VAR_4,
        uint32_t VAR_5, uint32_t VAR_6)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_7;

  FUNC_1(VAR_2, &VAR_7.u_bbr, VAR_3);
  VAR_7.u_bbr.flex1 = VAR_6;
  VAR_7.u_bbr.flex2 = VAR_4->r_start;
  VAR_7.u_bbr.flex3 = VAR_4->r_end;
  VAR_7.u_bbr.flex4 = VAR_4->r_delivered;
  VAR_7.u_bbr.flex5 = VAR_4->r_rtr_cnt;
  VAR_7.u_bbr.flex6 = VAR_4->r_dupack;
  VAR_7.u_bbr.flex7 = VAR_4->r_tim_lastsent[0];
  VAR_7.u_bbr.flex8 = VAR_4->r_flags;

  VAR_7.u_bbr.applimited = VAR_5;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_2->rc_tv);
 }
}
