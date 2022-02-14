
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union tcp_log_stackspecific {int u_bbr; } ;
struct timeval {int dummy; } ;
struct tcp_bbr {TYPE_3__* rc_tp; TYPE_2__* rc_inp; } ;
struct sockbuf {int dummy; } ;
struct TYPE_6__ {scalar_t__ t_logstate; } ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {struct sockbuf so_snd; struct sockbuf so_rcv; } ;


 int FUNC_0 (TYPE_3__*,int *,struct sockbuf*,struct sockbuf*,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,int *,int ) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_2)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_3;
  struct sockbuf *VAR_4, *VAR_5;
  struct timeval VAR_6;

  if (VAR_2->rc_inp->inp_socket) {
   VAR_4 = &VAR_2->rc_inp->inp_socket->so_rcv;
   VAR_5 = &VAR_2->rc_inp->inp_socket->so_snd;
  } else {
   VAR_4 = VAR_5 = ((void*)0);
  }
  FUNC_1(VAR_2, &VAR_3.u_bbr, FUNC_2(&VAR_6));
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      VAR_4, VAR_5,
      VAR_0, 0,
      0, &VAR_3, 0, &VAR_6);
 }
}
