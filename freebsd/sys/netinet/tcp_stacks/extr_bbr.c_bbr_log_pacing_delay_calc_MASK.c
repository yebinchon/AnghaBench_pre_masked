
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flex5; int flex8; int flex7; void* flex6; void* flex4; void* flex3; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct tcp_bbr {int rc_tv; TYPE_2__* rc_inp; TYPE_4__* rc_tp; } ;
struct TYPE_8__ {scalar_t__ t_logstate; } ;
struct TYPE_6__ {TYPE_1__* inp_socket; } ;
struct TYPE_5__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *,int ,int ,void*,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_3__*,void*) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, uint16_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6, uint64_t VAR_7, uint32_t VAR_8, int VAR_9)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_10;

  FUNC_1(VAR_2, &VAR_10.u_bbr, VAR_5);
  VAR_10.u_bbr.flex1 = VAR_6;
  VAR_10.u_bbr.flex2 = VAR_4;
  VAR_10.u_bbr.flex3 = (uint32_t)((VAR_7 >> 32) & 0x00000000ffffffff);
  VAR_10.u_bbr.flex4 = (uint32_t)(VAR_7 & 0x00000000ffffffff);
  if (VAR_8)
   VAR_10.u_bbr.flex5 = (1 << 2);
  else
   VAR_10.u_bbr.flex5 = 0;
  VAR_10.u_bbr.flex6 = VAR_8;
  VAR_10.u_bbr.flex7 = VAR_3;
  VAR_10.u_bbr.flex8 = VAR_9;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      VAR_4, &VAR_10, 0, &VAR_2->rc_tv);
 }
}
