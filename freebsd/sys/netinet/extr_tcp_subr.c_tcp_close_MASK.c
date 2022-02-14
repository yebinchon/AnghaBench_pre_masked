
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; int * t_tfo_pending; struct inpcb* t_inpcb; } ;
struct socket {int so_state; } ;
struct inpcb {int inp_flags; struct socket* inp_socket; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct socket*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tcpcb*) ;
 int FUNC_11 (struct tcpcb*,scalar_t__) ;
 int VAR_5 ;

struct tcpcb *
FUNC_12(struct tcpcb *VAR_6)
{
 struct inpcb *VAR_7 = VAR_6->t_inpcb;
 struct socket *VAR_8;

 FUNC_0(&VAR_4);
 FUNC_1(VAR_7);
 if (VAR_6->t_tfo_pending) {
  FUNC_9(VAR_6->t_tfo_pending);
  VAR_6->t_tfo_pending = ((void*)0);
 }
 FUNC_6(VAR_7);
 FUNC_5(VAR_5);
 if (VAR_6->t_state != VAR_2)
  FUNC_11(VAR_6, VAR_2);
 FUNC_3(VAR_7->inp_socket != ((void*)0), ("tcp_close: inp_socket NULL"));
 VAR_8 = VAR_7->inp_socket;
 FUNC_8(VAR_8);
 if (VAR_7->inp_flags & VAR_0) {
  FUNC_3(VAR_8->so_state & VAR_1,
      ("tcp_close: !SS_PROTOREF"));
  VAR_7->inp_flags &= ~VAR_0;
  FUNC_2(VAR_7);
  FUNC_4(VAR_8);
  VAR_8->so_state &= ~VAR_1;
  FUNC_7(VAR_8);
  return (((void*)0));
 }
 return (VAR_6);
}
