
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* flex4; void* flex3; void* flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
typedef void* uint32_t ;
struct tcpcb {scalar_t__ t_logstate; } ;
struct tcp_bbr {int rc_tv; TYPE_2__* rc_inp; } ;
typedef void* int32_t ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_3__*,void*) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_2, struct tcpcb *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, int32_t VAR_7, int32_t VAR_8, uint32_t VAR_9)
{
 if (VAR_3->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_10;

  FUNC_1(VAR_2, &VAR_10.u_bbr, VAR_9);
  VAR_10.u_bbr.flex1 = VAR_8;
  VAR_10.u_bbr.flex2 = VAR_5;
  VAR_10.u_bbr.flex3 = VAR_6;
  VAR_10.u_bbr.flex4 = VAR_7;
  FUNC_0(VAR_3, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_10, 0, &VAR_2->rc_tv);
 }
}
