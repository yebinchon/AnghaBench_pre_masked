
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_logstate; TYPE_1__* t_inpcb; } ;
struct socket {int so_snd; int so_rcv; } ;
struct TYPE_2__ {struct socket* inp_socket; } ;


 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_1(struct tcpcb *VAR_2)
{
 if (VAR_2->t_logstate != VAR_1) {
  struct socket *VAR_3 = VAR_2->t_inpcb->inp_socket;
  FUNC_0(VAR_2, ((void*)0), &VAR_3->so_rcv, &VAR_3->so_snd,
    VAR_0, 0, 0, ((void*)0), 0);
 }
}
