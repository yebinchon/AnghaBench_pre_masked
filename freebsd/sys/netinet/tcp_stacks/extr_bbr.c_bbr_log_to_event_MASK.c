
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex8; int flex6; void* flex5; void* flex4; int flex3; scalar_t__ flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_6__ {scalar_t__ rc_resend; int rc_hpts_flags; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; int bbr_timer_src; } ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ t_logstate; int t_rxtcur; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcp_bbr*,TYPE_4__*,void*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_2, uint32_t VAR_3, int32_t VAR_4)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_5;
  uint64_t VAR_6;

  FUNC_2(VAR_2, &VAR_5.u_bbr, VAR_3);
  VAR_5.u_bbr.flex1 = VAR_2->bbr_timer_src;
  VAR_5.u_bbr.flex2 = 0;
  VAR_5.u_bbr.flex3 = VAR_2->r_ctl.rc_hpts_flags;
  VAR_6 = (uint64_t)(VAR_2->r_ctl.rc_resend);
  VAR_6 >>= 32;
  VAR_6 &= 0x00000000ffffffff;
  VAR_5.u_bbr.flex4 = (uint32_t)VAR_6;
  VAR_6 = (uint64_t)VAR_2->r_ctl.rc_resend;
  VAR_6 &= 0x00000000ffffffff;
  VAR_5.u_bbr.flex5 = (uint32_t)VAR_6;
  VAR_5.u_bbr.flex6 = FUNC_1(VAR_2->rc_tp->t_rxtcur);
  VAR_5.u_bbr.flex8 = VAR_4;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_5, 0, &VAR_2->rc_tv);
 }
}
