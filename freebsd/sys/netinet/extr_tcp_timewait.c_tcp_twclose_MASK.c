
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcptw {struct inpcb* tw_inpcb; } ;
struct socket {int so_state; } ;
struct inpcb {int inp_flags; struct socket* inp_socket; int * inp_ppcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct socket*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct inpcb*) ;
 struct tcptw* FUNC_8 (struct inpcb*) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct tcptw*,int) ;
 int VAR_3 ;

void
FUNC_11(struct tcptw *VAR_4, int VAR_5)
{
 struct socket *VAR_6;
 struct inpcb *VAR_7;
 VAR_7 = VAR_4->tw_inpcb;
 FUNC_2((VAR_7->inp_flags & VAR_1), ("tcp_twclose: !timewait"));
 FUNC_2(FUNC_8(VAR_7) == VAR_4, ("tcp_twclose: inp_ppcb != tw"));
 FUNC_3();
 FUNC_0(VAR_7);

 FUNC_10(VAR_4, VAR_5);
 VAR_7->inp_ppcb = ((void*)0);
 FUNC_6(VAR_7);

 VAR_6 = VAR_7->inp_socket;
 if (VAR_6 != ((void*)0)) {






  if (VAR_7->inp_flags & VAR_0) {
   VAR_7->inp_flags &= ~VAR_0;
   FUNC_1(VAR_7);
   FUNC_4(VAR_6);
   FUNC_2(VAR_6->so_state & VAR_2,
       ("tcp_twclose: INP_SOCKREF && !SS_PROTOREF"));
   VAR_6->so_state &= ~VAR_2;
   FUNC_9(VAR_6);
  } else {





   FUNC_1(VAR_7);
  }
 } else {




  FUNC_7(VAR_7);
 }
 FUNC_5(VAR_3);
}
