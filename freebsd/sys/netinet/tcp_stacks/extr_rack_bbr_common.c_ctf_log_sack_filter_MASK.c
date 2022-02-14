
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flex8; int pkts_out; int applimited; int flex6; int flex5; int flex4; int flex3; int flex2; int flex1; int timeStamp; } ;
union tcp_log_stackspecific {TYPE_1__ u_bbr; } ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; TYPE_3__* t_inpcb; } ;
struct sackblk {int end; int start; } ;
typedef int log ;
struct TYPE_6__ {TYPE_2__* inp_socket; } ;
struct TYPE_5__ {int so_snd; int so_rcv; } ;


 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union tcp_log_stackspecific*,int ,int) ;
 int FUNC_2 (struct timeval*) ;

void
FUNC_3(struct tcpcb *VAR_2, int VAR_3, struct sackblk *VAR_4)
{
 if (VAR_2->t_logstate != VAR_0) {
  union tcp_log_stackspecific VAR_5;
  struct timeval VAR_6;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.u_bbr.timeStamp = FUNC_2(&VAR_6);
  VAR_5.u_bbr.flex8 = VAR_3;
  if (VAR_3 > 0) {
   VAR_5.u_bbr.flex1 = VAR_4[0].start;
   VAR_5.u_bbr.flex2 = VAR_4[0].end;
  }
  if (VAR_3 > 1) {
   VAR_5.u_bbr.flex3 = VAR_4[1].start;
   VAR_5.u_bbr.flex4 = VAR_4[1].end;
  }
  if (VAR_3 > 2) {
   VAR_5.u_bbr.flex5 = VAR_4[2].start;
   VAR_5.u_bbr.flex6 = VAR_4[2].end;
  }
  if (VAR_3 > 3) {
   VAR_5.u_bbr.applimited = VAR_4[3].start;
   VAR_5.u_bbr.pkts_out = VAR_4[3].end;
  }
  FUNC_0(VAR_2, ((void*)0),
      &VAR_2->t_inpcb->inp_socket->so_rcv,
      &VAR_2->t_inpcb->inp_socket->so_snd,
      VAR_1, 0,
      0, &VAR_5, 0, &VAR_6);
 }
}
