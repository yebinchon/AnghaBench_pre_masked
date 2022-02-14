
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int inflight; int timeStamp; int ininput; int inhpts; int pkts_out; int flex8; int flex7; int flex6; int flex5; int flex4; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct TYPE_7__ {int rc_sacked; int rc_prr_sndcnt; int rc_hpts_flags; } ;
struct tcp_rack {TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; int rc_in_persist; } ;
typedef int int32_t ;
struct TYPE_11__ {scalar_t__ t_logstate; int t_srtt; int t_rxtcur; } ;
struct TYPE_9__ {TYPE_2__* inp_socket; int inp_in_input; int inp_in_hpts; int inp_hptsslot; } ;
struct TYPE_8__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (struct timeval*) ;

__attribute__((used)) static void
FUNC_5(struct tcp_rack *VAR_3, uint32_t VAR_4, uint32_t VAR_5, int32_t VAR_6, uint8_t VAR_7)
{
 if (VAR_3->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_8;
  struct timeval VAR_9;

  FUNC_3(&VAR_8.u_bbr, 0, sizeof(VAR_8.u_bbr));
  VAR_8.u_bbr.flex1 = FUNC_1(VAR_3->rc_tp->t_srtt >> VAR_2);
  VAR_8.u_bbr.flex2 = VAR_5;
  VAR_8.u_bbr.flex3 = VAR_3->r_ctl.rc_hpts_flags;
  VAR_8.u_bbr.flex4 = VAR_6;
  VAR_8.u_bbr.flex5 = VAR_3->rc_inp->inp_hptsslot;
  VAR_8.u_bbr.flex6 = VAR_3->rc_tp->t_rxtcur;
  VAR_8.u_bbr.flex7 = VAR_3->rc_in_persist;
  VAR_8.u_bbr.flex8 = VAR_7;
  VAR_8.u_bbr.pkts_out = VAR_3->r_ctl.rc_prr_sndcnt;
  VAR_8.u_bbr.inhpts = VAR_3->rc_inp->inp_in_hpts;
  VAR_8.u_bbr.ininput = VAR_3->rc_inp->inp_in_input;
  VAR_8.u_bbr.timeStamp = FUNC_4(&VAR_9);
  VAR_8.u_bbr.inflight = FUNC_2(VAR_3->rc_tp, VAR_3->r_ctl.rc_sacked);
  FUNC_0(VAR_3->rc_tp, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_9);
 }
}
