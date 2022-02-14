
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flex1; int flex2; int flex3; int flex4; int bw_inuse; int flex5; int flex6; int flex8; int pkts_out; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
typedef int uint64_t ;
typedef int uint32_t ;
struct tcp_bbr {int skip_gain; int gain_is_limited; int bbr_hdrw_pacing; int rc_tv; TYPE_2__* rc_inp; TYPE_4__* rc_tp; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {scalar_t__ t_logstate; int t_maxseg; } ;
struct TYPE_6__ {TYPE_1__* inp_socket; } ;
struct TYPE_5__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, const struct ifnet *VAR_3,
    uint64_t VAR_4, uint64_t VAR_5, int VAR_6, uint32_t VAR_7,
    int VAR_8)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_9;

  FUNC_1(VAR_2, &VAR_9.u_bbr, VAR_7);
  VAR_9.u_bbr.flex1 = ((VAR_5 >> 32) & 0x00000000ffffffff);
  VAR_9.u_bbr.flex2 = (VAR_5 & 0x00000000ffffffff);
  VAR_9.u_bbr.flex3 = (((uint64_t)VAR_3 >> 32) & 0x00000000ffffffff);
  VAR_9.u_bbr.flex4 = ((uint64_t)VAR_3 & 0x00000000ffffffff);
  VAR_9.u_bbr.bw_inuse = VAR_4;
  VAR_9.u_bbr.flex5 = VAR_6;
  VAR_9.u_bbr.flex6 = VAR_8;
  VAR_9.u_bbr.flex8 = VAR_2->skip_gain;
  VAR_9.u_bbr.flex8 <<= 1;
  VAR_9.u_bbr.flex8 |= VAR_2->gain_is_limited;
  VAR_9.u_bbr.flex8 <<= 1;
  VAR_9.u_bbr.flex8 |= VAR_2->bbr_hdrw_pacing;
  VAR_9.u_bbr.pkts_out = VAR_2->rc_tp->t_maxseg;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_9, 0, &VAR_2->rc_tv);
 }
}
