
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int flex8; int inflight; int timeStamp; int ininput; int inhpts; int flex6; int flex5; int flex4; int flex3; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef void* uint32_t ;
struct timeval {int dummy; } ;
struct TYPE_7__ {int rc_sacked; } ;
struct tcp_rack {TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_end; int r_start; int r_dupack; int r_flags; } ;
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
FUNC_4(struct tcp_rack *VAR_2, struct rack_sendmap *VAR_3, uint32_t VAR_4, uint32_t VAR_5, int VAR_6)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_7;
  struct timeval VAR_8;
  FUNC_2(&VAR_7.u_bbr, 0, sizeof(VAR_7.u_bbr));
  VAR_7.u_bbr.flex1 = VAR_4;
  VAR_7.u_bbr.flex2 = VAR_5;
  VAR_7.u_bbr.flex3 = VAR_3->r_flags;
  VAR_7.u_bbr.flex4 = VAR_3->r_dupack;
  VAR_7.u_bbr.flex5 = VAR_3->r_start;
  VAR_7.u_bbr.flex6 = VAR_3->r_end;
  VAR_7.u_bbr.flex8 = VAR_6;
  VAR_7.u_bbr.inhpts = VAR_2->rc_inp->inp_in_hpts;
  VAR_7.u_bbr.ininput = VAR_2->rc_inp->inp_in_input;
  VAR_7.u_bbr.timeStamp = FUNC_3(&VAR_8);
  VAR_7.u_bbr.inflight = FUNC_1(VAR_2->rc_tp, VAR_2->r_ctl.rc_sacked);
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_8);
 }
}
