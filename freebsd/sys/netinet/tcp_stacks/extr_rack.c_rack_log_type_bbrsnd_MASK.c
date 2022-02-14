
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int flex7; int inflight; int timeStamp; int flex8; int flex2; int flex1; int ininput; int inhpts; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct TYPE_7__ {int rc_hpts_flags; int rc_sacked; int rc_prr_sndcnt; } ;
struct tcp_rack {TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; int rc_in_persist; } ;
struct TYPE_11__ {scalar_t__ t_logstate; } ;
struct TYPE_9__ {TYPE_2__* inp_socket; int inp_in_input; int inp_in_hpts; } ;
struct TYPE_8__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(struct tcp_rack *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_6;
  struct timeval VAR_7;

  FUNC_2(&VAR_6.u_bbr, 0, sizeof(VAR_6.u_bbr));
  VAR_6.u_bbr.inhpts = VAR_2->rc_inp->inp_in_hpts;
  VAR_6.u_bbr.ininput = VAR_2->rc_inp->inp_in_input;
  VAR_6.u_bbr.flex1 = VAR_4;
  VAR_6.u_bbr.flex2 = VAR_2->r_ctl.rc_prr_sndcnt;
  VAR_6.u_bbr.flex7 = (0x0000ffff & VAR_2->r_ctl.rc_hpts_flags);
  VAR_6.u_bbr.flex8 = VAR_2->rc_in_persist;
  VAR_6.u_bbr.timeStamp = FUNC_3(&VAR_7);
  VAR_6.u_bbr.inflight = FUNC_1(VAR_2->rc_tp, VAR_2->r_ctl.rc_sacked);
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_6, 0, &VAR_7);
 }
}
