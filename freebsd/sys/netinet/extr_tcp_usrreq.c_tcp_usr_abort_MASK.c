
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
 int VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (struct epoch_tracker) ;
 int VAR_4 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct tcpcb*,int ) ;
 int VAR_7 ;
 struct tcpcb* FUNC_10 (struct inpcb*) ;
 struct inpcb* FUNC_11 (struct socket*) ;
 struct tcpcb* FUNC_12 (struct tcpcb*,int ) ;

__attribute__((used)) static void
FUNC_13(struct socket *VAR_8)
{
 struct inpcb *VAR_9;
 struct tcpcb *VAR_10 = ((void*)0);
 struct epoch_tracker VAR_11;
 VAR_6;

 VAR_9 = FUNC_11(VAR_8);
 FUNC_2(VAR_9 != ((void*)0), ("tcp_usr_abort: inp == NULL"));

 FUNC_3(VAR_11);
 FUNC_0(VAR_9);
 FUNC_2(VAR_9->inp_socket != ((void*)0),
     ("tcp_usr_abort: inp_socket == NULL"));




 if (!(VAR_9->inp_flags & VAR_3) &&
     !(VAR_9->inp_flags & VAR_1)) {
  VAR_10 = FUNC_10(VAR_9);
  FUNC_7();
  VAR_10 = FUNC_12(VAR_10, VAR_0);
  if (VAR_10 == ((void*)0))
   goto dropped;
  FUNC_8(VAR_4);
  FUNC_9(VAR_7, VAR_10, VAR_4);
 }
 if (!(VAR_9->inp_flags & VAR_1)) {
  FUNC_5(VAR_8);
  VAR_8->so_state |= VAR_5;
  FUNC_6(VAR_8);
  VAR_9->inp_flags |= VAR_2;
 }
 FUNC_1(VAR_9);
dropped:
 FUNC_4(VAR_11);
}
