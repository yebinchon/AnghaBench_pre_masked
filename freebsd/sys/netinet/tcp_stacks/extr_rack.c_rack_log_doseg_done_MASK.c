
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flex3; int inflight; int timeStamp; int flex8; int flex7; int applimited; int flex5; int flex4; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_1__ u_bbr; } ;
typedef int uint32_t ;
struct timeval {int dummy; } ;
struct TYPE_8__ {int rc_sacked; int rc_pace_min_segs; int rc_prr_sndcnt; int rc_hpts_flags; } ;
struct tcp_rack {TYPE_4__* rc_inp; TYPE_5__* rc_tp; TYPE_2__ r_ctl; int rc_in_persist; int r_wanted_output; } ;
typedef int log ;
typedef void* int32_t ;
struct TYPE_11__ {scalar_t__ t_logstate; } ;
struct TYPE_10__ {TYPE_3__* inp_socket; } ;
struct TYPE_9__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (union tcp_log_stackspecific*,int ,int) ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(struct tcp_rack *VAR_2, uint32_t VAR_3, int32_t VAR_4, int32_t VAR_5, int VAR_6)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_7;
  struct timeval VAR_8;

  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.u_bbr.flex1 = VAR_5;
  VAR_7.u_bbr.flex2 = VAR_4;
  VAR_7.u_bbr.flex3 = VAR_6;
  VAR_7.u_bbr.flex4 = VAR_2->r_ctl.rc_hpts_flags;
  VAR_7.u_bbr.flex5 = VAR_2->r_ctl.rc_prr_sndcnt;
  VAR_7.u_bbr.applimited = VAR_2->r_ctl.rc_pace_min_segs;
  VAR_7.u_bbr.flex7 = VAR_2->r_wanted_output;
  VAR_7.u_bbr.flex8 = VAR_2->rc_in_persist;
  VAR_7.u_bbr.timeStamp = FUNC_3(&VAR_8);
  VAR_7.u_bbr.inflight = FUNC_1(VAR_2->rc_tp, VAR_2->r_ctl.rc_sacked);
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_8);
 }
}
