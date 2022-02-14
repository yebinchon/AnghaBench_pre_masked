
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


struct TYPE_11__ {int flex3; int flex8; int flex7; int flex4; scalar_t__ pkts_out; scalar_t__ flex6; void* flex5; void* lt_epoch; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_5__ u_bbr; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct tcpopt {int dummy; } ;
struct tcphdr {int dummy; } ;
struct TYPE_8__ {int rc_target_at_state; int rc_lost_bytes; } ;
struct tcp_bbr {int rc_tv; TYPE_4__* rc_inp; TYPE_6__* rc_tp; int rc_in_persist; int r_wanted_output; TYPE_2__ r_ctl; } ;
struct TYPE_7__ {int rcv_tstmp; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int int32_t ;
struct TYPE_12__ {scalar_t__ t_logstate; } ;
struct TYPE_10__ {TYPE_3__* inp_socket; } ;
struct TYPE_9__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,struct tcphdr*,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_5__*,int ) ;
 int FUNC_2 (struct mbuf*,struct timespec*) ;
 scalar_t__ FUNC_3 (struct timeval*) ;
 void* FUNC_4 (struct timeval*) ;

__attribute__((used)) static void
FUNC_5(struct tcp_bbr *VAR_4, struct tcphdr *VAR_5, struct tcpopt *VAR_6, uint32_t VAR_7,
    uint16_t VAR_8, uint32_t VAR_9, int32_t VAR_10, struct mbuf *VAR_11)
{
 if (VAR_4->rc_tp->t_logstate != VAR_3) {
  union tcp_log_stackspecific VAR_12;
  struct timeval VAR_13;

  FUNC_1(VAR_4, &VAR_12.u_bbr, VAR_9);
  VAR_12.u_bbr.flex1 = VAR_8;
  VAR_12.u_bbr.flex2 = VAR_4->r_ctl.rc_lost_bytes;
  if (VAR_11) {
   struct timespec VAR_14;

   VAR_12.u_bbr.flex3 = VAR_11->m_flags;
   if (VAR_11->m_flags & VAR_0) {
    FUNC_2(VAR_11, &VAR_14);
    VAR_13.tv_sec = VAR_14.tv_sec;
    VAR_13.tv_usec = VAR_14.tv_nsec / 1000;
    VAR_12.u_bbr.lt_epoch = FUNC_4(&VAR_13);
   } else {
    VAR_12.u_bbr.lt_epoch = 0;
   }
   if (VAR_11->m_flags & VAR_1) {
    VAR_13.tv_sec = VAR_11->m_pkthdr.rcv_tstmp / 1000000000;
    VAR_13.tv_usec = (VAR_11->m_pkthdr.rcv_tstmp % 1000000000) / 1000;
    VAR_12.u_bbr.flex5 = FUNC_4(&VAR_13);
   } else {

    VAR_12.u_bbr.flex5 = 0;
   }

   VAR_12.u_bbr.pkts_out = FUNC_3(&VAR_13);
  } else {
   VAR_12.u_bbr.flex3 = 0;
   VAR_12.u_bbr.flex5 = 0;
   VAR_12.u_bbr.flex6 = 0;
   VAR_12.u_bbr.pkts_out = 0;
  }
  VAR_12.u_bbr.flex4 = VAR_4->r_ctl.rc_target_at_state;
  VAR_12.u_bbr.flex7 = VAR_4->r_wanted_output;
  VAR_12.u_bbr.flex8 = VAR_4->rc_in_persist;
  FUNC_0(VAR_4->rc_tp, VAR_5,
      &VAR_4->rc_inp->inp_socket->so_rcv,
      &VAR_4->rc_inp->inp_socket->so_snd,
      VAR_2, 0,
      VAR_7, &VAR_12, 1, &VAR_4->rc_tv);
 }
}
