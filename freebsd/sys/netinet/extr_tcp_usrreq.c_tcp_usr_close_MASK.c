
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct socket {int so_state; } ;
struct inpcb {int inp_flags; int * inp_socket; } ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (struct epoch_tracker) ;
 int VAR_3 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct tcpcb*,int ) ;
 int VAR_6 ;
 struct tcpcb* FUNC_10 (struct inpcb*) ;
 struct inpcb* FUNC_11 (struct socket*) ;
 int FUNC_12 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_13(struct socket *VAR_7)
{
 struct inpcb *VAR_8;
 struct tcpcb *VAR_9 = ((void*)0);
 struct epoch_tracker VAR_10;
 VAR_5;

 VAR_8 = FUNC_11(VAR_7);
 FUNC_2(VAR_8 != ((void*)0), ("tcp_usr_close: inp == NULL"));

 FUNC_3(VAR_10);
 FUNC_0(VAR_8);
 FUNC_2(VAR_8->inp_socket != ((void*)0),
     ("tcp_usr_close: inp_socket == NULL"));





 if (!(VAR_8->inp_flags & VAR_2) &&
     !(VAR_8->inp_flags & VAR_0)) {
  VAR_9 = FUNC_10(VAR_8);
  FUNC_7();
  FUNC_12(VAR_9);
  FUNC_8(VAR_3);
  FUNC_9(VAR_6, VAR_9, VAR_3);
 }
 if (!(VAR_8->inp_flags & VAR_0)) {
  FUNC_5(VAR_7);
  VAR_7->so_state |= VAR_4;
  FUNC_6(VAR_7);
  VAR_8->inp_flags |= VAR_1;
 }
 FUNC_1(VAR_8);
 FUNC_4(VAR_10);
}
